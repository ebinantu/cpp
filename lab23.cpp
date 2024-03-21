#include<iostream>
using namespace std;
class triangle
{
 protected:
int t,l,h;
public:
triangle();
};
triangle::triangle()
{
 cout<<"Enter length & height ";
 cin>>l>>h;
 cout<<"area of triangle:";
 t=l*h/2;
 cout<<t;
}
class rectangle: public triangle
{
   public:
   int r;
   public:
   rectangle();
};
rectangle::rectangle()
{
   cout<<"area of rectangle with entered length and breadth";
   r=l*h;
   cout<<r<<endl;
}
class volume:rectangle
{
    int v,n;
    public:
    volume();
};
volume::volume()
{
    cout<<"to find volume of rectangle enter the height";
    cin>>n;
    v=r*n;
   cout<<"volume of rectangle"<<v;
   
}
int main()
{
   volume s;
}
