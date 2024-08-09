#include<iostream>
using namespace std;
class sort
{ 
   int a[20],n;
   public:
   void accept()
  { 
  
   int i;
   cout<<"Enter the NUmber of elements in the array:";
   cin>>n;
   cout<<"enter the elements to the array:";
   for(i=0;i<n;i++)
     cin>>a[i];
  } 
  void selectionsort()
  { 
    int k,temp,loc,mi;
    for(k=0;k<n;k++)
     { 
        loc=min(mi,k);
        temp=a[k];
        a[k]=a[loc];
        a[loc]=temp;
     } 
 } 
int min(int g,int k)
{
  int j,m;
  
  for(j=k;j<n;j++)
  { 
    if(g>a[j])
    { 
    g=a[j];
    m=j;
    } 
  } 
 return m;
}

void display()
{ 
  int i;
  cout<<"sorted array:";
  for(i=0;i<n;i++)
  cout<<a[i]<<" ";
} 
};
int main()
{
 sort a;
 a.accept();
 a.selectionsort();
 a.display();
 } 
