#include<iostream> 
using namespace std;
class interest
{
   float R1,R2,R3;
   public:
   void inrest(int,float,int);
   void intrest(float,int,int);
   void intrest(int,int,float);
};
void interest::intrest(int n,float p,int i)
{
    R1=(i*100)/(n*p);
    cout<<"interest rate of nationalized bank"<<R1<<endl;
 }
 void interest::intrest(float p,int n,int i)
 {
    R2=(i*100)/(n*p);
    cout<<"Interest rate of private bank";
 }
 void interest::intrest(int n,int i,float p)
 {
    R3=(i*100)/(n*p);
    cout<<"Interest rate of cooperative bank"<<R3<<endl;
 }
 int main()
 {
    int n1,n2,n3,i1,i2,i3;
    float p1,p2,p3;
    cout<<:"enter the principle amount for national,private,cooperative bank";
    cin>>p1>>p2>>p3;
    cout<<"Enter the interest for nationalized,private,cooperative society";
    cin>>i1>>i2>>i3;
    cout<<"enter time period for nationalized,private,cooperative society";
    cin>>n1>>n2>>n3;
    intrest(n1,p1,i1);
    intrest(p2,n2,i2);
    intrest(p3,i3,n3);
 }
