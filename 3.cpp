#include<iostream>
using namespace std;
class student
{
   int classno,mark1;
   char name[20];
   
 public:
    void accept();
    void display();
    void mod(int);
 }; 
void student::accept()
{ 
   cout<<"enter the classno nameofstudent mark\n";
   cin>>classno>>name>>mark1;
 } 
void student::display()
{ 
  //mark1=mark1+k;
  cout<<classno<<"\t"<<name<<"\t"<<mark1;
}
void student::mod(int k)
{ 
  mark1=mark1+k;
  cout<<classno<<"\t"<<name<<"\t"<<mark1<<clea"\n";
} 
int main()
{ 
   student s1,s2;
   s1.accept();
   s2.accept();
   cout<<"classno"<<"\t"<<"name"<<"\t"<<"mark1\n";
   s1.mod(10);
   s2.mod(10);
}
