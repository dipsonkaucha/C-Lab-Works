/*wap to illustrate input stream manipulator*/

#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
	char c1, c2;
	
	// input skips whitespace by default
	
	cin >> c1;
	
	// input the next character without skipping the whitespace
	
	cin >> noskipws >> c2;
	
	cout<<"c1: "<<c1 <<"\n" <<"c2: "<<c2;
    return (0);
}

