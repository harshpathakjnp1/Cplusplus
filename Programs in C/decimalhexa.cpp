#include<iostream>
using namespace std;
int main()
{
    int number=31,x,y;
    while(number!=0)
    {
        x=number%16;
        number=number/16;
        if(x==10)
        cout<<"A ";
        else if(x==11)
        cout<<"B ";
        else if(x==12)
        cout<<"C ";
        else if(x==13)
        cout<<"D ";
        else if(x==14)
        cout<<"E ";
        else if(x==15)
        cout<<"F ";
    else
        cout<<x<<" ";
    }


    return 0;


}



