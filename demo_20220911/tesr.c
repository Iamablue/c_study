#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ�����ʵ�֣���

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
//	printf("���Ժ�%dƿˮ", total);
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//��ӡ������
//	int i = 0;
//	//1.���д�ӡ
//	for (i = 0; i < line/2+1; i++)
//	{
//		int j = 0;
//		//��ӡÿһ��
//		//��ӡ�ո�
//		for (j = 0; j < line/2-i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*��
//		for (j = 0; j < i*2+1; j++)
//		{
//			printf("*");
//		}
//		//��ӡ����
//		printf("\n");
//	}
//	//��ӡ������
//	for (i = 0; i < line / 2 ; i++)
//	{
//		int j = 0;
//		//��ӡ�ո�
//		for (j = 0; j < i+1 ; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*��
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
//	//��ӡ�ϰ벿��
//	for (i = 0; i < line; i++)
//	{
//		//��ӡһ��
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//	//��ӡ�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		//��ӡһ��
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

//ʵ���ַ�������
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