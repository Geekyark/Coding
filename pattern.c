#include<stdio.h>
#include<conio.h>

void main()
{
 int i, j,k;
    for(i=1;i<=5;i++)
    {
      for(j=1;j<=i;j++)
      {
       printf("  %c",'A' + i-1);
      }
      for(k=5; k<=1; k--)
      {
          printf(" 0");
      }
      printf(" \n");
    }

}
