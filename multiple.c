#include<stdio.h>
void main()
{
int M,N;
	printf("Enter the number ");
	scanf("%d",&M);
	printf("Enter the multiple of the number ");
	scanf("%d",&N);
if(M%N==0)
	printf("%d\n",M/N);
else
	printf("%d\n",0);


}
