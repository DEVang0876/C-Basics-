//devang dhandhukiya
//23aiml014
#include<iostream>
#include<cmath>
using namespace std;
int main();
class A
{
    int month;
    int year;
    public:
    A(){}
    A(int y, int m);
    void put_exp();

};
A:: A(int y, int m)
{
    month=m;
    year=y;
}
void A:: put_exp()
{
    int temp;
    float tempF;
    temp=12*(year);
    temp=temp+month;
    tempF=(temp/12);
    
    cout<<"Employee experience is :"<<tempF;
}
int main()
{
    int m,y;
    cout<<"Enteer employee experience in years and months"<<endl;
    cout<<"Years :";
    cin>>y; //cout<<endl;
    cout<<"Months :";
    cin>>m; cout<<endl<<endl;
    A obj;
    obj=A(m,y);
    obj.put_exp();
    return 0;
}