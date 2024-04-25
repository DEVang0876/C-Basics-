//DEVANG DHANDHUKIYA
//23AAIML014      OOPC PRACTICAL 6

#include<iostream>
#include<cstring>
using namespace std;

int main();
int findid(string str);
class employe
{
    private:
    string name, id, qual;
    float ex;
    long int cont;

    public:
    void addinfo();
    void printinfo();
    static int count;
    int findID(string str);
    void printerror();
};
void printerror()
{
        cout<<endl<<"*************************";
        cout<<endl<<"ERROR: ID MATCH NOT FOUND";
        cout<<endl<<"*************************";
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
void employe:: printinfo()
{
        cout<<endl;cout<<"-------------------------------------"<<endl;
        cout<<"Employee Name  :  "<<name<<endl;
        cout<<"Qualification  :  "<<qual<<endl;
        cout<<"Experience     :  "<<ex<<" years"<<endl;
        cout<<"Contact Number :  "<<cont<<endl;
        cout<<"-------------------------------------"<<endl;
}
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
int main()
{
    int ne,fid;
    cout<<endl<<"Enter Number of employs: ";
    cin>>ne;
    employe emp[1000];
    for (int i=0;i<ne;i++)
    {
        cout<<"Enter data for employe "<<(i+1)<<endl;
        emp[i].addinfo();
    }
    char ch;
    do
    {
         string xid;
    cout<<endl<<"Enter Employe ID to find : ";
    cin.ignore();
    getline(cin,xid);
    int flag=0;
    for(int i=0; i<ne;i++)
    {
        if(emp[i].findID(xid))
        {
            emp[i].printinfo();
            flag=(i+1);
            cout<<endl<<flag;
            break;
        }
    }
    if(flag==0)
    {   
        printerror();
    }
    cout<<endl<<"Press Y to get another employee detail, Press N to exit";
    cin>>ch;
    } while (ch==89);
    
    return 0;
}