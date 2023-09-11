/*this program is to find salary of person*/
#include<stdio.h>
int main ()
{
int bsal;
float da, hra, tsal;
printf("enter base salary here");
scanf ("%d",&bsal);
da = (bsal/100)*45;
hra = (bsal/100)*15;
tsal = bsal + da + hra;
printf("total salary is %f", tsal);
return 0;
}
