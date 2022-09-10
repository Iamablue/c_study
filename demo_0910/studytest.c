#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int N = 0;
//	int temp = 0;
//	scanf("%d", &N);
//	for (i = 0; i < 5; i++)
//	{
//		temp = temp * 10 + 2;
//		sum += temp;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

/*求出0～100000之间的所有“水仙花数”并输出。

“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。*/
//#include<math.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	for (i = 1; i <= 100000; i++)
//	{
//		int count = 0;
//		int temp = i;
//		int sum = 0;
//		//判断是否为水仙花数
//		//1.判断水仙花数的位数
//		while (temp)
//		{
//			temp /= 10;
//			count++;
//		}
//		//2.计算各位数的n次方的和
//		temp = i;
//		while (temp)
//		{
//			sum += pow(temp % 10, count);
//			temp /= 10;
//		}
//		//3.比较是否相等
//		if (i == sum)
//		{
//			printf("%d\n", i);
//		}
//
//
//	}
//	return 0;
//}
/*写一个函数打印arr数组的内容，不使用数组下标，使用指针。

arr是一个整形一维数组。*/
void print(int* arr,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", *(arr + i));
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr,sz);
	return 0;
}