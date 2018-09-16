#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the 1st side");
	scanf("%d",&a);
	printf("Enter the 2nd side");
        scanf("%d",&b);
	printf("Enter the 3rd side");
        scanf("%d",&c);
if(a+b>c)
{
	if(b+c>a)
	{
		if(a+c>b)
			printf("1");
	}
}
else
printf("0");
}

