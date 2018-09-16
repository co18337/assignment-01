#include<stdio.h>
void main()
{

int a,b,c;
	printf("Enter the first number\n");
	scanf("%d",&a);
	printf("Enter the second number\n");
	scanf("%d",&b);
	printf("Enter the third  number\n");
	scanf("%d",&c);
if(a==b)
	printf("%d\n",1);
else
{
	if(b==c)
		printf("%d\n",1);
	else
		printf("%d\n",0);
}
}



