#include<iostream>
using namespace std;
int main();
class employe
{
    private:
    string name, id, qual;
    float ex, avgx;
    long int cont;
   

    public:
    void addinfo();
    void printinfo();
    int findID(string str);

    public:
    float avgexp();
    static int count;

};
int employe:: count=0;
int employe:: findID(string str)
{   
if(str==id)
{
return 1;
}       
else
{
return 0;
}
}
void employe:: addinfo()
{
        cout<<"Eneter Employee ID : ";
        cin>>id;
        cout<<"Eneter Employee Name : ";
        cin.ignore();
        getline(cin,name);
        cout<<"Eneter Employee's Qualifications : ";
        getline(cin,qual);
        cout<<"Eneter Employee's Experiences : ";
        cin>>ex;
        cout<<"Eneter Employee Contact Number : ";
        cin>>cont;
        count++;
}
void employe:: printinfo()
{
        cout<<endl;cout<<"-------------------------------------"<<endl;
        cout<<"Employee Name  :  "<<name<<endl;
        cout<<"Qualification  :  "<<qual<<endl;
        cout<<"Experience     :  "<<ex<<" years"<<endl;
        cout<<"Contact Number :  "<<cont<<endl;
        cout<<"-------------------------------------"<<endl;
}
void printerror()
{
        cout<<endl<<"*************************";
        cout<<endl<<"ERROR: ID MATCH NOT FOUND";
        cout<<endl<<"*************************";
}
class tcEmp: public employe
{
    char dsg[40], spzn[40], paysl[20];

    public:
    void searchtemp();
    void gettempdata();
    void puttempdata();
};
void tcEmp:: gettempdata()
{
    cout<<"Enter Designation : ";
    cin.getline(dsg, 40);
    cout<<endl<<"Enter Specilization : ";
    cin.getline(spzn, 40);
    cout<<endl<<"Enter Pay Scale : ";
    cin.getline(paysl, 20);

}
void tcEmp:: puttempdata()
{
    cout<<endl<<"Designation    :"<<dsg;
    cout<<endl<<"Spcialization  :"<<spzn;
    cout<<endl<<"Pay Scale      :"<<paysl;
}
class ntEmp: public employe
{
    int salary;
    
    public:
    void searchNtemp();
    void getNtempdata();
    void putNtempdata();

};
void ntEmp:: getNtempdata()
{
    cout<<endl<<"Enter Salary : ";
    cin>>salary;

}
void ntEmp:: putNtempdata()
{
    cout<<"salary         :"<<salary;
}
int main()
{
    employe obj[1000];
    tcEmp tcobj[500];
    ntEmp ntcobj[500];
    int ne,fid;
    cout<<endl<<"Enter Number of employs: ";
    cin>>ne;
    for (int i=0;i<ne;i++)
    {
        cout<<"Enter data for employe "<<(i+1)<<endl;
        obj[i].addinfo();
    }
    
    
    return 0;
}