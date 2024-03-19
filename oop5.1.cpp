//Devang Dhandhukiya  23AIML014
//OOP 5.1 gtgtgtgggtgtgtgt

#include<iostream>
using namespace std;
int main();
class circle
{
    private:
        float r;
        static int count;
    public:
        circle()
        {
            r=20;
            count++;
        }
        circle(float x);
        circle(circle &p);
        void dispobj();
        ~circle()
        {
           cout<<endl<<"One Objectb is deleted, Active objects are: "<<--count;
        }

};
void circle:: dispobj()
{
    cout<<endl<<"\nNew Object :"<<"Created ";
    cout<<endl<<"Radius of circle is :"<<r;
    float area;
    area=(3.14*(r*r));
    cout<<endl<<"Area of circle is: "<<area;
}
circle:: circle(float x)
{
    r=x;
    count++;
}
circle:: circle(circle &p)
{
    r=p.r;
    count++;
}
int circle:: count=0;
int main()
{
    circle c1;
    circle c2(10);
    circle c3(c2);
    c1.dispobj();
    c2.dispobj();
    c3.dispobj();
    cout<<"\n";
    return 0;
}