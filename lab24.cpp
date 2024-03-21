
#include<iostream>
using namespace std;
class student
{
   int clno,mark;
  char name[20];
   public:
   void accept();
   void display();
};
void student::accept(){

cout<<"enter class number,name,mark";
cin>>clno>>name>>mark;
}
void student::display(){
cout<<clno<<"\t"<<name<<"\t"<<mark;
}
int main()
{
   student s,*p;
   p=&s;
   p->accept();
   cout<<"details you Entered"<<endl;
   p->display();
}

