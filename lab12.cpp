#include<iostream>
using namespace std;
class item
{
 int itno,price;
 char name[20];
 public:
 void accept();
 void display();
};
void item::accept()
{
 cout<<"enter itno,name,price";
 cin>>itno>>name>>price;
}
void item::display()
{
 cout<<itno<<"\t"<<name<<"\t"<<price<<endl;
}
int main()
{
item t[20];
int i;
for(i=0;i<20;i++)
 t[i].accept();
cout<<"itno\tname\tprice"<<endl;
for(i=0;i<20;i++)
 t[i].display();
 return 0;
}
 
