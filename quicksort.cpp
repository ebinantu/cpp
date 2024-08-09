#include<iostream>
using namespace std;
class quick
{
public:
int a[50],n;
void accept();
void sort(int,int);
void display();
};
void quick::accept()
{
int i;
cout<<"enter the limit:";
cin>>n;
cout<<"enter the elements:";
for(i=0;i<n;i++)
cin>>a[i];
}
void quick::sort(int l,int h)
{
int low,high,key,temp;
low=l;
high=h;
key=a[(l+h)/2];
do
{
while(a[low]<key)
low=low+1;
while(a[high]>key)
high=high-1;
if(low<=high)
{
temp=a[low];
a[low++]=a[high];
a[high--]=temp;
}
}
while(low<=high);
if(l<high)
sort(l,high);
if(low<h)
sort(low,h);
}
void quick::display()
{
int i;
cout<<"displaying sorted array:";
for(i=0;i<n;i++)
cout<<a[i]<<"\t";
}
int main()
{
quick q;
q.accept();
q.sort(0,(q.n)-1);
q.display();
return 0;
}

