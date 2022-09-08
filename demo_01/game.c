#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//��ʼ�������Ķ���
void InitBoard(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			Board[i][j] = ' ';
		}
	}
}
//չʾ�����Ķ��� 
void DisplayBoard(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", Board[i][j]);
			if (j < col-1)
				printf("|");

		}
		printf("\n");
		/*printf(" %c | %c | %c \n", Board[i][0], Board[i][1], Board[i][2]);*/
		for (j = col; j > 0; j--)
		{
			if (i < row - 1)
			{
				if (j > 1)
				{
					printf("---|");
				}
				else
					printf("---\n");
			}
		}
	}
}

void PlayerMove(char Board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����\n");
	while (1)
	{

		printf("����������:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (Board[x - 1][y - 1] == ' ')
			{
				Board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����ѱ�ռ�ã�����������\n");
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
}

void ComputerMove(char Board[ROW][COL], int row, int col)
{
	printf("������\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (Board[x][y] == ' ')
		{
			Board[x][y] = '#';
			break;
		}
	}
}

//����������Ϸ״̬
//���Ӯ   ���� '*'
//����Ӯ   ���� '#'
//����     ���� 'C'
//ƽ��     ���� 'Q'
int IsContinue(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (Board[i][j] == ' ')
			{
				return 1;
			}
		}
	}
	return 0;
}
char Is_Win(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	//������
	for (i = 0; i < row; i++)
	{
		if (Board[i][0] == Board[i][1] && Board[i][0] == Board[i][2] && Board[i][0] != ' ')
		{
			return Board[i][0];
		}
	}
	//������
	for (i = 0; i < col; i++)
	{
		if (Board[0][i] == Board[1][i] && Board[0][i] == Board[2][i] && Board[0][i] != ' ')
		{
			return Board[0][i];
		}
	}
	//�ж϶Խ���
	if (Board[0][0] == Board[1][1] && Board[0][0] == Board[2][2] && Board[0][0] != ' ')
		return Board[0][0];
	if (Board[0][2] == Board[1][1] && Board[0][2] == Board[2][0] && Board[0][2] != ' ')
		return Board[0][2];
	//�ж��Ƿ����
	if (1 == IsContinue(Board, ROW, COL))
		return 'C';
	return 'Q';
}