/*This c program is for all arithmetic operations*/
#include<stdio.h>
int main ()
{
	float a, b, c, d, e, f;
	scanf("%d", &a);
	scanf("%d",&b);
	c = a+b;
	d= a-b;
	e= a*b;
	f= a/b;
	printf("\n Addition %d",c);
	printf("\n Subtraction %d",d);
	printf("\n Multiplication %d",e);
	printf("\n Division %d",f);
	return 0;
}
