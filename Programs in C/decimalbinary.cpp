#include<iostream>
using namespace std;
int main()
{
    int number=56,x,y;
    while(number!=0)
    {
        x=number%2;
        number=number/2;
        cout<<x<<" ";
    }


    return 0;


}



