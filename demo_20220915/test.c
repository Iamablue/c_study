#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���ӳ����ӣ�ÿ���һ���һ������ʮ������ʱֻʣһ�������ʼ����ժ�˶�������
//int main()
//{
//	int count = 1;
//	int i = 0;
//	for (i = 0; i < 9; i++)
//		count = (count+1)*2;
//	printf("count = %d", count);
//	return 0;
//}
//��ӡ����

//int main()
//{
//	//1.������
//	int i = 0;
//	int ROW =4;
//	for (i = 0; i < ROW; i++)
//	{
//		//��ӡÿһ��
//		//1.1��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < ROW - 1 - i; j++)
//			printf(" ");
//		//1.��ӡ*��
//		for (j = 0; j < 2 * i + 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	
//	//2.������
//	for (i = 0; i < ROW - 1; i++)
//	{
//		//��ӡÿһ��
//		//2.1��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < i+1; j++)
//			printf(" ");
//		//2.2��ӡ*��
//		for (j = 0; j < (ROW - 1 - i) * 2 - 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}

//�ж������ַ���ʲô����
//int main()
//{
//	char Char = 0;
//	printf("�������ַ�\n");
//	scanf("%c", &Char);
//	if (Char >= 48 && Char <= 57)
//		printf("����");
//	else if (Char >= 65 && Char <= 90)
//		printf("��д��ĸ");
//	else if (Char >= 97 && Char <= 122)
//		printf("Сд��ĸ");
//	else
//		printf("������ĸ");
//
//	return 0;
//}

//����ͬ��  ͷ30  ��90 ���ø�����ֻ
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

//����1*2*3*4*   *99*100*101 ����101�Ľ׳�
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

//��ӡ���е�õ�廨��
//õ�廨����һ����λ�� ����1634 = 1^4+6^4+3^4+4^4
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 9999; i++)
//	{
//		//����i����
//		int temp = i;
//		//��ȡi��ÿλ����4��ڤ
//		int sum = 0;
//		while (temp)
//		{
//			sum += pow(temp % 10, 4);
//			temp /= 10;
//		}
//		//�Ƚ�
//		if (sum == i)
//			printf("%d\n", i);
//
//	}
//	return 0;
//}

//�����ж��ٸ���1��2��3��4��ɵĻ�����ͬ�������ظ����ֵ���λ��������ӡ����


////����1  �ж����޳�1234������������
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
////����2   �ж������ظ������
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
//	//��ʼ��һ����λ��
//	int count = 0;
//	int i = 0;
//	//�������е���λ��
//	for (i = 100; i < 1000; i++)//1000���Ըĳ�500
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


//����1-1/2+1/3-1/4+����+1/99-1/100
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