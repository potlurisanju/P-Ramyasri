#include<stdio.h>
main(){
	int a,b, t;
	printf("enter a,b values:");
	scanf("%d%d",&a,&b);
	printf("\n before swapping...\n");
	printf("a=%d\t b=%d",a,b);
	t=a;
	a=b;
	b=t;
	printf("\n after swapping...\n");
	printf("a=%d \t b=%d",a,b);	
}
