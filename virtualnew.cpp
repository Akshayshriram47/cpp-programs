#include<iostream>
using namespace std;

class base
{
    public:                          //Access specifier
       int A,B;
    void fun()   //1000
    {
        cout<<"base fun\n";  
    }
    virtual void gun()   //2000
    {
        cout<<"base gun\n";
    }
    virtual void sun()   //3000
    {
        cout<<"base sun\n";
    }
     virtual void run()  //4000
    {
        cout<<"base run\n";
    }


      
};

class derived : public base
{
    public:
        int X,Y;
        void gun()   //5000
        {
            cout<<"derived gun\n";
        }
        virtual void run()   //6000 
        {
            cout<<"derived run\n";
        }
        virtual void mun()   //7000
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
     bp = & dobj;    // upcasting

     bp->fun();  // base fun
     bp->gun();  // derived gun
     bp->sun();   // base sun
     bp->run();   // derived run
    
     // bp->mun();  error

   return 0;
}