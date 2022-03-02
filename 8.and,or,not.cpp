#include<stdio.h>
int main()
{
	printf("TRUTH TABLE\n");
	printf("AND OPERATOR\n");
	printf("1\t0\t%d\n",1&0);
	printf("1\t1\t%d\n",1&1);
	printf("0\t1\t%d\n",0&1);
	printf("0\t0\t%d\n",0&0);
	printf("OR OPERATOR\n");
	printf("1\t0\t%d\n",1|0);
	printf("1\t1\t%d\n",1|1);
	printf("0\t1\t%d\n",0|1);
	printf("0\t0\t%d\n",0|0);
	printf("NOT OPERATOR\n");
	printf("1\t%d\n",!1);
	printf("0\t%d\n",!0);
	return 0;
}
