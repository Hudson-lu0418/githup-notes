#include<stdio.h>
int f(int m);
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("%d",f(n));
} 
//int f(int n)
//{
//	if(n==1||n==2)
//	return 1;
//	int a=1;
//	int b=1;
//	int t=0;
//	for(int i=3;i<=n;i++)
//	{
//	t=b;
//	b=a+b;
//	a=t;
//	}
//	return b;
//}
int f(int n)
{
	if(n==1||n==2)
	return 1;
	return f(n-1)+f(n-2);
}
