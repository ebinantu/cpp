#include<iostream>
using namespace std;
class Matrix
{ 
    int om[10][10],row,col,i,j,flag;
    public:
    void input();
    void display();
    void check();
};
void Matrix::input()
{ 
   cout<<"enter rows anf columns of matrices:";
   cin>>row>>col;
   for(i=0;i<row;i++)
   
       for(j=0;j<col;j++)
          {
          cout<<"Enter the elements rowise:"<<endl;
           cin>>om[i][j];
          }
}
void Matrix::check()
{
     for(i=0;i<row;i++)
     {
         for(j=0;j<col;j++)
         {
            if(om[i][j]!=om[j][i])
              {
                flag=1;
                break;
              }
         }
         if(flag==1)
         break;
   
}
}
     void Matrix::display()
     {   
        if(flag==1)
        cout<<"the Matrix is not symmetric";
        else
        cout<<"the matrix is symmetric";
     }
int main()
{ 
        Matrix M;
        M.input();
        M.check();
        M.display();
}
     
