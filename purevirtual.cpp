#include<iostream>
#include<stdlib.h>
using namespace std;

class Circle
{
    public:             // Access specifier
        float PI;       // characteristics
        float Radius;   // characteristics

    Circle()                // default constructor
    {
        PI = 3.14;
        Radius = 0.0;

    }
    Circle(float A, float B)   // parameterised constructor
    {
       PI = A;
       Radius = B;


    }
    void Display()  // concrete method  //  1000
    {
        cout<<"value of radius is:"<<Radius<<"\n";

    }
    virtual float Area() = 0;       // Abstract method
    virtual float Circumference() = 0;  // Abstract method

    
};
 class Marvellous : public Circle
{
    public:

        Marvellous() : Circle()
        {


        }

        Marvellous(float X, float Y) : Circle(X,Y)
        {

        }


        float Area()    // concrete method   // 2000
        {
            float Ans = PI * Radius * Radius;
            return Ans;

        }
        float Circumference()    // concrete method  // 3000
        {
            float Ans = 0.0;
            Ans = 2 * PI * Radius;
            return Ans;
        }
};

int main()
{
    Marvellous mobj1;
    Marvellous mobj2(3.14,10.89);

    float fret = 0.0;

    fret = mobj2.Area();
    cout<<"Area is :"<<fret<<"\n";

    fret= mobj2.Circumference();
    cout<<"circumference is:"<<fret<<"\n";

    return 0;
}