#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	printf("The reversed number is :");
	while(n>0){
		printf("%d",n%10);
		n=n/10;
	}
	return 0;
}
