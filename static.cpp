//STATIC MEMBER FUNCTION AND STATIC AVRIABLE
#include<iostream>
#include<cstring>
using namespace std;
class Event
{
    string name,sex;
    int roll;
    static int cF;
    static int cM;
    public:
    Event();
    static void getcF();
    static void getcM();
};
int Event:: cF=0;
int Event:: cM=0;
void Event:: getcF()
{
    cout<<cF;
}
void Event:: getcM()
{
    cout<<cM;
}
Event:: Event()
{
    cin>>roll;
    cin.ignore();
    getline(cin,name);
    getline(cin,sex);
    if(sex=="Male")
    {
        cM++;
    }
    else
    {
        cF++;
    }
}
int main()
{
    Event s1, s2, s3, s4, s5;
    cout<<endl<<"Number of Students";
    cout<<endl<<"Male: ";Event:: getcM();
    cout<<endl<<"Female: ";Event:: getcF();
    return 0;
}
//done//gtgtg