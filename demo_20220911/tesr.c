#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）。

//int main()
//{
//	int money = 20;
//	int total = 0;
//	int empty = 0;
//	total = money;
//	empty = money;
//	while (empty > 1)
//	{
//		total += empty / 2;
//		empty = empty/2+empty%2;
//	}
//	printf("可以喝%d瓶水", total);
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//打印上三角
//	int i = 0;
//	//1.按行打印
//	for (i = 0; i < line/2+1; i++)
//	{
//		int j = 0;
//		//打印每一行
//		//打印空格
//		for (j = 0; j < line/2-i; j++)
//		{
//			printf(" ");
//		}
//		//打印*号
//		for (j = 0; j < i*2+1; j++)
//		{
//			printf("*");
//		}
//		//打印换行
//		printf("\n");
//	}
//	//打印下三角
//	for (i = 0; i < line / 2 ; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0; j < i+1 ; j++)
//		{
//			printf(" ");
//		}
//		//打印*号
//		for (j = 0; j < line-2*(i+1); j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//7
//	//打印上半部分
//	for (i = 0; i < line; i++)
//	{
//		//打印一行
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//	//打印下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//实现字符串逆序
#include<stdio.h>
#include<string.h>
void Reverse(char* p)
{
    char* left = p;
    char* right = p + strlen(p) - 1;
    while (left < right)
    {
        char temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}
int main()
{
    char arr[10000] = "";
    scanf("%s", &arr);
    Reverse(arr);
    printf("%s", arr);
    return 0;
}