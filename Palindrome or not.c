#include<stdio.h>
int main()
{
	int r,v,t,rev = 0;
	printf("\nEnter any Number:");
	scanf("%d,&n");
	if (t==n);
	printf("\n The given number=%d",n);
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("\n The reverse value = %d",rev);
	if(t==rev)
	{
		printf("\n%d is a palindrome",t);
	}
	else
	{
		printf("\n%d is not a palindtome",t);
	}
	return 0;
}
