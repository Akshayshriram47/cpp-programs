#include<iostream>
using namespace std;

class base
{
    public:                          //Access specifier
       int A,B;

       void fun()                   // Function defination   1000
       {
            cout<<"base fun \n";
       } 

       void gun(int i)              // Function defination   2000
       {
            cout<<"base gun with one integer \n";
       }
       void gun (int i, int j)      //overloaded function defination  3000
       {
        cout<<"base gun with two integer \n ";
       }
};

class derived : public base
{
    public:
        int X,Y;
        void sun()          // Function Definatio   4000
        {
                cout<<"derived sun\n";
        }
        void fun()          // Function re-defination   5000
        { 
            cout<<"derived fun\n";
        }

};

int main()
{
   derived dobj ;
   dobj.fun();     // 5000
   dobj.gun(11);    // 2000
   dobj.gun(11,21);  // 3000
   dobj.sun();        // 4000
   
   return 0;
}