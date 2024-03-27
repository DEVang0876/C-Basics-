#include<iostream>
using namespace std;
int main();
class A
{
    int a;
    public:
    A(){a=5;}
    
    
};
class B: public A
{
    int b;
    public:
    B(){b=5;}

};
int main()
{
    return 0;
}