// wap to illustrate output stream manipulators

#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
	// output a new line and flush the stream
	cout << "Hello" << endl;
	
	// set width to 10 for the next output
	cout << setw(10) << 42 << endl;
	
	// use fixed point notation
	cout << fixed <<3.14159 << endl;
	
	// set precision to 3 for floating point numbers
	cout << setprecision(3) << 3.14159 << endl;
	
	// use scientific notation
	cout << scientific <<3.14159 << endl;
	
	// show the decimal point even for whole numbers
	cout << showpoint <<42.0;
    return (0);
}

