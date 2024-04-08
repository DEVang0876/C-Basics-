//23AIML014_DEVANG_DHANDHUKIYA
//OOPs ex12
#include<iostream>
using namespace std;
int main();
class Result;
class Student
{
    string stu_id, stu_name;
    int sem;
    public:
    void getdata_stu();
    void putdata_stu();
    void getdata_result(Result);
    void putdata_result(Result);
    float cal_sgpa(Student &S);
};
class Result
{
    int subject_credit, th_mark, pr_mark;
    string subject_naame, th_grade, pr_grade;
    float sgpa;
    public:
    friend float Student:: cal_sgpa(Student &s);
};
void Student :: getdata_stu()
{

}
int main()
{
    return 0;
}
