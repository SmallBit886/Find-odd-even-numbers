#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int i=1;
	while(i <= 100)
	{
		if (i % 2)
		{
			printf("iΪ����Ϊ%d\n", i);
		}
		else
		{
			printf("iΪż��%d\n",i);
		}
		i++;
	}



	return 0;
}