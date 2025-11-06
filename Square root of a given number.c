#include<stdio.h>
#include<math.h>
int main()
{
	double num, result;
	printf("Enter a number:");
	scanf("%if",&num);
	result=sqrt(num);
	printf("square root of%.21f=%.21f\n",num,result);
	return 0 ;
}
