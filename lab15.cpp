# include<iostream>
using namespace std;
class student
{
 protected:
 int clno,mark;
 char name[30];
 public:
 void accept();
 void display();
 friend void calc(student&);
};
void student::accept()
{
 cout<<"enter the details";
 cin>>clno>>name>>mark;
}
void clac (student &t)
{
 t.mark=t.mark+10;
}
void student::display()
{
 cout<<clno<<"\t"<<name<<"\t"<<mark;
}
int main()
{
 int i,m=10;
 student s[10];
 for(i=0;i<10;i++)
 {
  s[i].accept();
 }
 for (i=0;i<10;i++)
 {
  calc(s[i]);
 }
 cout<<"clno\tname\tmark";
 for(i=0;i<10;i++)
 {
  s[i].display();
 }
return 0;
}
