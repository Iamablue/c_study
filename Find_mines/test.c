#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	//�������
	char Board[ROW][COL] = {0};
	//��ʼ������
	InitBoard(Board, ROW, COL);
	//��ӡ����
	PrintBoard(Board, ROW, COL);
	
	while (1)
	{
		//�������
		Playergame(Board, ROW, COL);
		PrintBoard(Board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		int ret = 0;
		ret = is_winer(Board, ROW, COL);
		if (ret == '*')
		{
			printf("��ϲ��,��Ӯ�ˣ�\n��Ϸ����\n");
			break;
		}
		else if (ret == '!')
		{
			printf("ƽ��\n");
			break;
		}
		//��������
		Computergame(Board, ROW, COL);
		PrintBoard(Board, ROW, COL);
		ret = is_winer(Board, ROW, COL);
		if (ret == '#')
		{
			printf("���ź�������Ӯ\n��Ϸ����\n");
			break;
		}
		//�жϵ����Ƿ�Ӯ

	}
	
	//�ж���Ӯ
	//ƽ��   ��
	//���Ӯ  *
	//����Ӯ  #
	//����    c
}
void menu()
{
	printf("**********************\n");
	printf("*** 0.exit  1.play ***\n");
	printf("**********************\n");
}
void test()
{
	
	int input = 1;
	srand((unsigned)time(NULL));
	while (input)
	{
		menu();
		printf("��ѡ��:>");
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
			printf("�����������������\n");
			break;
		}
	}

}
int main()
{
	test();
	return 0;
}