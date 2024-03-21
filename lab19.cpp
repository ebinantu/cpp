#include<iostream>
using namespace std;
class complex
{
 int rea,ima;
 public:
 void accept();
 void operator+(complex);
};
void complex::accept()
{
 cout<<"ebter the real part and imaginary part";
 cin>>rea>>ima;
}
void complex::operator+(complex t)
{
 cout<<"sum of two complex number:"<<rea+t.rea<<"+i"<<ima+t.ima;
}
int main()
{
 complex c1,c2;
 c1.accept();
 c2.accept();
 c1+c2;
 return 0;
}
