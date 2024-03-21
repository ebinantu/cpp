#include <iostream>
using namespace std;
class item
{
 int itemno;
 char itemname[1000];
 int cost,profit; 
 float sell;
 public:
 void accept();
 void display();
 void calc();
 };
 void item::accept()
 {
   cout<<"enter itemno  itemname  costprice\n";
   cin>>itemno>>itemname>>cost;
 }
   void item::calc()
{
    sell=(cost/10.0)+cost;
    profit=sell-cost;
}
void item::display()
{ 
  cout<<itemno<<"\t"<<itemname<<"\t"<<cost<<"\t"<<sell<<"\t"<<profit;
}
int main()
{
  item i1,i2;
  i1.accept();
  i2.accept();
  i1.calc();
  i2.calc();
  cout<<"itemno\titemname\tcost\tsell\tprofit";
  i1.display();
  i2.display();
}
