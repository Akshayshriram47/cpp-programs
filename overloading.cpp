#include<iostream>
using namespace std;

class Overloading
{

    public:
       //Add@2ii   ( name manglin)
    int Add(int a, int b)           //1000 address
    {
        cout<<"Addition of integers\n\n";
        return a+b;

    }
      //float@2ff
    float Add(float a, float b)     //2000  address
    {
        cout<<"Addition of float\n\n";
        return a+b;

    }   
      //double@2dd
    double Add(double a, double b)              // 3000 address
    {
        cout<<"Addition of double\n\n";
        return a+b;

    }
      //int@3iii
    int Add(int a, int b, int c)        //4000 address
    {
        cout<<"Addition of 3 integers\n\n";
        return a+b+c;

    }
    //Fun@2if
    void Fun(int a, float b)
    {}
    //Fun@2fi
    void Fun( float x, int y)
    {}

};

int main()
{

    Overloading obj;

    int i;
    float f;
    double d;


        i= obj.Add(11,21);        // call 1000
            cout<<i<<"\n\n";
            cout<<sizeof(i)<<"\n";


        i=obj.Add(11,21,51);      // call 4000
            cout<<i<<"\n";

            f=obj.Add(3.14f,5.06f);     // call 2000
            cout<<f<<"\n";

        d= obj.Add(3.14,5.06);  // call 3000
            cout<<d<<"\n";

    return 0;
}