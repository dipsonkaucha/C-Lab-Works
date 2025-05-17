//Create class one and two with each having one private member 
//add member function to set a value (say setValue) on each class 
//add one more function max() that is fridnly to both classes 
//max() function should compare two classes and show the max among them

#include <iostream>
using namespace std;

class Two;  // Forward declaration for use in class One

class One {
private:
    int value;
public:
    void setValue(int v) {
        value = v;
    }

    // Declare max() as friend
    friend void max(One, Two);
};

class Two {
private:
    int value;
public:
    void setValue(int v) {
        value = v;
    }

    // Declare max() as friend
    friend void max(One, Two);
};

// Friend function to find and display the maximum value
void max(One o, Two t) {
    if (o.value > t.value)
        cout << "Max is: " << o.value << endl;
    else if (t.value > o.value)
        cout << "Max is: " << t.value << endl;
    else
        cout << "Both values are equal: " << o.value << endl;
}

int main() {
    One obj1;
    Two obj2;

    obj1.setValue(15);
    obj2.setValue(25);

    max(obj1, obj2);

    return 0;
}

