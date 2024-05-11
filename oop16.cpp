#include<iostream>
#include<fstream>
using namespace std;
int main()
{
char line[50];
ofstream cars;
cars.open("cardata.txt");
cars.close();

ifstream f;
f.open("cardata.txt");
f.getline(line,50);
cout<<endl<<line;
f.close();
}