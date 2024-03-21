#include<iostream>
using namespace std;
class geometry
{
   float a,pi;
  public:
  void area(float);
  void area(float,float);
  void area(float,float,float);
  geometry();
 };
 void geometry::area(float r)
 {
   a=pi*r*r;
   cout<<"area of circle:"<<a;
  }
  void geometry::area(float l,float w)
  {
     a=l*w;
     cout<<"\narea of the rectangle:"<<a;
  }
 void geometry::area(float l,float w,float h)
 {
      a=l*w*h;
      cout<<"\narea of triangle:"<<a;
 }
geometry::geometry()
{
   pi=3.14;
}
int main()
{
geometry m;
 int length,height,radi,l,width;
 cout<<"Enter the radius of circle";
 cin>>radi;
 cout<<"Enter the length and width of rectangle";
 cin>>length>>width;
 cout<<"Enter the length and height";
 cin>>l>>height;
 m.area(radi);
 m.area(length,width);
 m.area(.5,l,height);
 
 }

