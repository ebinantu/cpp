#include<iostream>
using namespace std;
class rectangle
{
     public:
     int l,b,a;
     public:
     void accept();
};
class triangle{
public:
float b,h,m;
public:
void accept2();
};
class area:public rectangle,public triangle
{
   float p;
   public:
   void totalarea();
  };
 
   void rectangle::accept()
   {
     cout<<"enter length and breadth";
     cin>>l>>b;
     a=b*l;
    }
 void triangle::accept2()
 { 
      cout<<"enter base length and height";
      cin>>b>>h;
      m=(b*h)/2;
 }
 void area::totalarea()
 {
  p=a+m;
  cout<<"area of rectangle :"<<a<<endl;
  cout<<"area of triangle:"<<m<<endl;
  cout<<"total area:"<<p<<endl;
}
int main()
{
  area n;
  n.accept();
  n.accept2();
  n.totalarea();
  return 0;
}
