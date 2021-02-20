#include<stdio.h>
#include<string.h>
//int n,num[15],r,count;
int n,r,count;
void print( int x )
{
     if( x <= 9 )
         printf( "%d",x );
     else
         printf( "%c",x - 10 + 'A' );
 }
void change( int n,int r )
{
     if( n )
     {
         change( n / r, r );
         //使用自定义函数
         print( n % r );
     }
 }
int main( )
{
	do
	{
	printf("输入一个十进制数:");
     scanf( "%d",&n);
     printf("输入要转换的进制数:");
     scanf("%d",&r);
           if( n < 0 )
               printf( "-" ),n = -n;
           change( n,r );puts( "" );
      }   while(1);  
    return 0;
}