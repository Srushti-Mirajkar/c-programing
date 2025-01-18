#include<stdio.h>
int main()
{
	int a=10,b=7,c=8;
	if(a>=b&&a>=c)
	{
		printf("%d is the largest number",a);
	}
	else if(b>=a&&b>=c)
	{
		printf("%d is the largest number", b);
	}
	else
	{
		printf("%d is the largest number",c);
	}
}
