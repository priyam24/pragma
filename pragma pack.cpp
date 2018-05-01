#include<stdio.h>
#pragma pack(1)
struct emp 
{
	int a;
	char b;
	float c;
};
#pragma pack()
//jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj11111111111222222
int main()
{
	struct emp e;
	printf("%u %u %u",&e.a,&e.b,&e.c);
	return 0;
}
