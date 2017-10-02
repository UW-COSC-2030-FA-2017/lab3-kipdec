using namespace::std;
 
void sumTest(bool arg){

	bool tf = 0;
	if(arg == 1){
		cout << "Beginning Summation Test..." << endl;
	}

	if(sumDogMillionaire<short int>(1,0) != 1){
		tf = 1;
	} else if (arg == 1) { cout << "Pass 1\t"; }
	if(sumDogMillionaire<short int>(2,0) != 3){
		tf = 1;
	} else if (arg == 1) { cout << "Pass 2\t"; }
	if(sumDogMillionaire<short int>(3,0) != 6){
		tf = 1;
	} else if (arg == 1) { cout << "Pass 3\t"; }
	if(sumDogMillionaire<short int>(4,0) != 10){
		tf = 1;
	} else if (arg == 1) { cout << "Pass 4\t"; }
	if(sumDogMillionaire<short int>(5,0) != 15){
		tf = 1;
	} else if (arg == 1) { cout << "Pass 5" << endl; }

	if(tf != 0){
		cout << "Summing test failed. Program will now exit." << endl;
		 exit(EXIT_FAILURE); 
	} else if (arg == 1){
		cout << "Summing test passed!" << endl << endl;
	}
}

void facTest(bool arg){
	bool tf = 0;

	if(arg == 1){
		cout << "Beginning Factorial Test..." << endl;
	}

	if(factorio<float>(1,0) != 1 ){
		tf = 1;
	} else if (arg == 1) { cout << "Pass 1\t"; }
	if(factorio<float>(2,0) != 2 ){
		tf = 1;
	} else if (arg == 1) { cout << "Pass 2\t"; }
	if(factorio<float>(3,0) != 6 ){
		tf = 1;
	} else if (arg == 1) { cout << "Pass 3\t"; }
	if(factorio<float>(4,0) != 24 ){
		tf = 1;
	} else if (arg == 1) { cout << "Pass 4\t"; }
	if(factorio<float>(5,0) != 120 ){
		tf = 1;
	} else if (arg == 1) { cout << "Pass 5\t" << endl; }

	if(tf != 0){
		cout << "Factorial test failed. Program will now exit." << endl;
		 exit(EXIT_FAILURE); 
	} else if (arg == 1){
		cout << "Summing test passed!" << endl << endl;
	}
}

void typeTester(){
	cout << "Last viable number for summing type<short>: " << flowFinder<short>(0) 
		<< endl;
	cout << "Last viable number for calculating the product type<float>: " << 
		factFinder<float>(0) << endl;
	cout << "Last viable number for calculating the product type<double>:  " << 
		factFinder<double>(0) << endl;
	//cout << "Last viable number for summing type<long>: " << flowFinder<long>(0) 
	//	<< endl;
}

template<typename T>
void strangeTest(bool arg){
	bool tf = 0;
	if(arg == 1){
		cout << "Beginning Strange Test..." << endl;
	}

	if(strange<T>(1,0) != 1){
		tf = 1;
	} else if (arg == 1) { cout << "Pass 1\t"; }
	if(strange<T>(2,0) != 1.5){
		tf = 1;
	} else if (arg == 1) { cout << "Pass 2\t"; }
	if(!(strange<T>(3,0) >= 1.83 && strange<T>(3,0) <= 1.84)){
		tf = 1;
	} else if (arg == 1) { cout << "Pass 3\t"; }
	if(!(strange<T>(4,0) >= 2.083 && strange<T>(4,0) <= 2.084)){
		tf = 1;
	} else if (arg == 1) { cout << "Pass 4\t"; }
	if(!(strange<T>(5,0) >= 2.283 && strange<T>(5,0) <= 2.284)){
		tf = 1;
	} else if (arg == 1) { cout << "Pass 5" << endl; }

	if(tf != 0){
		cout << "Strange test failed. Program will now exit." << endl;
		 exit(EXIT_FAILURE); 
	} else if (arg == 1){
		cout << "Strange Test passed!" << endl << endl;
	}

}