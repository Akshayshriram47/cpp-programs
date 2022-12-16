#include<iostream>
//using namespace std;

namespace Marvellous
{
    class Demo
    {
        public:
            int i,j;
            void fun()
            {
             std:: cout<<"inside fun of demo from marvellous\n";
            }
    };
    class Hello
    {
        public:
        int x,y;
    };
}
namespace Infosystem
{
    class Demo
    {
        public:
            int a,b;
            void fun()
            {
               std:: cout<<"inside fun of demo from infosystem\n";
            }
    };
}
int main()
{
    Marvellous :: Demo obj1;
    obj1.fun();

    Infosystem:: Demo obj2;
    obj2.fun();

    using namespace Marvellous;
    Hello hobj;
    Demo dobj3;
    
    
    return 0;
}