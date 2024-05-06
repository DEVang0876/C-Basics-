#include<iostream>
using namespace std;
int main();
class tcEmp;
class ntEmp;
class employe
{
    private:
    string name, id, qual;
    float ex, avgx;
    long int cont;
   

    public:
    void addinfo();
    void printinfo();

    public:
    string getID(){return id;}
    float avgexp(tcEmp &tc, ntEmp &ntc, int a, int b);
    int findID(string str);
};
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

void employe:: printinfo()
{
        cout<<endl;cout<<"-------------------------------------"<<endl;
        cout<<"Employee Name  :  "<<name<<endl;
        cout<<"Qualification  :  "<<qual<<endl;
        cout<<"Experience     :  "<<ex<<" years"<<endl;
        cout<<"Contact Number :  "<<cont<<endl;
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
    static int counttc;
};
int tcEmp:: counttc=0;
void tcEmp:: gettempdata()
{
    cout<<"Enter Designation : ";
    cin.ignore();
    cin.getline(dsg, 40);
    cout<<"Enter Specilization : ";
    cin.getline(spzn, 40);
    cout<<"Enter Pay Scale : ";
    cin.getline(paysl, 20);
    counttc++;

}
void tcEmp:: puttempdata()
{
    cout<<"Designation    :"<<dsg;
    cout<<endl<<"Spcialization  :"<<spzn;
    cout<<endl<<"Pay Scale      :"<<paysl;
    cout<<endl<<"-------------------------------------"<<endl;

}

class ntEmp: public employe
{
    int salary;
    
    public:
    void searchNtemp();
    void getNtempdata();
    void putNtempdata();
    static int countntc;

};
int ntEmp:: countntc=0;
void ntEmp:: getNtempdata()
{
    cout<<"Enter Salary : ";
    cin>>salary;
    countntc++;

}
void ntEmp:: putNtempdata()
{
    cout<<"salary         :"<<salary;
    cout<<endl<<"-------------------------------------"<<endl;
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
        
}
float employe::avgexp(tcEmp &tc, ntEmp &ntc, int a, int b)
{
    float totalExp = 0;
    for (int i = 0; i < a; i++)
    {
        totalExp += tc.ex;
    }
    for (int i = 0; i < b; i++)
    {
        totalExp += ntc.ex;
    }
    return totalExp / (a + b);
}


int main()
{
    tcEmp tcobj[500];
    ntEmp ntcobj[500];
    int ne,fid;
    
    cout<<endl<<"Enter Number of teaching employs: ";
    cin>>ne;
    for (int i=0;(i<ne);i++)
    {
        cout<<"Enter data for teaching employe "<<(i+1)<<endl;
        tcobj[i].addinfo();
        tcobj[i].gettempdata();
    }
    cout<<endl<<"Enter number of non teaching data you want to add";
    int noe;
    cin>>noe;
    for(int i=0;(i<noe); i++)
    {
        cout<<"Enter data for non teaching employe "<<(i+1)<<endl;
        ntcobj[i].addinfo();
        ntcobj[i].getNtempdata();
    }
    char ch;
    do
    {
        cout<<endl<<"Press Y to get another employee detail, Press N to exit : ";
        cin>>ch;

    string xid;
    cout<<"Enter an employe ID: ";
    cin>>xid;
    int flagA=0, flagB=0; 
    for(int i=0; i<ne;i++)
    {
        if(tcobj[i].findID(xid))
        {
            tcobj[i].printinfo();
            tcobj[i].puttempdata();
            flagA=(1);
            cout<<endl<<flagA;
            break;
        }
    }
    if(flagA==0)
    {
        for(int i=0; i<ne;i++)
    {
        if(ntcobj[i].findID(xid))
        {
            ntcobj[i].printinfo();
            ntcobj[i].putNtempdata();
            flagA=(1);
            cout<<endl<<flagA;
            break;
        }
        else
        {
            flagB=1;
        }
    }
    }
    else if(flagB==1)
    {   
        printerror();
    }
    
    
    }while(ch==89);
    
    return 0;
}