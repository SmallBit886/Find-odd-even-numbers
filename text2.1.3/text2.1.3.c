#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int i=1;
	while(i <= 100)
	{
		if (i % 2)
		{
			printf("i为奇数为%d\n", i);
		}
		else
		{
			printf("i为偶数%d\n",i);
		}
		i++;
	}



	return 0;
}