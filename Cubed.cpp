/* this program is to find cube of a number*/
#include<math.h>
int main()
{
	int a, b;
	printf("enter number to be cubed");
	scanf("%d", &a);
	b = pow(a,3);
	printf("%d",b);
	return 0;
}
