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
    void getdata();
    void putdata();

    public:
    string getID(){return id;}
    float avgexp(tcEmp tc[], ntEmp ntc[], int a, int b);
    int findID(string str, tcEmp tc[], ntEmp ntc[], int a, int b);
};
float employe::avgexp(tcEmp tc[], ntEmp ntc[], int a, int b) {
    float totalExp = 0;
    for (int i = 0; i < a; i++) {
        totalExp += tc[i].ex;
    }
    for (int i = 0; i < b; i++) {
        totalExp += ntc[i].ex;
    }
    return totalExp / (a + b);
}
int employe::findID(string str, tcEmp tc[], ntEmp ntc[], int a, int b) {
    int flagA = 0, flagB = 0;
    for (int i = 0; i < a; i++) {
        if (str == tc[i].getID()) {
            tc[i].employe::putdata();
            tc[i].putdata();
            flagA = 1;
            break;
        }
    }
    if (!flagA) {
        for (int i = 0; i < b; i++) {
            if (str == ntc[i].getID()) {
                ntc[i].employe::putdata();
                ntc[i].putdata();
                flagB = 1;
                break;
            }
        }
    }
    if (!flagA && !flagB) {
        cout << endl << "*************************" << endl;
        cout << "ERROR: ID MATCH NOT FOUND" << endl;
        cout << "*************************" << endl;
    }
    cout << "Average Experience of all employees: " << avgexp(tc, ntc, a, b) << " years" << endl;
    return (flagA || flagB);
}


void employe:: putdata()
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
    void getdata();
    void putdata();
    static int counttc;
};
int tcEmp:: counttc=0;
void tcEmp:: getdata()
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
void tcEmp:: putdata()
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
    void getdata();
    void putdata();
    static int countntc;

};
int ntEmp:: countntc=0;
void ntEmp:: getdata()
{
    cout<<"Enter Salary : ";
    cin>>salary;
    countntc++;

}
void ntEmp:: putdata()
{
    cout<<"salary         :"<<salary;
    cout<<endl<<"-------------------------------------"<<endl;
}
void employe:: getdata()
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
int main() {
    tcEmp tcobj[500];
    ntEmp ntcobj[500];
    int ne, nf;
    cout << "Enter Number of teaching employees: ";
    cin >> ne;
    for (int i = 0; i < ne; i++) {
        cout << "Enter data for teaching employee " << (i + 1) << endl;
        tcobj[i].employe::getdata();
        tcobj[i].getdata();
    }
    cout << endl << "Enter number of non-teaching employees you want to add: ";
    int noe;
    cin >> noe;
    for (int i = 0; i < noe; i++) {
        cout << "Enter data for non-teaching employee " << (i + 1) << endl;
        ntcobj[i].employe::getdata();
        ntcobj[i].getdata();
    }
    char ch;
    do {
        cout << endl << "Press Y to get another employee detail, Press N to exit: ";
        cin >> ch;
        if (ch == 'Y' || ch == 'y') {
            string xid;
            cout << "Enter an employee ID: ";
            cin >> xid;
            nf = employe().findID(xid, tcobj, ntcobj, ne, noe);
        }
    } while (ch == 'Y' || ch == 'y');
    return 0;
}