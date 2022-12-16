#include<iostream>
using namespace std;


class Demo
{
   public:  // access specifier
   int i;  // instance variable
   int j;  // instance variable
   static int k;  // class vatriable
    static int l; // class variable
   Demo()  // default constructor
   {
     i = 0;
     j = 0;
    }  

    Demo(int a, int b)  // parameterised constructor
    {
        i = a;
        j = b;
    }
     void fun()  // instance method
    {
        // static + non static
    }

    static void gun() // class method
    {
        //  static
    }
};   

int Demo::k = 0;  // static int k initialization
int Demo::l = 0;

int main()
{
 
 cout<<"Value of k:"<<Demo::k<<"\n";  //0
 cout<<"Value of l:"<<Demo::l<<"\n";  //0

 Demo::gun();

 Demo obj1(10,11);  
 Demo obj2(20,21); 
 // cout<<sizeof(obj1);     // 8 byte

 cout<<"value of i in obj1 :"<<obj1.i<<"\n"; // 10
 cout<<"value of i in obj2:"<<obj2.i<<"\n";  //20

cout<<"value of j in obj1 :"<<obj1.j<<"\n"; //11
 cout<<"value of j in obj2:"<<obj2.j<<"\n"; //21


 obj1.fun();
 obj2.fun();
 
return 0;
}