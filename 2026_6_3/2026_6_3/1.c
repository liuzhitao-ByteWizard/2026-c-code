#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//â¼†è¿›åˆ¶çš„å½¢å¼å†™åˆ°â½‚ä»¶ä¸?
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct _iobuf 
//{
//	char* _ptr;
//	int   _cnt;
//	char* _base;
//	int   _flag;
//	int   _file;
//	int   _charbuf;
//	int   _bufsiz;
//	char* _tmpfname;
//};
//
//typedef struct _iobuf FILE;
//#include <stdio.h>
//
//int main()
//{
//	FILE* pf1 = fopen(".\\test.txt", "r"); //å†™æ³•1:ç›¸å¯¹è·¯å¾„ - æ–‡ä»¶åœ¨åŒä¸€ç›®å½•ä¸?
//	FILE* pf2 = fopen("test.txt", "r"); //å†™æ³•2ï¼šç›¸å¯¹è·¯å¾?- æ–‡ä»¶åœ¨åŒä¸€ç›®å½•ä¸?
//	FILE* pf3 = fopen("..\\test2.txt", "r"); //å†™æ³•2ï¼šç›¸å¯¹è·¯å¾?- æ–‡ä»¶ä¸åœ¨åŒä¸€ç›®å½•ä¸‹ï¼ˆå‡è®¾åœ¨ä¸Šçº§ç›®å½•ä¸‹ï¼?
//	FILE* pf4 = fopen("C:\\2026Cå°±ä¸šè¯¾è¯­è¨€ä»£ç \\2026-c-code\\2026_6_3\\2026_6_3\\test.txt", "r"); //å†™æ³•3ï¼šç»å¯¹è·¯å¾?
//	if (pf1 == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	else
//	{
//		printf("æ‰“å¼€æ–‡ä»¶æˆåŠŸ\n");
//	}
//	if (pf2 == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	else
//	{
//		printf("æ‰“å¼€æ–‡ä»¶æˆåŠŸ\n");
//	}if (pf3 == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	else
//	{
//		printf("æ‰“å¼€æ–‡ä»¶æˆåŠŸ\n");
//	}if (pf4 == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	else
//	{
//		printf("æ‰“å¼€æ–‡ä»¶æˆåŠŸ\n");
//	}
//	//è¯»æ–‡ä»?
//
//
//	//å…³é—­æ–‡ä»¶
//	fclose(pf1);
//	fclose(pf2);
//	fclose(pf3);
//	fclose(pf4);
//	pf1 = NULL;
//	pf2 = NULL;
//	pf3 = NULL;
//	pf4 = NULL;
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//
//int main()
//{
//
//    FILE* fp = fopen("test.txt", "r"); // ÒÔ "r" µÄÐÎÊ½´ò¿ªÎÄ¼þ£¬Èç¹ûÎÄ¼þ²»´æÔÚ£¬Ôò´ò¿ªÊ§°Ü
//
//    if (fp == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//
//    printf("´ò¿ªÎÄ¼þ³É¹¦£¬¿ÉÒÔ¶ÔÎÄ¼þ½øÐÐ²Ù×÷\n");
//
//    fclose(fp);   // ²»ÔÙÊ¹ÓÃÎÄ¼þÊ±£¬ÐèÒª¹Ø±ÕÎÄ¼þ
//    fp = NULL;    // ½«Ö¸ÕëÖÃÎª NULL£¬±ÜÃâ³ÉÎªÒ°Ö¸Õë
//
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	//ÒÔwÐÎÊ½´ò¿ªÎÄ¼þ£¬²ÅÄÜÕýÈ·µÄÐ´ÎÄ¼þ
//	FILE* pf = fopen(".\\test.txt", "w");
//
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//´úÂë1£ºÒ»´ÎÐÔÐ´Èë¼¸¸ö×Ö·û
//	//¶ÁÈ¡ÎÄ¼þ£¨Ð´ÈëÎÄ¼þ£©
//	//fputc('x', pf);
//	//fputc('y', pf);
//	//fputc('z', pf);
//	
//	//´úÂë2£ºÑ­»·Ð´Èë×Ö·û
//	for (char x = 'a'; x <= 'z'; x++)
//	{
//		fputc(x, stdout); //ÏòÆÁÄ»ÖÐÊä³ö
//	}
//
//
//	//¹Ø±ÕÎÄ¼þ
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

#include <stdio.h>

int main()
{
	//´ò¿ªÎÄ¼þ
	FILE* pf = fopen("test.txt", "r");

	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	////¶ÁÈ¡ÎÄ¼þ-·½Ê½1
	//int ch = fgetc(pf);
	//printf("%c\n", ch);
	//ch = fgetc(pf);
	//printf("%c\n", ch);
	//ch = fgetc(pf);
	//printf("%c\n", ch);
	//ch = fgetc(pf);
	//printf("%c\n", ch);

	//¶ÁÈ¡ÎÄ¼þ-·½Ê½2
	int ch = 0;
	while ((ch = fgetc(pf)) != EOF)
		printf("%c", ch);
	printf("\n");


	if (feof(pf))
		printf("ÎÄ¼þÕý³£¶ÁÈ¡½áÊø\n");
	if (ferror(pf))
		printf("ÎÄ¼þ¶ÁÈ¡´íÎó\n");

	//¹Ø±ÕÎÄ¼þ
	fclose(pf);
	pf = NULL;

	return 0;
}
