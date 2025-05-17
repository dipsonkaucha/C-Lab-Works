/* create a class person with data members : name , age, address, and citizenship_number  
   write a constructor to initilaize the value of a person 
   also create a function display() to display values
*/

#include<iostream>
#include<string>

using namespace std;

class Person
{
	private:
		string Name , address  , citizenship_number;
		int age;
	public:
	    Person(string n, int a , string ad, string cn)
		{
			Name = n;
			age = a;
			address = ad;
			citizenship_number = cn;
		}
		void display()
		{
			
			cout << "The name of the person is : " << Name << endl;
			cout << "The address of the person is : " << address << endl;
			cout << "The age of the person is : " << age << endl;
			cout << "The cn of the person is : " << citizenship_number << endl;
			
			}	
};

int main()
{
    Person p1("me", 20 , "pkr", "89987");
    
	p1.display();
	return 0;
}
