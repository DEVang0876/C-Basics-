//23AIML014_DEVANG_DHANDHUKIYA
//OOPs ex12
#include<iostream>
#include<iomanip>
using namespace std;
int main();
class Result;
class Student
{

    char stu_id[7]; string stu_name;
    int sem;
    public:
    void getdata_stu();
    void putdata_stu();
    void getdata_result(Result&);
    void putdata_result(Result&);
    friend class Result;
};
class Result
{
    int subject_credit[3], th_mark[3], pr_mark[3];
    string th_grade[3], pr_grade[3];
    string subject_name[3];
    float sgpa;
    public:
    friend class Student;
};
void Student :: getdata_stu()
{
    cout<<endl<<"ENTER STUDENT ID: ";
    cin.ignore();
    cin.getline(stu_id,7);
    cout<<endl<<"ENTER STUDENT NAME: ";
    cin.ignore();
    cin>>stu_name;
    cout<<endl<<"ENTER SEMESTER: ";
    cin>>sem;
}
void Student:: putdata_stu()
{
    cout<<endl<<"Student ID      :  "; cout<<stu_id;
    cout<<endl<<"Student name    :  "; cout<<stu_name;
    cout<<endl<<"Semester        :  "; cout<<sem;
}
void Student:: getdata_result(Result &ob)
{
    for(int i=0; i<3; i++)
    {
    cout<<endl<<"Enter Subject "<<i<<" Name: ";
    cin.ignore();
    cin>>ob.subject_name[i];
    cout<<endl<<"Enter Subject "<<i<<" Credit";
    cin.ignore();
    cin>>ob.subject_credit[i];
    cout<<endl<<"Enter Theory Marks: ";
    cin>>ob.th_mark[i];
    cout<<endl<<"Enter Practical Marks: ";
    cin>>ob.pr_mark[i];
    }
}
void Student :: putdata_result(Result &ob)
{
    int grade_point[6],mul_cr_gd=0;

    for(int i=0; i<3; i++)
    {
        if(ob.th_mark[i]>=80)
        {
           ob.th_grade[i]="AA";
           grade_point[i]=10;
        }
        else if(ob.th_mark[i]<80 && ob.th_mark[i]>=73)
        {
            ob.th_grade[i]="AB";
            grade_point[i]=9;
        }
        else if(ob.th_mark[i]<73 && ob.th_mark[i]>=66)
        {
            ob.th_grade[i]="BB";
            grade_point[i]=8;
        }
        else if(ob.th_mark[i]<66 && ob.th_mark[i]>=60)
        {
            ob.th_grade[i]="BC";
            grade_point[i]=7;
        }
        else if(ob.th_mark[i]<60 && ob.th_mark[i]>=55)
        {
            ob.th_grade[i]="CC";
            grade_point[i]=6;
        }
        else if(ob.th_mark[i]<55 && ob.th_mark[i]>=50)
        {
            ob.th_grade[i]="CD";
            grade_point[i]=5;
        }
        else if(ob.th_mark[i]<50 && ob.th_mark[i]>=45)
        {
            ob.th_grade[i]="DD";
            grade_point[i]=4;
        }
        else
        {
            ob.th_grade[i]="FF";
            grade_point[i]=0;
        }
        mul_cr_gd+=(grade_point[i]*ob.subject_credit[i]);
    }
    for(int i=0; i<3; i++)
    {
        if(ob.pr_mark[i]>=80)
        {
           ob.pr_grade[i]="AA";
           grade_point[i+3]=10;
        }
        else if(ob.pr_mark[i]<80 && ob.pr_mark[i]>=73)
        {
            ob.pr_grade[i]="AB";
            grade_point[i+3]=9;
        }
        else if(ob.pr_mark[i]<73 && ob.pr_mark[i]>=66)
        {
            ob.pr_grade[i]="BB";
            grade_point[i+3]=8;
        }
        else if(ob.pr_mark[i]<66 && ob.pr_mark[i]>=60)
        {
            ob.pr_grade[i]="BC";
            grade_point[i+3]=7;
        }
        else if(ob.pr_mark[i]<60 && ob.pr_mark[i]>=55)
        {
            ob.pr_grade[i]="CC";
            grade_point[i+3]=6;
        }
        else if(ob.pr_mark[i]<55 && ob.pr_mark[i]>=50)
        {
            ob.pr_grade[i]="CD";
            grade_point[i+3]=5;
        }
        else if(ob.pr_mark[i]<50 && ob.pr_mark[i]>=45)
        {
            ob.pr_grade[i]="DD";
            grade_point[i+3]=4;
        }
        else
        {
            ob.th_grade[i]="FF";
            grade_point[i+3]=0;
        }
        mul_cr_gd+=(grade_point[i+3]*ob.subject_credit[i]);
    }
    ob.sgpa=(mul_cr_gd)/(ob.subject_credit[0] + ob.subject_credit[1] + ob.subject_credit[2]);
    cout<<endl<<setw(36)<<"Theory"<<setw(14)<<"Practical";
    cout<<endl<<setw(28)<<ob.subject_name[0]; cout<<setw(8)<<ob.th_grade[1];cout<<setw(12)<<ob.pr_grade[0];
    cout<<endl<<setw(28)<<ob.subject_name[1]; cout<<setw(8)<<ob.th_grade[2];cout<<setw(12)<<ob.pr_grade[1];
    cout<<endl<<setw(28)<<ob.subject_name[2]; cout<<setw(8)<<ob.th_grade[3];cout<<setw(12)<<ob.pr_grade[2];
    cout<<endl<<endl<<"SGPA = "<<ob.sgpa;
}
int main()
{
    Student s1; Result r1;
    s1.getdata_stu();
    s1.getdata_result(r1);
    s1.putdata_stu();
    s1.putdata_result(r1);
    return 0;
}
