//Devang_Dhaandhukiya_23AIML014
//OOP 2
#include<iostream>
using namespace std;
int main();
void getinfo();
void printinfo();
void printerror()
{
    cout<<"*********************************************"<<endl;
    cout<<"  ERROR: ENTERED EMPLOYEE ID DOSE NOT EXIST"<<endl;
    cout<<"*********************************************"<<endl;
}
struct emp
{
    int id;
    string name, qual, num;
    float exp;
    void getinfo()
    {
        cout<<"Eneter Employee ID : ";
        cin>>id;
        cout<<"Eneter Employee Name : ";
        getline(cin,name);
        cout<<"Eneter Employee's Qualifications : ";
        getline(cin,qual);
        cout<<"Eneter Employee's Experiences : ";
        cin>>exp;
        cout<<"Eneter Employee Contact Number : ";
        cin>>num;
    }
    void printinfo()
    {
        cout<<"-------------------------------------"<<endl;
        cout<<"Employee Name  :  "<<name<<endl;
        cout<<"Qualification  :  "<<qual<<endl;
        cout<<"Experience     :  "<<exp<<" years"<<endl;
        cout<<"Contact Number :  "<<num<<endl;
        cout<<"-------------------------------------"<<endl;
    }
};
int main()
{
    int eid,flag=9999;
    char ch;
    struct emp emp[100];
    for(int i=0;i<3;i++)
    {
        emp[i].getinfo();
    }
    
    finddetail:
    cout<<"Eneter Employee ID : ";
    cin>>eid;
    flag=0;
    for(int k=0;k<3;k++)
    {
        if(emp[k].id==eid)
        {
            flag=k;
        }
    }
    if(flag==9999)
    {
        printerror();
    }
    else
    {
        emp[flag].printinfo();
    }
    cout<<"Press Y to get another employee detail, Press N to exit : ";
    cin>>ch;
    if(ch==89)
    {
        goto finddetail;
    }
    else if(ch==78)
    {
        goto end;
    }
    end:
    return 0;
    
}