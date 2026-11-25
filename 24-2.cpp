#include<stdio.h>
struct point{
	int x;
	int y;
}; 
struct point getpoint(void);//结构类型的函数
void output(struct point);
int main(void)
{
	struct point p={0,0};
	p=getpoint();//p为结构体 getpoint也为结构体；结构体之间可以互等！！数组却不可以； 
	output(p);
	return 0;
}
struct point getpoint(void) 
{
	struct point p;
	scanf("%d",&p.x);
	scanf("%d",&p.y);
	printf("%d %d\n",p.x,p.y);
	return p;
}
void output(struct point p)
{
	printf("%d %d",p.x,p.y);
}
