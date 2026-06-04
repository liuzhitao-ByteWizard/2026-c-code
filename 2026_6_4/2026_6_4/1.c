#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////假设test.txt文件中存放abcdef
//int main()
//{
//    FILE* fp = fopen("test.txt", "r");
//    if (fp == NULL)
//    {
//        perror("fopen\n");
//        return 1;
//    }
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        int c = fgetc(fp);
//        if (c == EOF)
//        {
//            if (feof(fp))
//                printf("遇到文件末尾了\n");
//            else if (ferror(fp))
//                printf("读取发生了错误\n");
//        }
//        else
//        {
//            fputc(c, stdout); //使用fputc在标准输出流上打印字符（或者在文件中写入字符）
//        }
//    }
//
//    //不再使用文件时，需要关闭文件
//    fclose(fp);
//    fp = NULL; //将指针置为NULL,避免成为野指针。
//    return 0;
//}

//#include <stdio.h>
////以写的形式打开文件后，再去读文件，就会发生错误
//int main()
//{
//    FILE* fp = fopen("test.txt", "w");  // 以只写方式打开文件，不能进行读取操作
//    if (fp == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    int c = fgetc(fp);// 错误：对只写文件流执行读取操作
//    if (c == EOF)
//    {
//        if (feof(fp))
//            printf("遇到文件末尾了\n");
//        else if (ferror(fp))
//        {
//            printf("读文件发生了错误\n"); //执行语句
//        }
//    }
//    else
//    {
//        fputc(c, stdout); //使用fputc在标准输出流上打印字符
//    }
//
//    //不再使用文件时，需要关闭文件
//    fclose(fp);
//    fp = NULL; //将指针置为NULL,避免成为野指针。
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fputs("hello ", stdout); //使用 fputs 向标准输出流 stdout 写入字符串
//	fputs("world", pf); //使用 fputs 向 pf 指向的文件流中写入字符串
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	char num[] = "---------------";
//
//	char* p = NULL;
//
//	p = fgets(num, 5, pf);
//	
//	if (p == NULL)
//	{
//		if (feof(pf))
//			printf("读取到文件末尾\n");
//		if (ferror(pf))
//			printf("读写文件错误\n");
//	}
//	else
//	{
//		printf("%s", p);
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    FILE* fp = fopen("test.txt", "r");
//    if (fp == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //读文件
//    char arr[20] = "----------";
//    
//    while (fgets(arr, 20, fp) != NULL)
//    {
//        printf("%s", arr);
//    }
//
//
//    //不再使用文件时，需要关闭文件
//    fclose(fp);
//    fp = NULL; //将指针置为NULL,避免成为野指针。
//    return 0;
//}

//#include <stdio.h>
//
//struct Stu
//{
//    char name[20];
//    int age;
//    float score;
//};
//
//int main()
//{
//    struct Stu s = { "zhangsan", 23, 100.0f };
//
//    FILE* fp = fopen("test.txt", "w");
//    if (fp == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //写文件
//    fprintf(stdout, "名字:%s 年龄:%d 成绩:%.2f\n", s.name, s.age, s.score); // 向标准输出流 stdout 输出格式化数据
//    fprintf(fp, "名字:%s 年龄:%d 成绩:%.2f\n", s.name, s.age, s.score); // 向 fp 指向的文件流中写入格式化数据
//
//
//    //不再使用文件时，需要关闭文件
//    fclose(fp);
//    fp = NULL; //将指针置为NULL,避免成为野指针。
//    return 0;
//}

//#include <stdio.h>
//
//struct Stu
//{
//    char name[20];
//    int age;
//    float score;
//};
//
//int main()
//{
//    struct Stu s = { 0 };
//
//    FILE* fp = fopen("test.txt", "r");
//    if (fp == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //读文件
//    //scanf("%s %d %f", s.name, &(s.age), &(s.score));
//    // 从 fp 指向的文件流中按指定格式读取数据，保存到结构体变量 s 中
//    // 注意：%s 对应字符数组名 s.name，数组名本身就是地址；%d 和 %f 对应变量地址 &s.age、&s.score
//    fscanf(fp, "名字:%s 年龄:%d 成绩:%f", s.name, &(s.age), &(s.score)); 
//    fprintf(stdout, "名字:%s 年龄:%d 成绩:%.2f", s.name, s.age, s.score);
//
//    //不再使用文件时，需要关闭文件
//    fclose(fp);
//    fp = NULL; //将指针置为NULL,避免成为野指针。
//    return 0;
//}

//#include <stdio.h>
//
//struct Stu
//{
//    char name[20];
//    int age;
//    float score;
//};
//
//int main()
//{
//    struct Stu s = {.name = "zhangsan", .score = 150.0f , .age = 20}; //不按顺序初始化
//
//    FILE* fp = fopen("test.txt", "wb"); //应该用二进制写入的方式打开文件
//    if (fp == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//
//    fwrite(&s, sizeof(struct Stu), 1, fp);
//
//    //不再使用文件时，需要关闭文件
//    fclose(fp);
//    fp = NULL; //将指针置为NULL,避免成为野指针。
//    return 0;
//}

//#include <stdio.h>
//
//struct Stu
//{
//    char name[20];
//    int age;
//    float score;
//};
//
//int main()
//{
//    struct Stu s = { 0 };
//
//    FILE* fp = fopen("test.txt", "rb"); //以二进制方式读取文件
//    if (fp == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    
//    fread(&s, sizeof(struct Stu), 1, fp);
//    printf("%s %d %.2f\n", s.name, s.age, s.score);
//
//    //不再使用文件时，需要关闭文件
//    fclose(fp);
//    fp = NULL; //将指针置为NULL,避免成为野指针。
//    return 0;
//}

//#include <stdio.h>
//
//struct Stu
//{
//    char name[20];
//    int age;
//    float score;
//};
//
//int main()
//{
//    struct Stu s = { .score = 149.0f,.name = "zhangsan",.age = 21 };
//
//    char str[30] = { 0 };
//
//    sprintf(str, "%s %d %.2f", s.name, s.age, s.score);
//    printf("%s\n", str);
//
//	return 0;
//}

//#include <stdio.h>
//
//struct Stu
//{
//    char name[20];
//    int age;
//    float score;
//};
//
//int main()
//{
//    int num = 12345;
//    char str_num[10] = { 0 };
//    sprintf(str_num, "%d", num);
//    printf("%s\n", str_num);
//
//	return 0;
//}

#include <stdio.h>

struct Stu
{
    char name[20];
    int age;
    float score;
};

int main()
{
    struct Stu s = { .score = 149.0f,.name = "zhangsan",.age = 21 };

    char str[30] = { 0 };

    sprintf(str, "%s %d %.2f", s.name, s.age, s.score);
    printf("%s\n", str);

    //从str中解析出一个结构体数据
    struct Stu t = { 0 };
    sscanf(str, "%s %d %f\n", t.name, &(t.age), &(t.score));
    fprintf(stdout, "%s %d %.2f\n", t.name, t.age, t.score);

	return 0;
}