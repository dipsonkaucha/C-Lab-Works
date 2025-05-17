// wap to calculate the area of rectrangle
// create a class rectangle having its data members length and breadth and member function : getdata() that
// receives data and calculateArea() that display the area

#include<iostream>
using namespace std;

class Rectangle {
	private:
		float length, breadth;
	public:
	    void getdata(){
	    	cout << "Enter the length of the rectangle : ";
	    	cin >> length;
	    	cout <<"Enter the breadth of the rectrangle : ";
	    	cin >> breadth;
		}
		float calculateArea(){
			return length*breadth;
		}	
};

int main () {
	Rectangle rect;
	rect.getdata();
	cout << "The area of the rectangle is : " << rect.calculateArea() << endl;
	return 0;
}

