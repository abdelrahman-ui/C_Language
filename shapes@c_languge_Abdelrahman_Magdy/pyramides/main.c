
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,x;
   printf("Enter your value of traingle row =    ");
   scanf("%d",&x);
   for (i=x;i>=1;i--)
   {
       for(j=1;j<=(x-1);j++)
       {
           if(j<i)
           {
               printf(" ",j);
           }
       }
       for(j=1;j<=x;j++)
       {
           if(j>=i)
           {
               printf("%d",j);
           }
       }
       for(j=4;j>=1;j--)
       {
           if(j>=i)
           {
               printf("%d",j);
           }
       }
       printf("\n");
   }
    return 0;
}

