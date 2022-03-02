#include<stdio.h>
int main()
{
	int x;
	printf("Enter the first number  :");
	scanf("%d",&x);
	if(x&1==1)
	printf("The no. is odd");
	else
	printf("The number is even");
	return 0;
}
