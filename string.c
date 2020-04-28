#include<stdio.h>
void main()
{
 int i,j,n,k;
 scanf("%d",&n);
 for(i=1; j<=n; i++)
 {

   for(j=1; j<=i; j++)
   {
            printf("%c",'A'+j-1);
   }
   for(k=n; k<=i; k++)
   {
       printf("  ");
   }
printf("\n");
 }
}
