using namespace::std;
#include <iomanip>
template<typename T>
T sumDogMillionaire(int num, bool arg){
	T sum = 0;
	for(int i = 1; i <= num; i++){
		sum = sum + i;
	}
	if(arg == 1){
		cout << "N= " << num << "Sum= " << sum << endl;
    }
	return sum;
}

template<typename T>
T factorio(long n, bool arg){
	T product = 1;
	for(long i = 1; i <= n; i++){
		product = product * i;
		
	}
	if(arg == 1){
		cout << "N= " << n << "Sum= " << product << endl;
	}
	return product;
}

template<typename T>
T strange(int n, bool arg){
	T sum = 0;
	for(T i = 1; i <= n; i++){
		sum = sum + 1/i;
	} 
	if(arg == 1){
		cout << "N= " << n << "Sum= " << sum << endl;
    }
    return sum;
}

template<typename T>
void sumReturn(){
	T num = 0;
	cout << "Gimme a number: ";
	cin >> num;
	cout << "Output: " << sumDogMillionaire<T>(num,0) << endl;
}

template<typename T>
void valReturn(){
	long num = 0;
	cout << "Gimme a number: ";
	cin >> num;
	cout << "Output: " << factorio<T>(num,0) << endl;
}

template<typename T>
void valReturnStrange(){
	long num = 0;
	cout << "Gimme a number: ";
	cin >> num;
	cout << "Output: " << std::setprecision(9) << strange<T>(num,0) << endl;
}

template<typename T> // Finds the last viable value for a data type
int flowFinder(bool arg){
	T i = 250;
	T early = -1;
	T late = 0;
	while(early <= late){
		late = sumDogMillionaire<T>(i, 0);

		if(late >= early){
			early = late;
			if(arg == 1){
				cout << " Late: " << late << endl;
			}
			i++;
		} else {
			if(arg == 1){
				cout << endl << "done" << endl;
			}
		}
		
	}
	if(arg == 1){
		cout << "early: " << early << endl;
	}
	i--;
	return i;
}

template<typename T> // Finds the last viable value for a data type
int factFinder(bool arg){
	int i = 1;
	T fact = -1;
	T late = 0;
	while(fact < std::numeric_limits<T>::max()){
		fact = factorio<T>(i, 0);

		if(fact < std::numeric_limits<T>::max()){
			i++;
		} else {
			if(arg == 1){
				cout << "done";
			}
		}
		
	}
	i--;
	return i;
}

template<typename T>
void puzzle(){
	for (T i = 3.4; i < 4.4; i += 0.2){
		cout << "i = " << std::setprecision(9) << i << endl;
	}
}