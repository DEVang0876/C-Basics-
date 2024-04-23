#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char line[55];
    ofstream f1;
    f1.open("demo7.txt");
    f1<<"hii im dev";
    f1.close();

    ofstream fin;
    fin.open("demo7.txt", ios::app);
    fin<<"\n im using maacbook air m1";
    fin.seekp(0, ios::beg);
    fin<<"\n im using iphone 13";
    cout<<line;
    fin.close();
    ifstream fi;
    fi.open("demo7.txt");
    fi.getline(line, 55);
cout<<line;
fi.close();
    return 0;
}