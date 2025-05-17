/* create a class called one and two with each having a private member.
 add a member function to set value (say set_value) on each class .
 add one more function max() that is friendly to both classes .
 max() function should compare two  private members of two classes and show maximum among them
 create one object of each class then set a value on them .
 display maximum among them . [PU 2016 FALL , 2015 FALL]
*/

#include<iostream>
class Two;
using namespace std;

class One 
{
	private:
		int x;
	public:
	    void setValue(int i)
		{
			x = i;
			}
		
		friend void max(One,Two);
		
				
};

class Two
{
	private:
		int a;
	public:
	    void setValue(int i)
		{
			a = i;
			}	
		
		friend void max(One,Two);	
};

void max(One m,Two n)
{
	if (m.x> n.a)
	{
		cout << "Max is " << m.x << endl;
	}
	else
	{
		cout << "Max is " << n.a << endl;
	}

}

int main()
{
	One ob1;
	Two ob2;
	ob1.setValue(10);
	ob2.setValue(12);
	max(ob1,ob2);
	return 0;
}

