#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float x1,x2;
	printf("Quadratic equation looks like : ax2 + bx + c = 0 \n");
	printf("Enter the values of a,b,c with sign :  \n");
	scanf("%d%d%d",&a,&b,&c);
	x1=(-b-(sqrt(pow(b,2)-4*a*c)))/(2.0*a);
	x2=(-b+(sqrt(pow(b,2)-4*a*c)))/(2.0*a);
	printf("Roots of the equation are :  %.2f \t %.2f",x1,x2);
	return 0;
}
