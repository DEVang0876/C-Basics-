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
void Student:: getdata_result(Result &ob)
{
    for(int i=0; i<3; i++)
    {
    cout<<endl<<"Enter Subject "<<i<<" Name: ";
    cin>>ob.subject_name[i];
    cout<<endl<<"Enter Subject "<<i<<" Credit";
    cin>>ob.subject_credit[i];
    cout<<endl<<"Enter Theory Marks: ";
    cin>>ob.th_mark[i];
    cout<<endl<<"Enter Practical Marks: ";
    cin>>ob.pr_mark[i];
    }
}
void Student :: putdata_result(Result &ob)
{
    cout<<endl<<setw(36)<<"Theory"<<setw(14)<<"Practical";
    cout<<endl<<setw(28)<<ob.subject_name[1]; cout<<setw(8)<<ob.th_grade[1];cout<<setw(12)<<ob.pr_grade[1];
    cout<<endl<<setw(28)<<ob.subject_name[2]; cout<<setw(8)<<ob.th_grade[2];cout<<setw(12)<<ob.pr_grade[2];
    cout<<endl<<setw(28)<<ob.subject_name[3]; cout<<setw(8)<<ob.th_grade[3];cout<<setw(12)<<ob.pr_grade[3];
    




   
    cout<<endl<<endl<<ob.sgpa;
    
    
}
int main()
{
    return 0;
}
