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

//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ������
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

/*���0��100000֮������С�ˮ�ɻ������������

��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ��������� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������*/
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
//		//�ж��Ƿ�Ϊˮ�ɻ���
//		//1.�ж�ˮ�ɻ�����λ��
//		while (temp)
//		{
//			temp /= 10;
//			count++;
//		}
//		//2.�����λ����n�η��ĺ�
//		temp = i;
//		while (temp)
//		{
//			sum += pow(temp % 10, count);
//			temp /= 10;
//		}
//		//3.�Ƚ��Ƿ����
//		if (i == sum)
//		{
//			printf("%d\n", i);
//		}
//
//
//	}
//	return 0;
//}
/*дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣

arr��һ������һά���顣*/
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