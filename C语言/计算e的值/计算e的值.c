#include <stdio.h>
//计算阶乘的函数
float factorial(int);
//计算e的值
//e = 1+ 1/1！ + 1/2！ + 1/3！......
int calculateE(int);

int main(){
    //存储输入的数值（用来做阶乘分之一的次数）
    int x;
    //循环标志位
    char start;
    printf("start?(y/n): ");
    scanf("%c", &start);
    while (start == 'y'){
        fflush(stdin);
        printf("enter a number: ");
        scanf("%d", &x);
        //调用calculateE 计算e的值
        calculateE(x);

        fflush(stdin);
        printf("\nstart?(y/n): ");
        scanf("%c", &start);
    }
    return 0;
}

//计算e的值
int calculateE(int b){
    //e 用来保存计算好的e值
    //result 用来保存每次计算好的值，累加给e
    float e = 1, result;
    //循环标志位，让其等于在主函数中输入的x，也就是形参b
    int i = b;
    for (i; i > 0; i--){
        //调用阶乘函数，计算阶乘分之一，保存给result
        result = 1.000000 / factorial(i);
        //让e先等于1，然后与每次计算好的阶乘分之一相加
        e = e + result;
    }
    //打印结果
    printf("\ne= %f", e);
    return 0;
}


//计算阶乘的函数
float factorial(int a){
    //让i= 原数字-1，这样，第一次计算就能算出 n*（n-1）
    int i = a - 1;
    //循环计算
    for (i; i > 0; i--)
        a = a * i;
    //打印每次计算出的阶乘值
    printf("\nx! = %d\n", a);
    //以float形式 返回计算结果
    return a;
}
