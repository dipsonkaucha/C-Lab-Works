/* LAB 2:To be familiar with friend functions , contructors and friend classes
using a class wap to receive principle, amount , time and rate    
keeping rate 8% as default argument , calculate simple interest for three years  */

#include<iostream>
using namespace std;

class Customer
{
	private:
		float principal , amount, time , rate;
	public:
	    Customer(float p,float a, float t , float r = 0.08 )
		{
			principal = p;
			amount = a;
			time = t;
			rate = r;
			}	
		float calculateInterest()
		{
			return principal * rate * time;
			}	
			
			
};

int main()
{
	Customer c1(1000,1200,2);
	Customer c2(2000,2400,3);
	Customer c3(3000,3600,4);
	cout << "Simple interest for customer 1 is : " << c1.calculateInterest() << endl;
	cout << "Simple interest for customer 2 is : " << c2.calculateInterest() << endl;
	cout << "Simple interest for customer 3 is : " << c3.calculateInterest() << endl;
	return 0;
}
