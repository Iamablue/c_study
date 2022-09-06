#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 7;
//	//000000000000000000000000000000111	 源码
//	//001111111111111111111111111111011  反码
//	//001111111111111111111111111111100  补码
//	int b = a >>1 ;
//	//
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 6;
//	int b = 3;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a =%d b = %d", a, b);
//	return 0;
//}
//&   按位与   都为1则是1，有0则为0
//|   按位或   有1则为1，全为0则0
//^   按位异或 相同为0，相异为1	
//int main()
//{
//	int a = 10;
//	char b = 'c';
//	int* p = &a;
//	int arr[10] = { 0 };
//	printf("%d\n", (unsigned)sizeof(a));
//	printf("%d\n", (unsigned)sizeof(b));
//	printf("%d\n", (unsigned)sizeof(p));
//	printf("%d\n", (unsigned)sizeof(arr));
//	return 0;
//}
//int main()
//{
//	int a = 11;
//	//
//	//00000000000000000000000000001011    11的二进制
//	//00000000000000000000000000001111    将第三位改成1
//	//00000000000000000000000000000100    可以或这个数
//	//1<<2
//	a = a | (1 << 2);
//	//00000000000000000000000000001111
//	//00000000000000000000000000001011
//	//11111111111111111111111111111011
//	//00000000000000000000000000000100
//	a = a & (~(1 << 2));
//	printf("%d\n", a);
//	return 0;
//}
//void test(int arr[10])
//{
//	printf("%d\n", sizeof(arr));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}
//struct stu
//{
//	char name[10];
//	int age;
//	char sex[5];
//    int  score;
//};
//int main()
//{
//	struct stu s1 = { "韩旭",21,"男",100 };
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	struct stu* ps = &s1;
//	printf("%s\n", (*ps).sex);
//	printf("%d\n", ps->score);
//	return 0;
//}
//int main()
//{
//	char a = -1;
//	//10000000000000000000000000000001  源码
//	//11111111111111111111111111111110  反码
//	//11111111111111111111111111111111  补码
//	//11111111  操作后
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int c = 0;
//	int b = 0;
//	b = c + --c;
//	printf("%d\n", b);	
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//	char* pb = &a;
//	*pb = 0;
//	//printf("%p\n", pa);
//	//printf("%p\n", pb);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	pa = NULL;
//	
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char arr[] = { 'b','i','t'};
//	printf("%d\n", strlen(arr));
//	return 0;
//}
//                辗转相除法求最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int c = 0;
//	if (a < b)
//	{
//		c = b;
//		b = a;
//		a = c;
//	}
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	if (b == 1)
//	{
//		printf("没有最大公约数");
//	}
//	else
//		printf("%d", b);
//	return 0;
//}
//          求1000年到2000年之间的闰年
//int main()
//{
//	int i = 1000;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//         求100到200之间的素数
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}	
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		int temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		int temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//      二分查找法查找有序整形数组
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 10;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("没找到");
//	}
//	return 0;
//}
//        猜数字游戏
//#include<time.h>
//#include<stdlib.h>
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜测\n");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了。答案是:%d\n", guess);
//			break;
//		}
//	}
//
//}
//void menu()
//{
//	printf("********************\n");
//	printf("***0:exit  1:game***\n");
//	printf("********************\n");
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//	
//}
//        打印出1-100中9出现的个数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)     // 9 19 29 39 49 59 69 79 89 99
//			count++;
//		if (i / 10 == 9)     // 90 91 92 93 94 95 96 97 98 99
//			count++;
//		
//	}
//	printf("9的个数是%d\n", count);
//	return 0;
//}
// 
//      计算1-1/2+1/3-1/4+.......+1/99-1/100
//int main()
//{
//	int i = 1;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			sum += 1.0 / i;
//		else
//			sum += -1.0 / i;
//	}
//	printf("%lf", sum);
//	return 0;
//}
//         找出数组中的最大值
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("最大值是%d\n", max);
//	return 0;
//}
//        打印99乘法表
//int main()
//{
//	int ROW = 0;
//	scanf("%d", &ROW);
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= ROW; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d*%2d=%-3d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//    函数判断是否为素数，main函数打印
//#include<math.h>
//int Prime_Numbers(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i% j == 0)
//			return 0;
//
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (Prime_Numbers(i) == 1)
//			printf("%d ", i);
//
//	}
//	return 0;
//}
///      判断是否为润年
//int leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		return 1;
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (leap_year(year) == 1)
//			printf("%d ", year);
//	}
//	return 0;
//}
//     实现一个函数来交换两个整数的内容
//void exchange(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	exchange(&a,&b);
//	printf("a = %d\nb = %d\n", a, b);
//	return 0;
//}
//     求N的阶乘
//    1.循环法
//long long Fac(int N)
//{
//	int i = 0;
//	long long fac = 1;
//	for (i = 1; i <= N; i++)
//		fac *= i;
//	return fac;
//}
//    2.递归法
//long long Fac(int N)
//{
//	if (N <= 1)
//		return 1;
//	else
//		return Fac(N - 1) * N;
//}
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	printf("%lld", Fac(N));
//	return 0;
//}
//     strlen的实现
//     1.循环法
//#include<string.h>
//int My_strlen1(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
////   2.递归法
//int My_strlen2(char* arr)
//{
//	if (*arr == '\0')
//		return 0;
//	return My_strlen2(arr + 1) + 1;
//}
//int main()
//{
//	char arr[] = "hello world";
//	printf("%d\n", My_strlen2(arr));
//	printf("%d\n", strlen(arr));
//	return 0;
//}
//编写一个函数 reverse_string(char* string)（递归实现）
//
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//
//要求：不能使用C函数库中的字符串操作函数。
//#include<string.h>
//void reverse_string(char* string)
//{
//	char* left = string;
//	char* right = string + strlen(string) - 1;
//	while (left < right)
//	{
//		int temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(&arr[0]);
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	printf("\n%d", strlen(arr));
//	return 0;
//}
//      递归实现打印一个数的每一位
//void print(int N)
//{
//	if (N > 9)          // 如果N不是个位数
//		print(N / 10);  //调用自身打印模10后的结果
//	printf("%d", N % 10);//打印个位数
//
//}
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	print(N);
//	return 0;
//}
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr, sz);
//	Print(arr, sz);
//	reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}
///           交换两个数组（大小一样）
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	int temp = 0;
//	for (i = 0; i < sz; i++)
//	{
//		temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr1[i]);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	//*(p) = 0;
//	//*(p+1) = 0;
//	*(p + 2) = 0;
//	//*(p + 3) = 0;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//int i;
//int main()
//{
//	i--;
//	if (i < sizeof(i))
//		printf("<");
//	else
//		printf(">");
//	return 0;
//}
//int DigitSum(int N)
//{
//	if (N > 9)
//		return DigitSum(N / 10) + N % 10;  //前N-1位的和加第N位
//	return N;
//}
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	int ret = DigitSum(N);
//	printf("%d\n", ret);
//	return 0;
//}
//               利用递归模拟pow函数
//int pow(int n, int k)
//{
//	if (k > 1)
//		return n * pow(n, k - 1);
//	return n;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	int Pow =pow(n, k);
//	printf("%d\n", Pow);
//	return 0;
//
//          递归和非递归分别实现求第n个斐波那契数

