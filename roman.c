#include<stdio.h>
void repeat2(char ,char );
void repeat(char ,int );
char roman[1000];
int i=0;
void main()
{
int a;
	printf("Enter the integral number ");
	scanf("%d",&a);
while(a!=0)
{
	if(a>=1000)
	{

		repeat('M',a/1000);
		a=a-(a/1000)*1000;
	}
		else if(a>=500)
		{
			if(a<900)
			{
				repeat('D',a/500);
				a=a-(a/500)*500;
			}
			else
			{
				repeat2('C','M');
				a=a-900;
			}
		}
		else if(a>=100)
		{
			if(a<400)
			{
				repeat('C',a/100);
				a=a-(a/100)*100;
			}
			else
			{
				repeat2('L','D');
				a=a-400;
			}
		}
		else if(a>=50)
		{
			if(a<90)
			{
				repeat('L',a/50);
				a=a-(a/50)*50;
			}
			else
			{
				repeat2('X','C');
				a=a-40;
			}
		}
		else if(a>=10)
		{
			if(a<40)
			{
				repeat('X',a/10);
				a=a-(a/10)*10;
			}
			else
			{
				repeat2('X','L');
				a=a-40;
			}
		}
		else if(a>=5)
		{
			if(a<9)
			{
				repeat('V',a/5);
				a=a-(a/5)*5;
			}
			else
			{
				repeat2('I','X');
				a=a-9;
			}
		}
		else if(a>=1)
		{
			if(a<4)
			{
				repeat('I',a/1);
				a=a-(a/1)*1;
			}
			else
			{
				repeat2('I','V');
				a=a-4;
			}
		}
}
printf("roman number is : ");
for(int j=0;j<i;j++)
	printf("%c",roman[j]);
}
void repeat2(char x,char y)
{
roman[i++]=x;
roman[i++]=y;
}
void repeat(char c,int n)
{
	int j;
	for(j=0;j<n;j++)
		roman[i++]=c;
}
