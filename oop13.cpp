//DEVANG_DHANDHUKIYA_23AIML014
//OOPc 12

#include<iostream>
using namespace std;
int main();
class library
{
    string title;
    int id;
    
    public:
    enum tag {H,E};
    tag eh;
    void add_title();
    void put_id_tile(){cout<<endl<<id<<"    "<<title;}
};
void library:: add_title()
{
    
    cout<<endl<<"ID  : ";
    cin>>id; 
    cout<<endl<<"Title  : ";
    cin>>title;
}
class book: public virtual library
{
    int isbn;
    int copy;
    public:
    void add_book_isbn();
    void add_book_stock();
    void put_book_copy(){cout<<"copies  :"<<copy;}
    void put_isbn(){cout<<isbn;}
    
};
void book:: add_book_isbn()
{
    cout<<endl<<"ISBN  : ";
    cin>>isbn;
}
void book:: add_book_stock()
{
    cout<<"In Stock copies  : ";
    cin>>copy;
}
class magezine: public virtual library
{
    int issn;
    int cp;
    public:
    void  add_issn();
    void add_mag_stock();
    void put_mag_copy(){cout<<"copies  "<<cp;}
    void put_issn(){cout<<issn;};
};
void magezine:: add_issn()
{
    cout<<endl<<"ISSN  : ";
    cin>>issn;
}
void magezine:: add_mag_stock()
{
    cout<<endl<<"In stock copies  : ";
    cin>>cp;
}
class e_resources: public book, public magezine
{
    string doi;
    static int count_book;
    static int count_mag;
    public:
    void add_book(e_resources &);
    void add_magezine(e_resources &);
    void list_book(e_resources &);
    void list_mag(e_resources &);
    static int get_count_book(){return count_book;}
    static int get_count_mag(){return count_mag;}
    void put_doi(){cout<<"DOI :"<<doi;}

};
int e_resources:: count_book=0;
int e_resources:: count_mag=0;

void e_resources:: list_book(e_resources &b)
{
    b.put_id_tile();cout<<"    ";
    b.put_isbn();
    if(b.eh==0)
    {b.put_book_copy();}
    else if(b.eh==1)
    {b.put_doi();}
 
}
void e_resources:: list_mag(e_resources &l)
{
    l.put_id_tile();cout<<"    ";
    l.put_issn();
    if(l.eh==0)
    {l.put_mag_copy();}
    else if(l.eh==1)
    {l.put_doi();}

}

void e_resources:: add_book(e_resources &b)
{
    b.add_title();
    b.add_book_isbn();
    cout<<"(E)copy or (H)ardbound  : ";
    char ch;
    cin>>ch;
    if(ch=='H')
    {
        eh=H;
        b.add_book_stock();
    }
    else if(ch=='E')
    {
        eh=E;
        cout<<endl<<"DOI  : ";
        cin>>doi;
        
    }
    count_book++;
}
void e_resources:: add_magezine(e_resources &m)
{
    m.add_title();
    m.add_issn();
    cout<<"(E)copy or (H)ardbound  : ";
    char ch;
    cin>>ch;
    if(ch=='H')
    {
        m.add_mag_stock();
    }
    else if(ch=='E')
    {
        cout<<endl<<"DOI  : ";
        cin>>doi;
    }
    count_mag++;
} 
int main()
{
    e_resources ebook[50], emag[50];
    main_menu:
    cout<<endl<<"Enter 1 : Add book data";
     cout<<endl<<"Enter 2 : Add magezine data";
     cout<<endl<<"Enter 3 : List all books";
     cout<<endl<<"Enter 4 : List all magezines";
     cout<<endl<<"Enter your choice  : ";
     int n;
     cin>>n;
     int mag=e_resources::get_count_mag();
     int book=e_resources::get_count_book();
    switch (n)
    {
    case 1:
        cout<<endl<<"**** Add book data ****";
        ebook[book].add_book(ebook[book]);
        break;
    case 2:
        cout<<endl<<"**** Add maagezine data ****";
        emag[mag].add_magezine(emag[mag]);
        break;
    case 3:
        cout<<endl<<"**** List all books ****";
        for(int x=0; x<book; x++)
        {
           ebook[x].list_book(ebook[x]);
        }
        break;
    case 4:
        cout<<endl<<"**** List all magezines ****";
        for (int y=0; y<mag; y++)
        {
            emag[y].list_mag(emag[mag]);
        }
    default:
        break;
    }
    cout<<endl<<"----------------------------------------------------------------";
    cout<<endl<<"     Enter M to goto mian menu, Press any key to exit   ";
    char chx;
    cin>>chx;
    if(chx=='M'){goto main_menu;}
    return 0;
}