#include<stdio.h>
int f(int *p);
int main(void)
{
	int a[]={1,2,3,4};
	int *p=a;
	printf("%d",f(p));

 } 
int f(int *p)
{
	if(*p>4)
	return 0;
	return  *p+f(++p); 
}
