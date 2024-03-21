#include<iostream>
using namespace std;
class item
{
  int itmno,price,disprice;
  char name[10];
  public:
  void accept();
  void display();
};
void item::accept()
{
   cout<<"enter itemno name price:";
   cin>>itmno>>name>>price;
}
void item::display()
{
    disprice=price-(20*price)/100;
  cout<<"itemno:"<<itmno<<"\t"<<"name:"<<name<<"\t"<<"price:"<<price<<"\t"<<"discoutprice:"<<disprice;
}
int main()
{
   item t1;
   t1.accept();
   t1.display();
}
