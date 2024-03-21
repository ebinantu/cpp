#include<iostream>
using namespace std;
class dimensions{
public:
int l,b,h;
public:
void accept();

};
class area:public dimensions{
public:
int a;
void findarea();
};
class volume:public dimensions{
public:
int v;
public:
void findvolume();
};
void dimensions::accept(){
cout<<"enter the length,breadth,height";
cin>>l>>b>>h;
}
void area::findarea()
{
   a=b*l;
   cout<<"area of rectangle:"<<a;
}
void volume::findvolume()
{
   v=l*b*h;
   cout<<"volume of rectangle:"<<v;
}
int main()
{          
  area a;
  volume b;
  a.accept();
  a.findarea();
  b.accept();
  b.findvolume();
 }
   

