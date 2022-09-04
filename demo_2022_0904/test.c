#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//实现strycopy
//char* My_strcopy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	//把src指向的字符串拷贝到dest指向的空间，包括'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "*************";
//	printf("%s\n", My_strcopy(arr2, arr1));
//	return;
//}
//练习实现strlen
int My_strlen(const char* str)
{
	assert(str != NULL);
	int count = 0;
	while (*str++)
		count++;
	return count;
}
int main()
{

	char arr[] = "abcdef";
	printf("%d\n", My_strlen(arr));
	return 0;
}
