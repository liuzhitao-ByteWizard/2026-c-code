#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 声明在其他源文件中定义的 Add 函数
extern int Add(int, int);

int main()
{
    int a = 10;
    int b = 20;
    int r = Add(a, b);
    printf("%d\n", r);
    return 0;
}
