#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>//����(����)strcmp
#include<stdlib.h>//����(����)system
#include<stdio.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��ĵ��Խ�Ҫ��60s�ڹػ���������\"������\"ȡ���ػ�\n");
	scanf("%s", &input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
		printf("ȡ���ɹ�\n");

	}
	else
		goto again;
	return 0;
}