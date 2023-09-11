/* This program is to swap numbers entered*/
#include<stdio.h>
int main ()
{
	int a, b;
	printf("enter number one");
	scanf("%d", &a);
	printf("enter number 2");
	scanf("%d", &b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("%d %d",a, b);
	return 0;
}
