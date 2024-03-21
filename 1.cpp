#include <iostream>
using namespace std;
class student
{
   int  clno,eng,maths,total;
   char name[20];
   public:
   void accept()
   {
       cout<<"enter clsno,name,english,maths  and total\n";
       cin>>clno>>name>>eng>>maths>>total;
   }
    void display()
    {
    
     cout<<clno<<"\t"<<name<<"\t"<<eng<<"\t"<<maths<<"\t"<<total;
     ;
    }
};
  
int main()
{
    student s1,s2;
    s1.accept();
    s2.accept();
    s1.display();
    s2.display();
}
