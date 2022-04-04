#include<iostream>
using namespace std ;
int main()
{
    int x,y,z;
    cout<<"Enter two number : ";
    cin>>x>>y;
    if (x>y){
        z=x;
        cout<<"The Bigger number is : "<<z;
   }

    if (y>x)
    {
        z=y;
        cout<<"the Bigger number is : "<<z;
    }
    if(x==y)
    {
      cout<<"both are equal";
    }
    return 0;

}
