#include<iostream>
using namespace std;
int main();
class MM;
class CM
{
    float cm;
    public:
    void inputcm(){cin>>cm;}
    float getcm();
    void putcm(){cout<<cm;}
    CM(){cm=0;}
    CM(MM &y);
};
class MM
{
    float mm;
    public:
    MM(){mm=0;}
    MM(CM &x)
    {
        float tempp=x.getcm();
        mm=(100*(tempp));
    }
    float getmm(){return mm;}
    void inputmm();
    void putmm(){cout<<mm;}
};
CM:: CM(MM &y)
{
    float temp=y.getmm();
    cm=(temp/100);
}
void MM::inputmm()
{
    cin>>mm;
}
float CM :: getcm()
{
    return cm;
}
int main()
{
    CM a; MM b;
    menu:
    int i;
    cout<<endl<<"Enter 1 : mm to cm converter";
    cout<<endl<<"Enter 2 : cm to mm converter";
    cin>>i;
    if(i==1)
    {
        cout<<endl<<"Enter measurement in mm : ";
        b.inputmm();
        a=b;
        cout<<endl<<"Measurement in cm : ";a.putcm();
    }
    else if(i==2)
    {  
        cout<<endl<<"Enter measurement in cm : ";
        a.inputcm();
        b=a;
        cout<<endl<<"Measurement in mm : "; b.putmm();
    }
    else{
        cout<<endl<<"INVALID INPUT !!!!";
        goto menu;
    }
    return 0;
}