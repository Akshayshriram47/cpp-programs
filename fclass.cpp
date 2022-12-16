#include<iostream>
using namespace std;


class Maths
{
    public:            // Access specifier
    int ino1;         // Characteristics
    int ino2;          // Characteristics

    Maths()          // constructor(default)
    {

    ino1=0;
    ino2=0;
    }

    Maths(int A,int B)   // constructor (parameterised)
    {
        ino1=A;
        ino2=B;

    }
    
    int Addition()         // Behaviour
    {
        return ino1+ino2;
    }

    int Substraction()        // Behaviour
    {
        return ino1-ino2;
    }
};
int main()
{
    Maths mobj1;
    Maths mobj2(11,10);
    int ret = 0;

    ret = mobj2.Addition();
    cout<<"addition of mobj2:"<<ret<<"\n";

    ret= mobj1.Addition();
    cout<<"Addition of mobj1:"<<ret<<"\n";



  return 0;
}