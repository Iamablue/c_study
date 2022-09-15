#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//猴子吃桃子：每天吃一半多一个，第十天早上时只剩一个，求最开始猴子摘了多少桃子
//int main()
//{
//	int count = 1;
//	int i = 0;
//	for (i = 0; i < 9; i++)
//		count = (count+1)*2;
//	printf("count = %d", count);
//	return 0;
//}
//打印三角

//int main()
//{
//	//1.上三角
//	int i = 0;
//	int ROW =4;
//	for (i = 0; i < ROW; i++)
//	{
//		//打印每一行
//		//1.1打印空格
//		int j = 0;
//		for (j = 0; j < ROW - 1 - i; j++)
//			printf(" ");
//		//1.打印*号
//		for (j = 0; j < 2 * i + 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	
//	//2.下三角
//	for (i = 0; i < ROW - 1; i++)
//	{
//		//打印每一行
//		//2.1打印空格
//		int j = 0;
//		for (j = 0; j < i+1; j++)
//			printf(" ");
//		//2.2打印*号
//		for (j = 0; j < (ROW - 1 - i) * 2 - 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}

//判断输入字符是什么类型
//int main()
//{
//	char Char = 0;
//	printf("请输入字符\n");
//	scanf("%c", &Char);
//	if (Char >= 48 && Char <= 57)
//		printf("数字");
//	else if (Char >= 65 && Char <= 90)
//		printf("大写字母");
//	else if (Char >= 97 && Char <= 122)
//		printf("小写字母");
//	else
//		printf("其他字母");
//
//	return 0;
//}

//鸡兔同笼  头30  脚90 求鸡兔各多少只
//int main()
//{
//	int head = 30;
//	int foot = 90;
//	int rabbit = 0;
//	int chicken = 0;
//	rabbit = (foot - head * 2) / 2;
//	chicken = head - rabbit;
//	printf("rabbit = %d,chicken = %d", rabbit, chicken);
//
//	return 0;
//}

//计算1*2*3*4*   *99*100*101 即求101的阶乘
//int main()
//{
//	double  product = 1;
//	int i = 0;
//	for (i = 1; i <= 101; i++)
//		product *= i;
//	printf("product = %lf\n", product);
//	return 0;
//}
//

//打印所有的玫瑰花数
//玫瑰花数：一个四位数 例：1634 = 1^4+6^4+3^4+4^4
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 9999; i++)
//	{
//		//备份i的数
//		int temp = i;
//		//获取i的每位数的4次冥
//		int sum = 0;
//		while (temp)
//		{
//			sum += pow(temp % 10, 4);
//			temp /= 10;
//		}
//		//比较
//		if (sum == i)
//			printf("%d\n", i);
//
//	}
//	return 0;
//}

//计算有多少个由1、2、3、4组成的互不相同，且无重复数字的三位数，并打印出来


////函数1  判断有无除1234以外的数字组成
//int Getnumber(int i)
//{
//	while (i)
//	{
//		if (i % 10 != 1 && i % 10 != 2 && i % 10 != 3 && i % 10 != 4)
//			return 0;
//		i /= 10;
//	}
//	return 1;
//}
////函数2   判断有无重复数组成
//int Repeap_date(int i)
//{
//	int a = i % 10;
//	int b = i/ 10 % 10;
//	int c = i / 100 % 10;
//	if (a != b && a != c && b != c)
//		return 1;
//	return 0;
//}
//int main()
//{
//	//初始化一个记位数
//	int count = 0;
//	int i = 0;
//	//遍历所有的三位数
//	for (i = 100; i < 1000; i++)//1000可以改成500
//	{
//		if (Getnumber(i) == 1 && Repeap_date(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//计算1-1/2+1/3-1/4+……+1/99-1/100
//int main()
//{
//	int i = 1;
//	int flag = 1;
//	double sum = 0;
//	while (1)
//	{
//		if (1.0 / i < 1e-4)
//			break;
//		sum += flag*1.0 / i;
//		flag = -flag;
//		i++;
//	}
//	printf("sum = %lf", sum);
//	return 0;
//}
int main()
{
	int n = 0;
	while (n++ <= 2);
	printf("%d", n);
	return 0;
}