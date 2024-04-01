#include<iostream>
using namespace std;
int main();
class CM
{
    float cm;
    public:
    void inputcm();
    float getcm();
    

};
class MM
{
    float mm;
    public:
    float getmm();
    MM(){mm=0;}
    MM(CM &x)
    {
        float temp;
        temp=x.getcm();
        cout<<(100*(temp));
    }
};
float CM :: getcm()
{
    return cm;
}
float MM:: getmm()
{
    cout<<mm;
}
int main()
{
    CM a;
    MM b;
    menu:
    int i;
    cout<<endl<<"Enter 1 : mm to cm converter";
    cout<<endl<<"Enter 2 : cm to mm converter";
    cin>>i;
    if(i==1)
    {
        int j;
        cout<<endl<<"Enter measurement in mm";
        cin>>j;
        cout<<endl<<"Measurement in cm : "<<(j/(100));

    }
    else if(i==2)
    {
        int k;
        MM temp;
        cout<<endl<<"Enter measurement in mm";
        cin>>k;
        cout<<endl<<"Measurement in mm : ";
    }
    else{
        cout<<endl<<"INVALID INPUT !!!!";
        goto menu;
    }

    return 0;
}