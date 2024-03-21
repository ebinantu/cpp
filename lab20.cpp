#include<iostream>
using namespace std;
class A
{
 int l,b;
};
class B:public A
{
 int a;
 public: 
 void accept();
 void area();
};
void B::accept()
{
 cout<<"enter length ang breadth";
 cin>>l>>b;
}
void B::area()
{
 a=l*b;
 cout<<"area="<<a;
}
int main()
{
 B s;
 s.accept();
 s.area();
 return 0;
}
