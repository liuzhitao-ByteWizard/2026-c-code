#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//    int* p = (int*)calloc(5, sizeof(int));
//
//    if (p == NULL)
//    {
//        perror("calloc");
//        return 1;
//    }
//
//    // 使用空间
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        p[i] = i + 1;
//    }
//
//    // 希望空间能放 10 个整型
//    int* ptr = (int*)realloc(p, 10 * sizeof(int));
//
//    if (ptr == NULL)
//    {
//        perror("realloc");
//        free(p); //如果 realloc 失败，原来的 p 还没有释放，会造成内存泄漏
//        p = NULL;
//        return 1;
//    }
//    else
//    {
//        p = ptr;       // 继续使用 p 来维护空间
//        ptr = NULL;
//    }
//
//    // 继续使用后 5 个空间
//    for (i = 5; i < 10; i++)
//    {
//        p[i] = i + 1;
//    }
//
//    // 打印数据
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", p[i]);
//    }
//
//    // 释放空间
//    free(p);
//    p = NULL;
//
//    return 0;
//}

//void test()
//{
//	int* p = (int*)malloc(INT_MAX / 4);
//	*p = 20; //如果p的值是NULL,就会有问题
//	free(p);
//}

//void test()
//{
//	int i = 0;
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (NULL == p)
//	{
//		exit(EXIT_FAILURE);
//	}
//	for (i = 0; i <= 10; i++) //循环11次
//	{
//		*(p + i) = i; //当i == 10 时，越界访问了
//	}
//	free(p);
//}

//void test()
//{
//	int a = 10;
//	int* p = &a;
//	free(p); //err
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//void test()
//{
//	int* p = (int*)malloc(100);
//	p++; //p不在指向动态内存的起始位置
//	free(p);
//}

//void test()
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	free(p);//重复释放
//}

//void test()
//{
//	int* p = (int*)malloc(100);
//	if (NULL != p)
//	{
//		*p = 20;
//	}
//}
//int main()
//{
//	test();
//	while (1);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//char*  GetMemory(char* p)
//{
//	p = (char*)malloc(100); 
//	return p; //返回申请到的地址
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str); //用完内存后记得释放
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//char* GetMemory(void)
//{
//	char* p = (char*)malloc(20); //使用动态内存分配来解决问题
//	if (p == NULL)
//	{
//		perror("use malloc");
//		return 1;
//	}
//	strcpy(p, "hello world");
//
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//
//	if (str == NULL)
//	{
//		perror("use malloc");
//		return 1;
//	}
//	printf(str);
//	free(str);
//	str = NULL;
//
//}
//int main()
//{
//	Test();
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void GetMemory(char** p, int num)
{
	*p = (char*)malloc(num);
}
void Test(void)
{
	char* str = NULL;
	GetMemory(&str, 100);
	strcpy(str, "hello");
	printf(str);
}
int main()
{
	Test();
	return 0;
}
