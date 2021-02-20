#include<stdio.h>

void Binary(int n)
{
  int i,j,m=-1,a[16];
	 while(n!=0)
    {
        i=n%2;
        a[++m]=i;
        n=n/2;
    }
    printf("\t对应的二进制数字为:");
    for(j=m;j>=0;j--)
        printf("\e[1;35m%d\033[0m",a[j]);
        
	}

int count_bit_one(int num)
{
	int count = 0;
	while (num)
	{
		count++;
		num = num & (num - 1);//每进行一次这个操作，num的二进制表示中就少一个1，直到最后全为0		
	}

	return count;
	
}

int main()
{
	int num = 0;
	printf("\t请输入一个整数:");
	scanf("%d", &num);
	Binary(num);
	printf("\n\t其中一的个数为\e[32m%d\e[0m个1\n", count_bit_one(num));
	return 0;
}