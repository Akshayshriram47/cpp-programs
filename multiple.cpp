#include<iostream>
using namespace std;

class Base1   //4
{
    public:
    int A;
    Base1()
    {
        cout<<"base 1 constructor\n";
    }
    
};
class Base2  //12
{
    public:
    int I,J,K;
     Base2()
    {
        cout<<"base 2 constructor\n";
    }
    
};
class Derived: public Base1,public Base2  // 24
{
    public:
    int X,Y;
     Derived()
    {
        cout<<" derived constructor\n";
    }
     ~Derived()
    {
        cout<<"derived destructor\n";
    }
    void sun()
    {
        cout<<"insidse sun\n";
    }

    
};
int main()
{
    Derived dobj;


    return 0;
}