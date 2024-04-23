#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char line[5];
    ofstream f1;
    f1.open("demo7.txt");
    f1<<"hii im dev";
    f1.close();

    ofstream fin;
    fin.open("demo7.txt", ios::app);
    fin<<"\n im using maacbook air m1";
    cout<<line;
    return 0;
}