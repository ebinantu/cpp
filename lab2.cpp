#include<iostream>
using namespace std;
class mark
{
     int m[10],highest;
     public:
     void accept();
     void calc();
     void display();
   
};
void mark::accept()
{   int i;
   cout<<"Enter the Marks";
   for(i=0;i<10;i++)
   cin>>m[i];
}
void mark::display()
{
  cout<<"highest mark:"<<highest;
}
void mark::calc()
{ 
    int i;
    highest=m[0];
    
    for(i=0;i<10;i++)
    {
       if(m[i]>highest)
       { 
           highest=m[i];
        }
     }
}
int main()
{
    mark t;
    t.accept();
    t.calc();
    t.display();
}
    
       
