#include<iostream>
#include<stdlib.h>
using namespace std;


class Base
{
    public:
    int A,B;

    Base()
    {

        cout<<"inside base construcor\n";
    }  
    ~Base()
    {
        cout<<"inside base destructor\n";

    } 

    void fun()
    {

        cout<<"inside fun \n";
    }
};



    class Derived : public Base  // class derived extends base (syntax of java)
{
    public:
    int X, Y;
    
     Derived()
    {
        cout<<"inside the derived constructor\n";
    }

    ~Derived()
    {
        cout<<"inside the destructor\n";

    }
     
     void gun()
     {
        cout<<"inside the gun of derived \n";
     }

};


int main()
{
    Derived * ptr = NULL;

    ptr = new Derived;
   
     ptr ->fun();
     ptr ->gun();

    
    
    delete ptr;

    return 0;
}