//          1.递归

//int Fac(int n)
//{
//	if (n > 2)
//	{
//		return Fac(n - 1) + Fac(n - 2);
//	}
//	return 1;
//}

//         2.非递归

//int Fac(int n)
//{
//	int a = 1;
//	int b = 1;
//	int fac = 0;
//	if (n < 3)
//		return 1;
//	else
//	{
//		while (n > 2)
//		{
//			fac = a + b;
//			a = b;
//			b = fac;
//			n--;
//		}
//		return fac;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d", ret);
//	return 0;
//}

//             冒泡排序

//void BubbleSort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)            //9,8,7,6,5,4,3,2,1,0
//	{
//		int is_change = 0;
//		int j = 0;
//		for (j = 0; j < sz - 1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				is_change = 1;
//			}
//		}
//		if (!is_change)
//			break;
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}
// 
// *****************************
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		arr[i] = i+1;
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr, sz);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//*************

//void exchange(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,0 };
//	int sz = sizeof(arr2) / sizeof(arr2[0]);
//	exchange(arr1, arr2, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr1[i]);
//	return 0;
//}


//*********************
//求一个整数二进制中（补码）1的个数
//int Count_bit(unsigned int a)
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//			count++;
//		a /= 2;
//	}
//	return count;
//}
//int Count_bit(int a)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
// //最巧妙的算法
//int Count_bit(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	return count;
//}
//int  main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	int count = Count_bit(a);
//	printf("count = %d", count); 
//	return 0;
//}

//****************************

//int Count_diff_bit(int a, int b)
//{
//	int i = 0;
//	int count = 0;	
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) != ((b >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int Count_diff_bit(int a, int b)
//{
//	int count = 0;
//	int temp = a ^ b;           //a和b异或，得到的结果是 二进制位相反为1，相同为0
//	//统计temp中二进制位有多少个一
//	while (temp)
//	{
//		temp = temp & (temp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int count = Count_diff_bit(a, b);
//	printf("diff_count  = %d\n", count);
//	return 0;
//}

//********************

//void exchange(int* a, int* b)
//{
//	//a^(a^b)=b
//	*a = *a ^ *b;
//	*b = *a ^ *b;
//	*a = *a ^ *b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	exchange(&a, &b);
//	printf("a = %d b = %d", a, b);
//	return 0;
//}


//void Print_bit(int count)
//{
//	printf("偶数位：");
//	for (int i = 31; i > 0; i -= 2)
//		printf("%d ", (count >> i) & 1);
//	printf("\n");
//	printf("奇数位：");
//	for (int i = 30; i > -1; i -= 2)
//		printf("%d ", (count >> i) & 1);
//	printf("\n");
//
//}
//int main()
//{
//	int count = 0;
//	scanf("%d", &count);
//	Print_bit(count);
//	return 0;
//}
//typedef struct stu
//{
//	char name[10];
//	char sex[5];
//	int age;
//	int scname;
//}stu;
//void print_stu(stu* pc)
//{
//	printf("%s\n", pc->name);
//	printf("%s\n", pc->sex);
//	printf("%d\n", pc->age);
//	printf("%d\n", pc->scname);
//}
//int main()
//{
//	stu hanxu = { "hanxu","男",21,202106373 };
//	print_stu(&hanxu);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int input = 0;
//	int sum = 0;
//	scanf("%d", &input);
//	for (i = 1; i <= input; i++)
//	{
//		int j = 0;
//		int ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("sum = %d", sum);
//	return 0;
//}