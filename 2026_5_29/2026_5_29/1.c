#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h> // 使用 malloc 和 free 需要包含该头文件
//
//int main()
//{
//	//int arr[10] = { 0 }; 在栈区开辟空间
//	int* p = (int*)malloc(20); //在堆区上开辟空间
//	if (p == NULL)
//	{
//		perror("use malloc"); //打印对应的错误信息
//		return 1;
//	}
//
//	//使用空间
//	for (int i = 0; i < 5; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	for (int i = 0; i < 5; i++)
//		printf("%d ", p[i]);
//	printf("\n");
//
//	//使用完空间后记得释放内存
//	free(p);
//	p = NULL; //释放完之后，记得置为空
//	
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h> // 使用 calloc 和 free 需要包含该头文件

//int main()
//{
//    // 在堆区申请 5 个 int 大小的连续空间，并初始化为 0
//    int* p = (int*)calloc(5, sizeof(int));
//
//    // 判断内存是否申请成功
//    if (p == NULL)
//    {
//        perror("use calloc"); // 打印内存申请失败的错误信息
//        return 1;
//    }
//
//    // 给动态申请的空间赋值
//    for (int i = 0; i < 5; i++)
//    {
//        *(p + i) = i + 1;
//    }
//
//    // 打印动态数组中的数据
//    for (int i = 0; i < 5; i++)
//        printf("%d ", p[i]);
//
//    // 使用完后释放动态内存
//    free(p);
//
//    // 将 p 置空，防止悬空指针
//    p = NULL;
//	return 0;
//}



