#include<iostream>
using namespace std;
int main();
class A
{
    int a;
    public:
    A(){cout<<endl<<"this is class A";}
};
class B: public A
{
    int b;
    public:
    B(){cout<<endl<<"this is class B";}

};
int main()
{
     A ob; B obj; 
    return 0;
}