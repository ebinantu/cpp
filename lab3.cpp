#include<iostream>
#include<cstring>
using namespace std;
class grade
{
   int mark1,mark2,mark3,total;
   char g[8];
   public:
   void accept();
   void display();
   void calc();
};
void grade::accept()
{ 
    cout<<"enter the three marks";
    cin>>mark1>>mark2>>mark3;
}
void grade::calc()
{   int per;
    total=mark1+mark2+mark3;
    per=(total/150)*100;
    if(per>=90)
     strcpy(g,"A+");
    else if(per>=85&&per<90)
     strcpy(g,"A");
    else if(per>=80&&per<85)
     strcpy(g,"B+");
    else if(per>=75&&per<80)
     strcpy(g,"B");
     else
     strcpy(g,"Below B");
}
void grade::display()
{
cout<<"your grade:";
puts(g);
}
int main()
{ 
   grade c;
   c.accept();
   c.calc();
   c.display();
}
