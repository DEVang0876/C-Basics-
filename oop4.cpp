//DEvang Dhandhukiya
// OOP 4
//23AIML014
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main();
class shape
{
    private:
           float a;
           float b;
           float c;
    public:
           void area(float x);
           void area(float x, float y);
           void area(float x, float y, float z);
};
void shape :: area(float x)
{
    float ar;
    ar=(3.14)*x*x;
    cout<<"The area of a circle is ="<<ar<<"  sq.units";
}
void shape :: area(float x, float y)
{
    float ar;
    ar=x*y;
    cout<<"The area of a Rectangle is ="<<ar<<"  sq.units";
}
void shape :: area(float x, float y, float z)
{
    float ar;
    ar=2*((x*y)+(y*z)+(x*z));
    cout<<"The area of a Cuboid is ="<<ar<<"  sq.units";
}
int main()
{
    float r,l,b,h,p,q;
    shape circle;
    shape rectangle;
    shape cuboid;
    cout<<endl<<"Enter the Radius of a circle : ";
    cin>>r;
    circle.area(r);
    cout<<endl<<"Enter the Length of a Rectangle : ";
    cin>>q;
    cout<<endl<<"Enter the Width of a Rectangle : ";
    cin>>p;
    rectangle.area(p,q);
    cout<<endl<<"Enter the Length of a cuboid : ";
    cin>>l;
    cout<<endl<<"Enter the Width of a cuboid : ";
    cin>>b;
    cout<<endl<<"Enter the  Height of a cuboid : ";
    cin>>h;
    cuboid.area(l,b,h);
    return 0;
}



