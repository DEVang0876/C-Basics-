//Devang_Dhaandhukiya_23AIML014
//OOP 1 // 5.51
#include<iostream>
using namespace std;
string grade(int mark);
int gradepoint(int mark);
float sgpa(int a1, int a2, int b1, int b2, int c1, int c2);
int main()
{
    char name[20], id[10];
    int sem,a1,a2,b1,b2,c1,c2;
    cout<<"Enter Name of Student: ";
    cin.getline(name,20);
    cout<<"Enter Student ID: ";
    cin.getline(id,10);
    cout<<"Enter semester: ";
    cin>>sem;
    cout<<"Enter Thory Mark of Computer Programming: ";
    cin>>a1;
    cout<<"Enter Practical Mark of Computer Programming: ";
    cin>>a2;
    cout<<"Enter Thory Mark of Basics Of Electronics: ";
    cin>>b1;
    cout<<"Enter Practical Mark of Basics Of electrinics: ";
    cin>>b2;
    cout<<"Enter Thory Mark of Professional Communication: ";
    cin>>c1;
    cout<<"Enter Practical Mark of Professional Communication: ";
    cin>>c2;
    cout<<endl<<"CHARUSAT RESSULT"<<endl<<endl;
    cout<<"Name:      ";
    cout<<name<<endl;
    cout<<"ID:        ";
    cout<<id<<endl;
    cout<<"semester:  ";
    cout<<sem<<endl;
    cout<<"                                Theory       Practical"<<endl;
    cout<<"Computer Programming            "; cout<<grade(a1);cout<<"           ";cout<<grade(a2)<<endl;
    cout<<"Basics Of electronics           "; cout<<grade(b1);cout<<"           ";cout<<grade(b2)<<endl;
    cout<<"Professional Communication      "; cout<<grade(c1);cout<<"           ";cout<<grade(c2)<<endl;
    cout<<endl<<"SGPA :"<<sgpa(a1,a2,b1,b2,c1,c2);
}
string grade(int mark)
{
    if(mark>=80){
        return "AA";
    }
    else if(mark>=73){
        return "AB";
    }
    else if(mark>=66) {
        return "BB";
    }
    else if(mark>=60){
        return "BC";
    }
    else if(mark>=55){
        return "CC";
    }
    else if(mark>=50) {
        return "CD";
    }
    else if(mark>=45) {
        return "DD";
    }
    else   {  
       return "FF";
    }
}
int gradepoint(int marks)
{
    int gradePoint;
    
    if (marks > 80) {
        gradePoint = 10;
    } else if (marks >= 73) {
        gradePoint = 9;
    } else if (marks >= 66) {
        gradePoint = 8;
    } else if (marks >= 60) {
        gradePoint = 7;
    } else if (marks >= 55) {
        gradePoint = 6;
    } else if (marks >= 50) {
        gradePoint = 5;
    } else if (marks >= 45) {
        gradePoint = 4;
    } else {
        gradePoint = 0;
    }
    return gradePoint;
}
float sgpa(int a1, int a2, int b1, int b2, int c1, int c2)
{
    int x1,x2,y1,y2,z1,z2;
    float sgpa,cg,credit;
    credit=5.00+4.00+2.00+5.00+4.00+2.00;
    x1=gradepoint(a1);
    x2=gradepoint(a2);
    y1=gradepoint(b1);
    y2=gradepoint(b2);
    z1=gradepoint(c1);
    z2=gradepoint(c2);
    cg=(5*x1)+(5*x2)+(4*y1)+(4*y2)+(2*z1)+(2*z2);
    sgpa=(cg/credit);
    return sgpa;
}