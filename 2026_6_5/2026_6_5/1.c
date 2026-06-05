#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//    //假设test.txt文件中存储了hello world
//    FILE* fp = fopen("test.txt", "r");
//    if (fp == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    
//    int c = fgetc(fp);
//    fputc(c, stdout); //h
//    // fgetc 读取一个字符后，文件位置指示器（光标）自动向后移动 1 个字符位置
//
//    // 定位文件位置指示器
//    //fseek(fp, 2, SEEK_CUR);  // 以当前位置为起点，向后移动 2 个字符
//    //fseek(fp, 4, SEEK_SET);  // 以文件开头为起点，向后移动 4 个字符
//    fseek(fp, -4, SEEK_END);   // 以文件末尾为起点，向前移动 4 个字符
//
//    c = fgetc(fp);
//    fputc(c, stdout);// 情况1读到 l，情况2读到 o，情况3读到 o
//
//    //不再使用文件时，需要关闭文件
//    fclose(fp);
//    fp = NULL; //将指针置为NULL,避免成为野指针。
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    //假设test.txt文件中存储了hello world
//    FILE* fp = fopen("test.txt", "r");
//    if (fp == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//
//    int c = fgetc(fp);
//    fputc(c, stdout); //h
//    int pos = ftell(fp);//1
//    // fgetc 读取一个字符后，文件位置指示器（光标）自动向后移动 1 个字符位置
//
//    // 定位文件位置指示器
//    fseek(fp, 2, SEEK_CUR);  // 以当前位置为起点，向后移动 2 个字符
//    c = fgetc(fp);
//    fputc(c, stdout); //l
//
//    fseek(fp, pos, SEEK_SET);  // 以文件开头为起点，向后移动 4 个字符
//    c = fgetc(fp);
//    fputc(c, stdout); //e
//
//    //不再使用文件时，需要关闭文件
//    fclose(fp);
//    fp = NULL; //将指针置为NULL,避免成为野指针。
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    //假设test.txt文件中存储了hello world
//    FILE* fp = fopen("test.txt", "r");
//    if (fp == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//
//    int c = fgetc(fp);
//    fputc(c, stdout); //h
//    // fgetc 读取一个字符后，文件位置指示器（光标）自动向后移动 1 个字符位置
//
//    // 定位文件位置指示器
//    fseek(fp, 2, SEEK_CUR);  // 以当前位置为起点，向后移动 2 个字符
//    c = fgetc(fp);
//    fputc(c, stdout); //l
//
//    rewind(fp); //让文件指示器回到起始位置
//
//    c = fgetc(fp);
//    fputc(c, stdout); //h
//
//    //不再使用文件时，需要关闭文件
//    fclose(fp);
//    fp = NULL; //将指针置为NULL,避免成为野指针。
//    return 0;
//}

//#include <stdio.h>
//#include <windows.h>
//
//// VS2022 WIN11环境测试
//int main()
//{
//    FILE* pf = fopen("test.txt", "w");
//
//    fputs("abcdef", pf); // 先将数据存入输出缓冲区
//
//    printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
//    Sleep(10000);
//
//    printf("刷新缓冲区\n");
//    fflush(pf); // 刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
//
//    // 注：fflush 在高版本的VS上不能使用了
//
//    printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
//    Sleep(10000);
//
//    fclose(pf);
//    // 注：fclose在关闭文件的时候，也会刷新缓冲区
//    pf = NULL;
//
//    return 0;
//}

#include <stdio.h>

int main()
{
    FILE* fp = fopen("test.txt", "w+");
    if (fp == NULL)
    {
        perror("fopen for w+");
        return 1;
    }

    //写abcdefghi到文件中
    fputs("abcdefghi", fp);
    //刷新缓冲区，保证数据写入文件
    fflush(fp);
    //要读取数据b字符，先定位文件指针
    fseek(fp, 1, SEEK_SET);

    int ch = fgetc(fp);//读取字符
    printf("%c\n", ch); //b
    //abcdefghi
    
    //在b的位置开始写入hello
    fseek(fp, -1, SEEK_CUR);
    //解释：因为前面读取一个字符后,文件指示器现在指向了c,需要从当前位置退回一个字符

    fputs("hello", fp);
    //ahelloghi
    // 
    //关闭文件
    fclose(fp);
    fp = NULL;

    return 0;
}
