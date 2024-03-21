#include<iostream>
using namespace std;
class even
{
    int a,b; 
    public:
    void accept();
    void display();
};
void even::accept()
{
    cout<<"enter two numbers";
    cin>>a>>b;
}
void even::display()
{
   int i=0;
   for(i=a+1;i<b;i++)
   {
       if(i%2==0)
       {
         cout<<i<<"\t";
        }
    }
}
int main()
{
   
   even t;
   t.accept();
   t.display();
}
