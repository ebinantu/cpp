#include<iostream>
using namespace std;
class item
{
 int itno,price,stock;
 char name[20];
 public:
 void accept();
 void display();
 friend void calc(item &,int);
};
void item::accept()
{ 
 cout<<"enter itno,name,price,stock";
 cin>>itno>>name>>price>>stock;
}
void item::display()
{
 cout<<itno<<"\t"<<name<<"\t"<<price<<"\t"<<stock<<endl;
}
void calc(item &t,int k)
{
 if(t.stock>100)
 {
  t.price=t.price-k;
 }
}
int main()
{
 int i,n;
 item m[10];
for(i=0;i<10;i++)
{
 m[i].accept();
}
cout<<"how much to reduce the price of an item whose current stock is above 100";
cin>>n;
for(i=0;i<10;i++)
{
 calc(m[i],n);
}
 cout<<"itno\tname\tprice\tstock\n";
 for(i=0;i<10;i++)
  m[i].display();
return 0;
}
