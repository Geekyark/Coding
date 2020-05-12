#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=5; i>=1; i--)
 {
           // printf("\n");
            for(j=1; j<=i; j++)
            {
                printf(" %d",j);
            }
            for(k=4; k>=i; k--)
            {
                printf("  ");
            }
            for(j=4; j>=1; j--)
            {
                if(j<=i)
                {
                    printf(" %d",j);
                }
                else
                    printf("  ");
            }
   printf("\n");

 }

}

