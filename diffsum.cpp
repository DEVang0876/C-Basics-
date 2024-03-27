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
    return a+b;
}
int main()
{
    int c;
    B obb;
    obb.getA();
    obb.getB();
    c=obb.sum();
    cout<<endl<<"SUM= "<<c;
    return 0;
}
