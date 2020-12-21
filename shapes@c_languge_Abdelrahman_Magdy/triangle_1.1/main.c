#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,x;
   printf("Enter your value of traingle row =    ");
   scanf("%d",&x);
   for (i=1;i<=x;i++)
   {
       for(j=1;j<=x;j++)
       {
           if(j<=i)
           {
               printf("%d",j);
           }
       }
       printf("\n");
   }
    return 0;
}
