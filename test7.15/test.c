#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int rn(x)
{
	if (x % 4==0&& x % 100 != 0 || x % 400 == 0)
		return 1;
	else
		return 0;
}
int main()
{
	char k = 0;
	printf("���������\n");
	getchar(k);
	rn(k);
	if (rn(k)== 0)
	{
		printf("��������");
	}
	else
	{
		printf("������");
	}
	return 0;
}