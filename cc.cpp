//23AIML014_DEVANG_DHANDHUKIYA
//OOPS PRAC 15

#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class product
{
    protected:
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
        smartwatch(int ProductID, char ProductName[50], string ProductMenufacturer, float ProductPrice, float DialSize): product (ProductID, ProductName, ProductMenufacturer, ProductPrice)
        {
            dial_size=DialSize;
        }
        void putdata()
        {
            cout << "Smartwatch Data:" << endl;
            cout << "Product ID: " << product_id << endl;
            cout << "Product Name: " << product_name << endl;
            cout << "Product Manufacturer: " << product_menufacturer << endl;
            cout << "Product Price: " << product_price << endl;
            cout << "Dial Size: " << dial_size << endl;
        }
};

class bedsheet: public product
{
    private:
        float width, height;

    public:
        bedsheet(int ProductID, char ProductName[50], string ProductMenufacturer, float ProductPrice, float Width, float Height):product (ProductID, ProductName, ProductMenufacturer, ProductPrice)
        {
            width=Width;
            height=Height;
        }
        void putdata()
        {
            cout << "Bedsheet Data:" << endl;
            cout << "Product ID: " << product_id << endl;
            cout << "Product Name: " << product_name << endl;
            cout << "Product Manufacturer: " << product_menufacturer << endl;
            cout << "Product Price: " << product_price << endl;
            cout << "Width: " << width << endl;
            cout << "Height: " << height << endl;
        }
};

product:: product(int ProductID, char ProductName[50], string ProductMenufacturer, float ProductPrice)
{
    product_id=ProductID;
    strcpy(product_name, ProductName);
    product_menufacturer=ProductMenufacturer;
    product_price=ProductPrice;
}

int main()
{
    int s,id;
    char name[50]; 
    string menuf;
    float price, wd, lg, dial;

    bedsheet *B1;
    smartwatch *S1;
    
    menu:
    cout << "Enter 1 for Smartwatch, 2 for Bedsheet, 0 to exit: ";
    cin >> s;
    
    switch (s)
    {
        case 1:
            cout << endl << "***** ENTER SMART WATCH DATA ***** " << endl;
            cout << "Enter product id : ";
            cin >> id;
            cin.ignore();
            cout << "Enter product name : ";
            cin.getline(name, 50);
            cout << "Enter product menufacturer : ";
            cin >> menuf;
            cout << "Enter product price : ";
            cin >> price;
            cout << "Enter product dial size : ";
            cin >> dial;
            S1 = new smartwatch(id, name, menuf, price, dial);
            S1->putdata();
            break;
        
        case 2:
            cout << endl << "***** ENTER BEDSHEET DATA *****" << endl;
            cout << "Enter product id : ";
            cin >> id;
            cin.ignore();
            cout << "Enter product name : ";
            cin.getline(name, 50);
            cout << "Enter product menufacturer : ";
            cin >> menuf;
            cout << "Enter product price : ";
            cin >> price;
            cout << "Enter bedsheet width : ";
            cin >> wd;
            cout << "Enter bedsheet length : ";
            cin >> lg;
            B1=new bedsheet(id, name, menuf, price, wd, lg);
            B1->putdata();
            break;
        
        case 0:
            return 0;

        default:
            cout << "Invalid input. Please try again." << endl;
            break;
    }
    goto menu;
}
