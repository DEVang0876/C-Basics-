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
    cout<<endl<<"  WELCOME TO TATA MOTORS  ";
    menu:
    cout<<endl<<"GET THE CAR DETAILS AS PER YPUR PREFERENCES";
    cout<<"(1) Model name  (2) Fiel type  (3) Prce range";
    cout<<endl<<"ENTER YOUR OPTION : ";
    cout<<endl<<"_____________________________________________";
    int choice;
    cin>>choice;
    switch (choice)
    {
    case 1:
    
        
        break;
    
    default:
        cout<<endl<<"ENTER VALID OPTION !!!!";
        goto menu;
        break;
    }
 

}