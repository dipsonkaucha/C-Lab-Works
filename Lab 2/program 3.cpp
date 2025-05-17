// wap to calculate the area of a square
// create a class Square having its data members length and member function():
// getdata() that receives data and calculateArea() that displays the area


#include<iostream>
using namespace std;

class Square {
	private :
		double length;
	public : 
	    void getdata(){
	    	cout << "Enter the length of the square : ";
	    	cin >> length;
		}
		void calculateArea(){
			double area = length*length;
			cout << "The area of the square is : "<< area << endl;
		}	
};
int main ()
{
	Square s;
	s.getdata();
	s.calculateArea();
    return (0);
}

