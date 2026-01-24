#include <iostream>
using namespace std;

//This instructions call the copy constructor
//My class x = y; // where y is an object of My class
//function(My class obj); // where obj is an object of My class
//y = function(); // where function returns an object of My class

class MyClass
{
    int val;
    int copynumber;
    public:
    //default constructor
    MyClass(int i)
    {
        val = i;
        copynumber = 0;
        cout << "Inside normal constructor" << endl;
    }
    //copy constructor
    MyClass(const MyClass &o)
    {
        val = o.val;
        copynumber = o.copynumber + 1;
        cout << "Inside copy constructor. " << copynumber << endl;
    }
    //destructor
    ~MyClass()
    {
        if (copynumber==0)
        {
            cout << "Destroying normal object with value " << val << endl;
        }
        else
        {
            cout << "Destroying copy number " << copynumber << " with value " << val << endl;
        }
        
    }
    int getval()
    {
        return val;
    }
};

void display(MyClass ob)
{
    cout << "Value is " << ob.getval() << endl;
}

int main()
{
    MyClass obj1(10); //normal constructor called
    display(obj1); //copy constructor called
    MyClass obj2 = obj1; //copy constructor called
    cout << "Value of obj2 is " << obj2.getval() << endl;
    return 0;
}