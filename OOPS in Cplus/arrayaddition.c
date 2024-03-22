#include<stdio.h>
int main()
{
    int a[3][3]={1,2,3,4,5,1,2,3,4},b[3][3]={1,2,3,4,5,1,2,3,4},c[3][3],i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
           for(k=0;k<3;k++)
           {
            c[i][j]+=a[i][k]*b[k][j];
           }
        }
        printf("\n");
        
    }
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
        printf("%6d",c[i][j]);
       } 
       printf("\n");
    }
    
}

/*

1  2  3       1  2  3           
4  5  1   x   4  5  1       =   
2  3  4       2  3  4


*/