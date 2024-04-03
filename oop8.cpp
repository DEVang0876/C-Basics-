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
    float avgexp();
    protected:
    void addinfo();
    void printinfo();
    int findID(string str);

};
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