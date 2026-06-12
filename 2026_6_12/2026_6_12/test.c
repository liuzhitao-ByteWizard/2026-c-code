#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#define PRINT(n) printf("the values of " #n " is %d\n",n)
// 
//int main()
//{
//	int a = 10;
//	PRINT(a);
//	return 0;
//}

//#include <stdio.h>
//
//#define PRINT(val,format) printf("the value of " #val " is " format "\n",val)
//
//int main()
//{
//    int a = 10;
//    PRINT(a, "%d");
//
//    float b = 2.0f;
//    PRINT(b, "%.2f");
//
//    return 0;
//}

//int int_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//float float_max(float x, float y)
//{
//	return x > y ? x : y;
//}

//#include <stdio.h>
//
////定义宏
//#define GENERIC_MAX(type)  \
//type type##_max(type x,type y)  \
//{ \
//	return x > y ? x : y; \
//}
//
////函数的定义
//GENERIC_MAX(int);
//GENERIC_MAX(float);
//
//
//int main()
//{
//	int m1 = int_max(2, 3);
//	float m2 = float_max(2.5f, 3.0f);
//	printf("%d %.2f", m1, m2);
//
//	return 0;
//}

//#include <stdio.h>
//
//#define SIZE 10
//
//int main()
//{
//#undef SIZE;
//#define SIZE 20;
//	int m = SIZE;
//	printf("%d\n", m);
//
//	return 0;
//}

//#include <stdio.h>
//#define DEBUG
//
//int main()
//{
//	int arr[10] = {0};
//#ifdef DEBUG
//	for (int i = 0; i < 10; i++)
//		arr[i] = i + 1;
//#endif
//	for (int i = 0;i < 10; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

#include <stdio.h>

#include "test.h"
#include "test.h"
#include "test.h"
#include "test.h"
#include "test.h"

int main()
{

	return 0;
}