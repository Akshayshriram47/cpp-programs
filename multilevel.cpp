#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;

        Base()
        {
            cout<<"Inside Base constructor\n";
        }
        ~Base()
        {
            cout<<"Inside Base destructor\n";
        }
        void fun()
        {
            cout<<"Inside Base fun\n";
        }
};

class Derived : public Base
{   
    public:
        int X,Y;
        
        Derived()
        {
            cout<<"Inside derived constructor\n";
        }
        ~Derived()
        {
            cout<<"Inside derived destrcutor\n";
        }
        void gun()
        {
            cout<<"Inside gun of Derived\n";
        }
};

        class DerivedX : public Derived
{
            public:
            int I, J;
            DerivedX()
            {
                cout<<"inside the constructor\n";

            }
            ~DerivedX()
            {
                    cout<<"inside the destructor\n";
            }
            void sun()
            {
                cout<<"inside the sun\n";
            }

};

int main()
{
   
   cout<<"size of base"<<sizeof(Base)<<"\n";
    cout<<"size of derived"<<sizeof(Derived)<<"\n";
    cout<<"size of derivedx"<<sizeof(DerivedX)<<"\n";

    DerivedX dobj;
    
    dobj.fun();
    dobj.gun();
    dobj.sun();
    


    return 0;
}