//  wap to add complex numbers using the concept of constructor and friend function
#include<iostream>
using namespace std;

class Complex 
{
	private:
		int real;
		int imaginary;
	public:
	    Complex(int r = , int i = )
		{
			real = r;
			imaginary = i;
			}	
		
		friend Complex sum(Complex,Complex);
		friend void show(Complex);	
};

Complex sum(Complex c1 , Complex c2)
{
	Complex temp;
	temp.real = c1.real + c2.real;
	temp.imaginary = c1.imaginary + c2.imaginary;
	return temp;
	
}

void show(Complex c)
{
	cout << c.real << "+j" << c.imaginary << endl; 
}

int main()
{
	Complex c1(3,4);
	Complex c2(2,6);
	cout<<"The first complex number is ";
	show(c1);
	cout<<"The second complex number is ";
	show(c2);
	Complex Result;
	Result = sum(c1,c2);
	cout<<"Their sum is ";
	show(Result);
	return 0;
}
