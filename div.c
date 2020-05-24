#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {  scanf("%d",&arr[i]);
       
    }
    int r=arr[n-1]%10;
    if(r==0)
    printf("Yes\n");
    else
    printf("No\n");
    return 0;
    
    
}
