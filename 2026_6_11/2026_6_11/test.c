#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	return 0;
//}

//#include <stdio.h>
//#define N 10
//
//int main()
//{
//	int arr[N] = { 0 };
//
//	for (int i = 0;i < N; i++)
//		arr[i] = i + 1;
//
//	//循环输出数组arr中的内容
//	for (int i = 0; i < N; i++)
//		printf("%d ", arr[i]);
//
//	return 0;
//}

//#include <stdio.h>
//#define MAX 100
//#define reg register 
//#define do_forever for(;;)
//#define CASE break;case
//#define DEBUG_PRINT printf("file:%s\tline:%d\t date:%s\ttime:%s\n" ,\
//    __FILE__,\
//    __LINE__,\
//    __DATE__,\
//    __TIME__ )
//
//int main()
//{
//	DEBUG_PRINT;
//	//建议num放到寄存器中
//	reg int num = 0; //写法1,但不建议这么写
//	register int num = 0; //写法2
//	do_forever; //死循环
//
//	int m = MAX;
//	printf("%d\n", m); //100
//
//	int n = 2;
//	switch (n)
//	{
//	case 1:
//		printf("hehe\n");
//	CASE 2:
//		printf("hello\n");
//	CASE 3:
//		printf("youi\n");
//	default:
//		printf("no\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
////#define定义常量
//#define COFFEE_PRICE 20
//#define COUPON 5
//
////#define定义宏
//#define FINAL_PRICE(price) ((price) - COUPON)
//
//int main()
//{
//    printf("咖啡原价：%d 元\n", COFFEE_PRICE); //20
//    printf("优惠后价格：%d 元\n", FINAL_PRICE(COFFEE_PRICE)); //15
//
//    printf("字符串中的 COFFEE_PRICE 不会被宏替换\n");
//
//    return 0;
//}

#include <stdio.h>

int Max(int x, int y)
{
	return x > y ? x : y;
}

int main()
{
	int c = Max(4, 6);
	printf("%d\n", c);
	return 0;
}

