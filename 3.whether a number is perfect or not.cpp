#include<stdio.h>
int main()
{
	int n,sum=0,c=1;
	printf("Enter the number : ");
	scanf("%d",&n);
	while(c<=n/2){
		if(n%c==0)
		sum+=c;
		c++;
	}
	if(sum==n)
	printf("The number is perfect");
	else
	printf("The number is not perfect");
	return 0;
}
