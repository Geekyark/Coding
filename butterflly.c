#include<stdio.h>
void main()
{
    int i,j,k,l;
    for(i=1; i<=14; i++)
    {
      printf("\t");
      for(j=1; j<=i; j++)
       {
         printf(" *");
       }
       for(k=1; k<=7; k++)
       {
        printf(" ");
       }
       printf("\n");
     }
     for(i=14; i>=1; i--)
     {
        for(j=14; j>=i; j--)
         {
             printf(" *");
         }
         for(k=7; k>=i; k--)
         {
             printf(" ");
         }
         printf("\n");
     }
}
