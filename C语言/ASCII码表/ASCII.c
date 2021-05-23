#include<stdio.h>
#include <conio.h>
int main(void)
{
	for (int i = 33; i <= 127; i++)
	{
		printf("\tthe ASCII:%d char=:'\033[35m%c\033[0m'\n", i, i);
		sleep(1);
	}
	getchar();
	return 0;
}