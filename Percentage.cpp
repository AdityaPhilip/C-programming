/* This program is to find percentage from marks in five subjects*/
#include<stdio.h>
int main ()
{
	int a, b, c, d, e, f;
	printf("Enter marks in the five subjects");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	f = (a+b+c+d+e)/5;
	printf("total percentage is %d", f);
	return 0;
}
