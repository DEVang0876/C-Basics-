#include<iostream>
using namespace std;
int main();
class empX
{
    float exp;
    public:
    void put_exp();
    empX(){}
    empX(float ex);


};
empX:: empX(float ex)
{
    exp=ex;
}
void empX:: put_exp()
{
    int tempY, tempM; float tempp;
    tempY=exp;
    tempp=exp-tempY;
    tempp=(tempp*12);
    tempM=tempp;
    cout<<"Employee experience is "<<tempY<<" years and  "<<tempM<<" months";
}
int main()
{
    float expr;
    cout<<endl<<"Enter employee experience : ";
    cin>>expr;
    empX obj;
    obj=empX(expr);
    obj.put_exp();
    return 0;
}
