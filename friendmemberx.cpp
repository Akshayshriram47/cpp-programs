#include<iostream>
using namespace std;


class Marvellous
{
    public:
      void  fun();
      void gun();



};

class demo
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;

    public:
        demo()
        {
            i = 10;
            j = 20;
            k = 30;
        }
        
    friend void Marvellous::fun();
    friend void Marvellous::gun();

};
void Marvellous::fun()  // member function
{
    demo obj;
        cout<<"value of i fun:"<<obj.i<<"\n";
        cout<<"value of j fun:"<<obj.j<<"\n";
        cout<<"value of k fun:"<<obj.k<<"\n";
}
void Marvellous::gun()  // member function
{
    demo obj;
        cout<<"value of i gun:"<<obj.i<<"\n";
        cout<<"value of j gun:"<<obj.j<<"\n";
        cout<<"value of k gun:"<<obj.k<<"\n";
}

int main()
{
   Marvellous mobj;
   mobj.fun();
   mobj.gun();


    return 0;
}