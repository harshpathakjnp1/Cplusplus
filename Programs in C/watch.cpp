#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int count=1;
 
    
    for (int hr = 1; hr <= 359; hr++)
    {
        
        int hrdeg=hr % 360;
        int mindeg=(hr*12) % 360;
        int newhrdeg=(hr + 1)%360;
        int newmindeg=((hr+1)*12) % 360;
        int prevdiff=hrdeg-mindeg;
        int currentdiff=newhrdeg-newmindeg;
        if(prevdiff*currentdiff<0)
        {
       cout<<count<<"\t"<<hrdeg<<"\t" << mindeg;
       cout<<"\t"<<newhrdeg<<"\t\t" << newmindeg<< endl;
       count++;
        }
    }
}