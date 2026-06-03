#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//char* GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//	return *p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(&str, 100);
//
//	if (str == NULL)
//	{
//		perror("use malloc");
//		return;
//	}
//
//	//使用内存
//	strcpy(str, "hello");
//	printf(str);
//
//	//释放内存
//	free(str);
//	str = NULL;
//
//}
//int main()
//{
//	Test();
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}

//struct Node
//{
//	int a;
//	int arr[]; //柔性数组成员
//};

//#include <stdio.h>
//
//struct Test
//{
//	int n; //至少包含一个成员
//	int arr[]; //柔性数组
//};
//
//int main()
//{
//	printf("%zu\n", sizeof(struct Test)); //4
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//struct S
//{
//	int n;
//	int arr[];// 柔性数组成员，初始申请额外空间存放 5 个 int，后续可通过 realloc 扩容
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int)); //24
//
//	if (ps == NULL)
//	{
//		perror("use malloc");
//		return 1;
//	}
//
//	//使用内存
//	ps->n = 100;
//	for (int i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i + 1;
//	}
//
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 10 * sizeof(int)); // 重新调整整块动态内存，使柔性数组 arr 可以存放 10 个 int
//
//	if (ptr == NULL)
//	{
//		perror("realloc");
//		free(ps); //ps内存要及时得到释放
//		ps = NULL;
//		return 1;
//	}
//	else
//	{
//		ps = ptr;
//		ptr = NULL;
//		for (int i = 5; i < 10; i++)
//		{
//			ps->arr[i] = i + 1;
//		}
//	}
//
//	for (int i = 0; i < 10; i++)
//		printf("%d ", ps->arr[i]);
//
//	//释放内存
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct S
//{
//	int n;
//	int* arr;
//};
//
//int main()
//{
//	struct S* p = (struct S*)malloc(sizeof(struct S));
//	if (p == NULL)
//	{
//		perror("use malloc");
//		return 1;
//	}
//	
//	int* p1 = (int*)malloc(5 * sizeof(int));
//	if (p1 == NULL)
//	{
//		perror("use malloc");
//		return 1;
//	}
//
//	//使用内存
//	for (int i = 0; i < 5; i++)
//	{
//		*(p1 + i) = i + 1;
//	}
//
//	p->arr = p1;
//	p1 = NULL;
//
//	int* ptr = (int*)realloc( p->arr , 10 * sizeof(int));
//	if (ptr == NULL)
//	{
//		perror("use realloc");
//		free(p);
//		return 1;
//	}
//	else
//	{
//		p->arr = ptr;
//		ptr = NULL;
//		for (int i = 5; i < 10; i++)
//		{
//			p->arr[i] = i + 1;
//		}
//		for (int i = 0; i < 10; i++)
//			printf("%d ", p->arr[i]);
//	}
//	//释放内存
//	free(p->arr);
//	p->arr = NULL;
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>

struct S
{
	int n;
	int* arr;
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	if (ps == NULL)
	{
		perror("use malloc");
		return 1;
	}
	//
	ps->n = 100;
	int* ptr = (int*)malloc(5 * sizeof(int));
	if (ptr != NULL)
	{
		ps->arr = ptr;
	}
	else
	{
		perror("malloc");
		return 1;
	}
	//
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i + 1;
	}
	//扩容
	struct S* ptr2 = (struct S*)realloc(ps->arr, 10 * sizeof(int));
	if (ptr2 == NULL)
	{
		perror("realloc");
		return 1;
	}
	else
	{
		ps->arr = ptr2;
		ptr2 = NULL;
		for (i = 5; i < 10; i++)
		{
			ps->arr[i] = i + 1;
		}
	}

	//释放
	free(ps->arr);
	ps->arr = NULL;

	free(ps);
	ps = NULL;

	return 0;
}



