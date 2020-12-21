#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows,i,j;
  printf("Enter the number of rows =  ");
  scanf("%d",&rows);

  for(i=1;i<=rows;i++)
  {
      for(j=i;j<rows;j++)
      {
          printf(" ");
      }
      for(j=1;j<=(2*i-1);j++)
      {
          if( j==1|| j==(2*i-1))
             {
                 printf("*");
             }
             else
                {
                    printf(" ");
                }
      }


      printf("\n");
      for(j=1;j<=(2*i);j++)
      {
      if(i==rows)
      {
          printf("*");
      }
      }
  }
    return 0;
}
