#include<iostream>
using namespace std;
class one {
 int m;
 public:
one();
one(one &);
one(int);
};
class two{
  int *p,n,i;
  public:
  two();
 };
 two::two(){
    cout<<"Dynamic Constructor"<<endl;
    cout<<"enter the number of elements int array":
    cin>>n;
    p=new int[n];
    cout<<"enter the values";
    for(i=0;i<n;i++){
       cin>>p[i];
    }
     cout<<"entered values"<<endl;
     for(i=0;i<n;i++){ 
     cout<<p[i]<<endl;
   } 
}
  one::one(one &t)
  {
    cout<<"copyconstructor"<<endl;
    m=m.t;
    cout<<"copied value"<<m;
  } 
  one::one(int k)
  {
     m=k;
     cout<<"parameterzid constructor";
     cout<<"the value you given as parameter:"<<m<<endl;
  }
  one::one()
  {
    m=10;
    cout<<:"Default value of m"<<m;
  }
int main()
{
  one a;
  one d(a);
  one b(10);
  two c;
  return 0;
} 
