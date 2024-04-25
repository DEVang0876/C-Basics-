#include<iostream>
using namespace std;
int main();
class employe
{
    private:
    string name, id, qual;
    float ex, avgx;
    long int cont;

    protected:
    void addinfo();
    void printinfo();
    int findID(string str);

    public:
    float avgexp();

};
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
class tcEmp: public employe
{
    string dsg, spzn, paysl;

    public:
    void searchtemp();
    void gettempdata();
    void puttempdata();
};
class ntEmp: public employe
{
    int salary;
    
    public:
    void searchNtemp();
    void getNtempdata();
    void putNtempdata();

};
int main()
{
    return 0;
}