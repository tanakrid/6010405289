#include <stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter an amount: ");
	scanf("%d", &a);
	b = a/50;
	a = a -(b*50);
	c = a/20;
	a = a -(c*20);
	d = a/5;
	a = a -(d*5);
	printf("1: %d\n5: %d\n20: %d\n50: %d", a,d,c,b);
	return 0;
}