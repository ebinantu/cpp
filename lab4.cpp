#include<iostream>
using namespace std;
class rev
{
   int reve,num;
   public:
   void accept();
   void display();
   void calc();
   rev();
  };
  rev::rev()
  {
     reve=0;
   }
  void rev::accept()
  {
    cout<<"Enter the Number:";
    cin>>num;
  }
  void rev::calc()
  {
    int mod;
    while(num!=0)
    {
      mod=num%10;
      reve=(reve*10)+mod;
      num=num/10;
    }
  }
 void rev::display()
 { 
    cout<<"reverse of the number is "<<reve;
 }
 int main()
 {
    rev n;
    n.accept();
    n.calc();
    n.display();
 }
