// Sample code to perform I/O:
#include <stdio.h>

void main()
{
    int t,n,i,p=1,s=0;
    scanf("%d",&t);
    while(t>0)
    {
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s+=(n-i);
        p=p*i;
    }
    printf("%d",p*s);
    s=0;
    p=1;
    t--;
    }
}

