#include<iostream>
using namespace std;
class item
{
    int itemno,price,sell,a;
    char name[20];
    public:
    void accept();
    void display();
    void calc();
};
void item::accept()
{
 cout<<"Enter the itemno itemname price:";
 cin>>itemno>>name>>price;
}
void item::calc()
{
  int a;
  a=(price *20)/100;
  sell=price-a;
 } 
 void item::display()
 { 
 
    cout<<itemno<<"\t"<<name<<"\t"<<price<<"\t"<<sell<<"\t"<<a<<"\n";
 } 
 int main()
 { 
    item t[10];
    int i;
    for(i=0;i<10;i++)
    { 
        t[i].accept();
        t[i].calc();
       }
   cout<<"itemno"<<"\t"<<"name"<<"\t"<<"price"<<"\t"<<"sell"<<"\t"<<"discount";
   for(i=0;i<10;i++)
   {
   t[i].display();
   }
   
 }
