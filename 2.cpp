#include<iostream>
using namespace std;
class item
{
   int itno,price;
   char itname[10];
   
   public:
   void accept()
   {
     cout<<"enter the details of item\n";
     cin>>itno>>itname>>price;
    }
    void display()
    { 
      
       cout<< itno<<"\t"<<itname<<"\t\t"<<price;
    }
 };
 int main()
 { 
      item it1;
      it1.accept();
      cout<<"iteamno"<<"\t"<<"iteamname"<<"\t"<<"price\n";
      it1.display();
  }
