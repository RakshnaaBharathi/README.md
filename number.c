#include<stdio.h>
void main()
{
int i;
printf("enter the value:");
scanf("%d",&i);
if(i>0)
{
printf("%d is positive number",i);
}
else if(i<0)
{printf("%d is negative number",i);
}
else
printf("%d is zero",i);
return 0;
}
