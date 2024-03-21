# include<iostream>
using namespace std;
class item
{
 int itno,price;
 char name[20];
 public:
 void accept();
 void calc(item);
};
void item::accept()
{
 cout<<"enter itemnumber,name,price";
 cin>>itno>>name>>price;
}
void item::calc(item n)
{
 if(price>n.price)
  cout<<itno<<"\t"<<name<<"\t"<<price;
 else
  cout<<n.itno<<"\t"<<n.name<<"\t"<<n.price;
}
int main()
{
 item t1,t2;
 t1.accept();
 t2.accept();
 t1.calc(t2);
 return 0;
}
