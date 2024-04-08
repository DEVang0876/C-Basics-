//23AIML014_DEVANG_DHANDHUKIYA
//OOPs ex12
#include<iostream>
using namespace std;
int main();
class Result;
class Result
{
    int subject_credit, th_mark, pr_mark;
    string th_grade, pr_grade;
    char subject_name[3];
    float sgpa;
    public:
    void getdata_result(Result);
    void putdata_result(Result);
    
};
class Student
{
    char stu_id[7]; string stu_name;
    int sem;
    public:
    void getdata_stu();
    void putdata_stu();
    friend void Result:: getdata_result(Result);
    friend void Result:: putdata_result(Result);
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
    cout<<endl<<"Student ID      :  "; cout<<stu_id;
    cout<<endl<<"Student name    :  "; cout<<stu_name;
    cout<<endl<<"Semester        :  "; cout<<sem;
}
void Result:: getdata_result(Result)
{
    cout<<endl<<"Enter Subject Name: ";
    cin.getline(subject_name,3);
    cout<<endl<<"Enter Theory Marks: ";
    cin>>th_mark;
    cout<<endl<<"Enter Practical Marks: ";
    cin>>pr_mark;
}
void Result:: putdata_result(Result)
{

}
int main()
{
    return 0;
}
