#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	int g[n-1][2];
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<2;j++)
		scanf("%d",&g[i][j]);
	}
	int b[n];
	for(int i=0;i<n;i++)
	scanf("%d",&b[i]);
	int m=0,c=0,o=0;
	for(int i=0;i<n;i++)
	{
		if(!b[i])
		{
			c++;
		}
		else
		{
			if(!b[i-1])
			{
				if(i-c-1>=0 && b[i-c-1])
					c+=2;
				else
					c+=1;
				if(c>m)
					m=c;
				c=0;
			}

		}
	}
	if(m!=n)
	printf("%d\n",m);
	else
	printf("%d\n",m);
}
