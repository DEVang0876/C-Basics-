#include<iostream>
using namespace std;
typedef void (*funptr)  (int , int);
void add(int a, int b)
{
    int temp;
    temp=a+b;
    //return temp;
    cout<<endl<<temp;

}
void mul(int x, int y)
{
    int temp=x*y;
    cout<<endl<<temp;
    //return temp;

}
int main()
{
    int a=2, b=5;
    funptr ptr;
    ptr=&mul;
    ptr(2,1);
    //cout<<endl<<"\n  "<<*ptr<<endl<<ptr;
    ptr=&add;
    ptr(5,5);
    //cout<<endl<<endl<<*ptr;
    return 0;
}