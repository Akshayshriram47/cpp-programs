#include<iostream>
using namespace std;


class Marvellous
{
    public:
      void  fun();


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
};
void Marvellous::fun()  // member function
{
    demo obj;
        cout<<"value of i:"<<obj.i<<"\n";
        cout<<"value of j:"<<obj.j<<"\n";
        cout<<"value of k:"<<obj.k<<"\n";
}

int main()
{
   Marvellous mobj;
   mobj.fun();

return 0;
}