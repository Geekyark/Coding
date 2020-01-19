#include <stdio.h>
int main(){
	char st[100000];
	int count =0,o=0,j=0,a=0,s=0,l;
	gets(st);
	for(l=0;st[l];l++)
	{
	    if(st[l]=='o')
	    o++;
	    if(st[l]=='j')
	    j++;
	    if(st[l]=='a')
	    a++;
	    if(st[l]=='s')
	    s++;
    }
	    if(l>=1&&l<=100000)
	    while(o!=0&&j!=0&&a!=0&&s>=2)
	    {
	        o--;
	        j--;
	        a--;
	        s=s - 2;
	        count++;
	    }
	    printf("%d",count);
	    return 0;
}
