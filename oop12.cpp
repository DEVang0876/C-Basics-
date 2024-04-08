//23AIML014_DEVANG_DHANDHUKIYA
//OOPs ex12
#include<iostream>
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
    void getdata_result(Result);
    void putdata_result(Result);
    
};
class Result
{
    int subject_credit, th_mark, pr_mark;
    string subject_naame, th_grade, pr_grade;
    float sgpa;
    public:
    friend void Student:: getdata_result(Result);
    friend void Student:: putdata_result(Result);
    
};
void Student :: getdata_stu()
{
    cout<<endl<<"ENTER STUDENT ID: ";
    cin.getline(stu_id,7);
    cout<<endl<<"ENTER STUDENT NAME: ";
    cin>>stu_name;
    cout<<endl<<"ENTER SEMESTER: ";
    cin>>sem;
}
void Student:: putdata_stu()
{
    cout<<endl<<"Student ID      :  "; 
    cout<<endl<<"Student name    :  ";
    cout<<endl<<"Semester        :  ";
}
int main()
{
    return 0;
}
