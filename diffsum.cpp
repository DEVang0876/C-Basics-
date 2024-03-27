#include<iostream>
using namespace std;
int main();
class A
{
    protected:
    int a;
    public:
    void getA();
    
};
class B: public A
{
    int b;
    public:
    void getB();
    int sum();
};
void A:: getA()
{
    cin>>a;
}
void B:: getB()
{
    cin>>b;
}
int B:: sum()
{
    int temp;
    temp=a+b;
    return temp;
}
int main()
{
    int c;
    A oba; B obb,temp;
    oba.getA();
    obb.getB();
    c=obb.sum();
    cout<<endl<<"SUM= "<<c;
    return 0;
}
