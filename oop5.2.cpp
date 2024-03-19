#include <iostream>
using namespace std;
int main();
class circle
{
    float rad;
    static int count;
    public:
          circle(){rad=10;}
          circle(int t)
          {
            rad=t;
            count++;
          }
          circle(circle &circleX)
          {
            rad=circleX.rad;
            count++;
          }
          void disparea();
          ~circle()
          {
           cout<<endl<<"One Objectb is deleted"<<endl<<"Total active objects are: "<<--count;
          }
};
void circle::disparea()
{
    float area;
    area=(3.14*(rad*rad));
    cout<<endl<<"Circle with radius "<<rad<<" has area ="<<area<<" sq.units";
}
int circle:: count =0;
int main()
{
    circle *circle1=new circle();
    circle *circle2=new circle(15);
    circle1->disparea();
    circle2->disparea();
    delete circle1;
    delete circle2;
    circle *circle3=new circle(*circle2);
    circle3->disparea();
    delete circle3;
    return 0;
}