#include<stdio.h>
#include<math.h>
int fact(int n);
int main()
{
    int i,x,l;
    int s=x,n,sign=-1;
    for(i=1; i<=n; i=+2)
    {
        l=pow(x,i)/fact(i);
        s=s+sign*l;
        sign=sign*(-1);
    }
    printf("%f",s);
}
  int (fact(n))
{
    int j=1;
    for(j=1; j<=n; j++)
    {
        fact=fact*j;
        printf("%d", fact);
    }
}
