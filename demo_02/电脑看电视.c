#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>//定义(引用)strcmp
#include<stdlib.h>//定义(引用)system
#include<stdio.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("你的电脑将要在60s内关机，请输入\"我是猪\"取消关机\n");
	scanf("%s", &input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
		printf("取消成功\n");

	}
	else
		goto again;
	return 0;
}