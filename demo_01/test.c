#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("Hello World\n%d",a);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//
//		}
//		printf("\n");
//
//	}
//	return 0;
//}
////�ҳ����ֵ
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("Max = %d\n", max);
//	return 0;
//}
//���ֲ��ҷ����������飩
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int k = 10;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0])-1;
//	
//	while (left <= right)
//	{
//		int ag = (left + right) / 2;
//		if (arr[ag] < k)
//			left = ag+1;
//		else if (arr[ag] > k)
//			right = ag-1;
//		else
//		{
//			printf("k�ĽǱ���%d\n", ag);
//			break;
//		}
//		
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
//	return 0;
//}
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("************************\n");
//	printf("**** game:1 exixt:0 ****\n");
//	printf("************************\n");
//}
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;//����1-100�������
//	while (1)
//	{
//		printf("�������> ");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("����\n");
//		}
//		else if (guess < ret)
//		{
//			printf("С��\n");
//		}
//		else
//		{
//			printf("��ϲ��¶���\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��> ");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//�ػ��� ��
//#include<string.h>//����(����)strcmp
//#include<stdlib.h>//����(����)system
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ĵ��Խ�Ҫ��60s�ڹػ���������\"������\"ȡ���ػ�\n");
//	scanf("%s", &input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//		printf("ȡ���ɹ�\n");
//
//	}
//	else
//		goto again;
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "*****";
//	strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//} 
//int main()
//{
//	char arr[] = "hello wolrd";
//	memset(arr, 'a', 5);
//	printf("%s", arr);
//	return 0;
//
//}
//int getMax(int x,int y)
//{
//	int z = 0;
//	z = (x >= y? x : y);
//	return z;	
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = getMax(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}
//                        �ú�����������������ֵ
//void Swap(int* pa, int* pb)
//{
//	int temp = 0;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}
//#include<math.h>
//int is_sushu(int a)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(a); j++)
//	{
//		if (a % j == 0)
//			return 0;
//    }
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 200; i++)
//	{
//		if (is_sushu(i) == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}
////                   �ж��Ƿ�Ϊ����
//int is_leap_year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;	
//}
////���ֲ��ҷ������������Ԫ�ص��±�
//int binary_search(int arr[], int k,int sz)
//{
//	int i = 0;
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
//			return mid;
//		}
//	}
//	if (left > right)
//	{
//		return -1;
//	}
//
//	
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���");
//	}
//	else
//	{
//			printf("�ҵ��ˣ��±���% d", ret);
//	}
//	return 0;
//}
//void add(int* num)
//{
//	*num = *num+1;
//}
//int main()
//{
//	int num = 0;
//	add(&num);	
//	printf("num = %d\n", num);
//	return 0;
//}
//printf����ֵΪ�ַ��ĸ���
//int main()
//{
//	printf("%d", printf("%d", printf("%d\n", 43)-1));
//	return 0;
//}
//#include"Add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
/////////////////�ݹ�
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n%10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
//int My_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + My_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "hello";
//	int ret = My_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}
//int Fca1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fca2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fca2 (n-1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fca2(n);
//	printf("ret = %d", ret);
//	return 0;
//}
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//	
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("Fib = %d\n", ret);
//	return 0;
//}


//��ŵ������


//int cnt;
//void hanoi(int n, char a, char b, char c) 
//{
//	if (n == 0)
//		return;
//	hanoi(n - 1, a, c, b);//��n-1��������A����C�ƶ���B
//	printf("step %d: move	d from %c->%c\n", cnt++, n, a, c);
//	hanoi(n - 1, b, a, c);//ʣ�µ�n-1���ӣ���B����A�ƶ���C
//}
//
//int main() 
//{
//	int n;
//	while (scanf("%d", &n)) 
//	{
//		cnt = 1;
//		hanoi(n, 'A', 'B', 'C');
//	}
//
//	return 0;
//}

//������̨������

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%c", arr1[0]);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++);
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{1,2,3,4}};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("arr[%d][%d] = %p\n",i,j,&arr[i][j]);
//		}
//		
//	}
//	return 0;
//}
/////ð������


//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int flag = 1;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j+1];
//				arr[j+1] = arr[j];
//				arr[j] = temp;
//				flag = 0;
//
//			}
//		}
//		if (falg == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,4,3,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	return 0;
//}

#include"game.h"
void menu()
{
	printf("********************\n");
	printf("***1.play 0.exit****\n");
	printf("********************\n");
}
void game()
{
	//��������
	char Board[ROW][COL] = {0};//��ʼ��ΪΪ0
	//��ʼ������
	InitBoard(Board, ROW, COL);
	//��ӡ����
	DisplayBoard(Board, ROW, COL);
	//����
	int ret = 0;
	while (1)
	{
		//�����
		PlayerMove(Board, ROW, COL);
		//չʾ����
		DisplayBoard(Board, ROW, COL);
		//�ж���Ӯ
		ret = Is_Win(Board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		//������
		ComputerMove(Board,ROW, COL);
		//չʾ����
		DisplayBoard(Board, ROW, COL);
		//�ж���Ӯ
		ret = Is_Win(Board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	if(ret=='Q')
		printf("ƽ��\n");
}
void test()
{
	int input = 0; 
	srand((unsigned)time(NULL));
	do
	{ 
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}