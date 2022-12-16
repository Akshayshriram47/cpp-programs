#include<iostream>
using namespace std;

class base
{
    public:                          //Access specifier
       int A,B;
    void fun()
    {
        cout<<"base fun\n";
    }
    virtual void gun()
    {
        cout<<"base gun\n";
    }
    virtual void sun()
    {
        cout<<"base sun\n";
    }

      
};

class derived : public base
{
    public:
        int X,Y;
        void gun()
        {
            cout<<"derived gun\n";
        }
        void run()
        {
            cout<<"derived run\n";
        }
        virtual void mun()
        {
            cout<<"derived mun\n";
        }


};

int main()
{
    // cout<<"size of base class:"<<sizeof(base)<<"\n";      // 12
    // cout<<"size of base derived:"<<sizeof(derived)<<"\n";  // 20
    

    base*bp = NULL;
    derived dobj;
    bp = & dobj;

    bp->fun();
    bp->gun();
    bp->sun();

   return 0;
}