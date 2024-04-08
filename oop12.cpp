//23AIML014_DEVANG_DHANDHUKIYA
//OOPs ex12
#include<iostream>
using namespace std;
int main();
class Student;
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
    string th_grade, pr_grade;
    char subject_name[3];
    float sgpa;
    public:
     friend void  Student :: getdata_result(Result);
     friend void  Student :: putdata_result(Result);
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
void Student:: getdata_result(Result)
{
    cout<<endl<<"Enter Subject Name: ";
    cout<<endl<<"Enter Subject Credit";
    cin>>subject_credit;
    cin.getline(subject_name,3);
    cout<<endl<<"Enter Theory Marks: ";
    cin>>th_mark;
    cout<<endl<<"Enter Practical Marks: ";
    cin>>pr_mark;
}
void Student :: putdata_result(Result)
{
    cout<<endl<<subject_name; cout<<"         "<<th_grade;cout<<"        "<<pr_grade;
    
}
int main()
{
    return 0;
}
