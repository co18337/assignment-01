#include<stdio.h>
int find_even(int );
void main()
{
int k;
scanf("%d",&k);
find_even(k);
}

int find_even(int t)
{
int count=0;
int A[]={1,2,3,4,2,4,2,4,2,4,6,4,6,8};
for(int i=0;i<10;i++)
{
scanf("%d",&A[i]);
}
for(int i=0;i<=11;i++)
{
	if(A[i]%2==0)
	count++;
	if(count==t)
	printf("%d\n",A[i]);
	else
	continue;
}
return 0;
}

