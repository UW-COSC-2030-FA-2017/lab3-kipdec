#include <iostream>
#include <cmath>
#include "functions.h"
#include "tests.h"

using namespace::std;
/*
Note: The functions can be found in functions.h and the tests can be found in 
	tests.h

QUESTIONS:

1. See function sumDogMillionaire().

2. sumTest() tells me that the last number before overflow is 255 so 256 must be
	the overflow number. Please note that it can display the sum and n as per the
	instructions, but a verbose mode must be enabled by passing a 1 to the function.
	Overflow is detected by the value flipping negative.

3. Long is a different story and much more difficult to compute. Through trial
	and error, I've found, that on a mac, in which long is 16 bytes, it overflows
	at 10737418240

4. See factorio(). We can see that with type<float>, it overlows at n = 35.
	Overflow is detected when the value shoots off to infinity.

5. See factorio() again. We can see that with type<double> it overflows at n = 171.

6. See strange(). I checked with 3 and I noticed when comparing double and float, that
	float, after setting precicion high so I could see the full output, introduces
	some weird numeric artifacts while double remains exact, meaning that float is
	not as exact in double.

7/8. See puzzle(). Though the results initially seem higher, float behaves strangely.
	Setting precision higher allows us to see why float prints one more time than
	double. On the fifth time through puzzle, float returns 4.19999981 instead of 
	double's more exact 4.2. According to our for loop, the loop continues until
	the value i reaches 4.2. Though float is close it is not quite there, and 
	repeats once more, explaining its strange behavior. This is due to float's, as 
	previously discussed, innacuracy at the end of numbers.

*/


int main(){
	cout << "Puzzle as float..." << endl;
	puzzle<float>();
	cout << "Puzzle as double..." << endl;
	puzzle<double>();
	cout << "Experimenting with floats..." << endl;
	valReturnStrange<float>();
	cout << "Experimenting with doubles..." << endl;
	valReturnStrange<double>();
	cout << endl;
	sumTest(1);
	facTest(1);
	cout << "Strange with float..." << endl;
	strangeTest<float>(1);
	cout << "Strange with double..." << endl;
	strangeTest<double>(1);
	cout << endl;

	cout << "Max size for type<short>: " << std::numeric_limits<short>::max() << 
		endl;
	cout << "Max number before overflow for summing for type<float>:" << 
		flowFinder<short>(0) << endl << "Test it yourself: " << endl;
	sumReturn<short>();
	cout << "Now try " << flowFinder<short>(0) + 1 << ":" << endl;
	sumReturn<short>();
	cout << endl;

	cout << "Max size for type<long>: \nOutput: " << std::numeric_limits<long>::max() << 
		endl;
	cout << "Actual max size for type<long>: \nOutput: 2147483647" << endl;
	cout << "Max number before overflow for summing for type<long>: 10737418239"
		<< endl; 
	// The following takes too long. Try it if you have time.
	//cout << "Try it yourself: 10737418239" << endl;
	//sumReturn<long>();
	//cout<< "Now try 10737418240" << endl;
	//sumReturn<long>();

	cout << "Max size for type<float>: " << std::numeric_limits<float>::max() << 
		endl;
	cout << "Max number before overflow for factorial for type<float>:" << 
		factFinder<float>(0) << endl << "Test it yourself: " << endl;
	valReturn<float>();
	cout << "Now try " << factFinder<float>(0) + 1 << ":" << endl;
	valReturn<float>();
	cout << endl;

	cout << "Max size for type<double>: " << std::numeric_limits<double>::max() 
		<< endl;
	cout << "Max number before overflow for factorial for type<double>:" << 
		factFinder<double>(0) << endl << "Test it yourself: " << endl;
	valReturn<double>();
	cout << "Now try " << factFinder<double>(0) + 1 << ":" << endl;
	valReturn<double>();
	cout << endl << endl;

	
	
	return 0;
}

