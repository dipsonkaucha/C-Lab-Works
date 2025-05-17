/* wap to define a class box which has private data members length, breadth and height and public function
members: readData() for reading data members and showVolume() to show the volume should be displayed in the
main()*/

#include<iostream>
using namespace std;

class Box {
	private:
		double length;
		double breadth;
		double height;
	public:
	    void readData(){
	    	cout <<"Enter length, breadth and height of the box: ";
	    	cin >> length >> breadth >> height;
		}
		double showVolume(){
			double volume = length*breadth*height;
			return volume;
		}	
};
int main ()
{
	Box b;
	b.readData();
	double volume = b.showVolume();
	cout <<"The volume of the box is: " << volume <<endl;
    return (0);
}

