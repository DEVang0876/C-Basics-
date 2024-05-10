//DEVANG DHANDHUKIYA 
//23AIML014
// OOPs PRAC 15

#include<iostream>
using namespace std;
int main();
class product
{
    private:
    int product_id;
    char product_name[50];
    string product_menufacturer;
    float product_price;

    public:
    product(int ProductID, char ProductName[50], string ProductMenufacturer, float ProductPrice);
    virtual void putdata()=0;

};

class smartwatch: public product
{
    private:
    float dial_size;

    public:
    smartwatch(int ProductID, char ProductName[50], string ProductMenufacturer, float ProductPrice, float DialSize): product (ProductID, ProductName[50], ProductMenufacturer,ProductPrice)
    {
        dial_size=DialSize;
    }
    void putdata()
    {

    }
};

class bedsheet: public product
{
    private:
    float width, height;

    public:
    bedsheet(int ProductID, char ProductName[50], string ProductMenufacturer, float ProductPrice, float Width, float Height):product (ProductID, ProductName[50], ProductMenufacturer,ProductPrice)
    {
        width=Width;
        height=Height;
    }
    void putdata()
    {
      cout<<endl<<"-----------------------------------------------------------------------------------------";

      cout<<endl<<"-----------------------------------------------------------------------------------------";
    }

};

product:: product(int ProductID, char ProductName[50], string ProductMenufacturer, float ProductPrice)
{
    product_id=ProductID;
    strcpy(product_name, ProductName);
    product_menufacturer=ProductMenufacturer;
    product_price=product_price;
}

int maian()
{
    int s,id;
    char name[50]; string menuf;
    float price, wd,lg, dial;

    bedsheet *B1;
    smartwatch *S1;
    menu:
    switch (s)
    {
    case 1:
          cout<<endl<<"***** ENTER SMART WATCH DATA ***** ";
          cout<<endl<<"Enter product id : ";
          cin>>id;
          cout<<"Enter product name : ";
          cin.getline(name, 50);
          cout<<"Enter product menufacturer : ";
          cin>>menuf;
          cout<<"Enter product price : ";
          cin>>price;
          cout<<"Enter product dial size : ";
          cin>>dial;
          S1 = new smartwatch(id, name, menuf, price, dial);
          S1->putdata;
        
    case 2:
          cout<<endl<<"***** ENTER BEDHSEET DATA *****";
          cout<<endl<<"Enter product id : ";
          cin>>id;
          cout<<"Enter product name : ";
          cin.getline(name, 50);
          cout<<"Enter product menufacturer : ";
          cin>>menuf;
          cout<<"Enter product price : ";
          cin>>price;
          cout<<"Enter bedsheet width : ";
          cin>>wd;
          cout<<"Enter bedsheet length : ";
          cin>>lg;
          B1=new bedsheet(id, name, menuf, price, wd, lg);
          B1->putdata;
    default:
        goto menu;
        break;
    }
}