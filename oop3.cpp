//Devang Dhadhukiya
//23AIML014
//OOP 3
#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
int main();
void getinfo();
void printinfo();
void fuelfind(string fuel_name);
struct tata
{
    int stcp;
    char ch;
    float tkcp,mlg,price;
    string model, fuel,trans, airbag;
    void getinfo()
    {
        cout<<"Enter Model name: ";
        cin>>model;
        cout<<"Enter Fuel type: ";
        cin>>fuel;
        cout<<"Enter Price in Lacks: ";
        cin>>price;
        cout<<"Enter Milege: ";
        cin>>mlg;
        cout<<"Enter Transmission type : ";
        cin>>trans;
        cout<<"Enter Fuel tank capacity: ";
        cin>>tkcp;
        cout<<"Enter Seating Capacity: ";
        cin>>stcp;
        cout<<"Enter Airbags availability ('YES' or 'NO'): ";
        cin>>airbag;
    }
    void printinfo()
    {

        cout<<endl<<setw(11)<<model<<setw(9)<<fuel<<setw(9)<<price<<setw(11)<<mlg<<setw(16)<<trans<<setw(17)<<tkcp<<setw(12)<<stcp<<setw(7)<<airbag;
    }
    
    

};
int main()
{
    int op;
    struct tata car[7];
    for(int i=0;i<7;i++)
    {
        cout<<"Enter details for the Car "<<i+1<<endl;
        car[i].getinfo();
    }
    cout<<endl<<"WELCOME TO TATA MOTORS";
    cout<<endl<<"GET THE CAR DETAILS AS PER YOUR PRRFERENCES";
    cout<<endl<<"(1) Model Name  (2) Fuel Type  (3) Price Range";
    cout<<endl<<"ENTER YOUR OPTION : ";
    cin>>op;
    cout<<endl<<"-----------------------------";
    switch (op)
    {
    case 1:
        int opmod;
        cout<<endl<<"LIST OF TATA CARS"<<endl;
        cout<<endl<<"(1)TIAGO      (2)PUNCH    (3)ALTROZ   (4)TIGOR    (5)NEXON";
        cout<<endl<<"(6)HARRIER    (7)SAFARI";
        cout<<endl<<endl<<"CHOOSE YOUR CAR TO DET DETAILS: ";
        cin>>opmod;
        cout<<endl<<"Model      "<<"Fuel     "<<"Price    "<<"Mileage    "<<"Transmission    "<<"Tank Capacity    "<<"Seating     "<<"Airbags";
        cout<<endl<<"           "<<"         "<<"(Lacks)  "<<"(km/L)     "<<"                "<<"(Liters)         "<<"Capacity    "<<"       ";
        cout<<endl;
        switch (opmod)
        {
         case 1:
              for(int i=0; i<7;i++)
                  {
                    if(car[i].model=="TIAGO")
                    {
                        cout<<endl;
                        car[i].printinfo();
                    }
                  }
             break;
         case 2:
             for(int i=0; i<7;i++)
                  {
                    if(car[i].model=="PUNCH")
                    {
                        cout<<endl;
                        car[i].printinfo();
                    }
                  }
             break;
         case 3:
             for(int i=0; i<7;i++)
                  {
                    if(car[i].model=="ALTROZ")
                    {
                        cout<<endl;
                        car[i].printinfo();
                    }
                  }
             break;
         case 4:
             for(int i=0; i<7;i++)
                  {
                    if(car[i].model=="TIGOR")
                    {
                        cout<<endl;
                        car[i].printinfo();
                    }
                  }
             break;
         case 5:
             for(int i=0; i<7;i++)
                  {
                    if(car[i].model=="NEXON")
                    {
                        cout<<endl;
                        car[i].printinfo();
                    }
                  }
             break;
         case 6:
             for(int i=0; i<7;i++)
                  {
                    if(car[i].model=="HARRIER")
                    {
                        cout<<endl;
                        car[i].printinfo();
                    }
                  }
             break;
         case 7:
             for(int i=0; i<7;i++)
                  {
                    if(car[i].model=="SAFARI")
                    {
                        cout<<endl;
                        car[i].printinfo();
                    }
                  }
             break;
         default:
             cout<<endl<<"PLEASE ENTER VALID OPTION NUMBER";
             break;
        }
        break;
    case 2:
         int opfu;
         cout<<endl<<"TATA MOTORS ARE AVAILABLE WITH FUEL OPTIONS";
         cout<<endl<<endl<<"(1)Petrol   (2)Diesel   (3)CNG   (4)Electric";
         cout<<endl<<"ENTER YOUR FUEL PREFERENCES : ";
         cin>>opfu;
         switch(opfu)
         {
            case 1:
                  
                  for(int i=0; i<7;i++)
                  {
                    if(car[i].fuel=="Petrol")
                    {
                        cout<<endl;
                        car[i].printinfo();
                    }
                  }
                 break;
            case 2:
                  for(int i=0; i<7;i++)
                  {
                    if(car[i].fuel=="Diesel")
                    {
                        cout<<endl;
                        car[i].printinfo();
                    }
                  }
                 break;
            case 3:
                  for(int i=0; i<7;i++)
                  {
                    if(car[i].fuel=="CNG")
                    {
                        cout<<endl;
                        car[i].printinfo();
                    }
                  }
                 break;
            case 4:
                  for(int i=0; i<7;i++)
                  {
                    if(car[i].fuel=="Electric")
                    {
                        cout<<endl;
                        car[i].printinfo();
                    }
                  }
                 break;
            default:
                   cout<<endl<<"PLEASE ENTER VALID OPTION NUMBER"; 
                   break;      
         }
         break;
    case 3:
         float oppr;
         cout<<endl<<"ENTER YOUR MAXIMUM AFFORDABLE RANGE IN LACKS: ";
         cin>>oppr;
         for(int t=0;t<7;t++)
         {
            if(car[t].price<oppr)
            {
                cout<<endl;
                car[t].printinfo();
            }
         }
        break;
    default:
        cout<<endl<<"PLEASE ENTER VALID OPTION NUMBER";
        break;
    }
    return 0;
}

    