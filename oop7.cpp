#include<iostream>
using namespace std;

class complex
{
    float real,img;
    static int count;
public:
    void printcox();
    complex(); 
    complex(float a, float b); 
    complex operator+(const complex &c) const
    {
        complex temp;
        temp.img = img + c.img;
        temp.real = real + c.real;
        return temp;
    }
    complex operator-(const complex &c) const
    {
        complex temp;
        temp.img = img - c.img;
        temp.real =real - c.real;
        return temp;
    }
    complex operator*(const complex &c) const
    {
        complex temp;
        temp.img =(img)*(c.img);
        temp.real = (real) * (c.real);
        return temp;
    }
    complex operator/(const complex &c) const
    {
        complex temp;
        temp.img =(img)/(c.img);
        temp.real = (real) / (c.real);
        return temp;
    }

};
int complex:: count=1;
complex::complex()
{
    float a,b;
    cout<<endl<<"Enter Real value for Complex "<<count<<" :";
    cin>>a;
    cout<<endl<<"Enter Imaginary value for Complex "<<count<<" :";
    cin>>b;
    img=b;real=a;
    count++;
}

complex::complex(float a, float b)
{
    img = b;
    real = a;
    count++;
}

void complex::printcox()
{
    cout<<endl<<real<<" + "<<img<<"i";
}

int main()
{
    complex c3 = complex(0,0);
    complex c2,c1;
    cout<<endl<<"Choose option";
    cout<<endl<<"(+)  AAddition";
    cout<<endl<<"(-)  Substraction";
    cout<<endl<<"(*)  Multiplication";
    cout<<endl<<"(/)  Devision";
    char ch; cout<<endl;
    cin>>ch;
    switch (ch)
    {
    case 43:
        c3=c1+c2;
        break;
    case 42:
        c3=c1-c2;
        break;
    case 45:
        c3=c1*c2;
        break;
    case 47:
        c3=c1/c2;
        break;
    
    default:
        break;
    }
    c1.printcox();
    c2.printcox();
    c3.printcox();
    return 0;
}
