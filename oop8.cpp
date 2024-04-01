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
    float avgexp();

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


};
int main()
{
    return 0;
}