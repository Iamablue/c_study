#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
			Board[i][j] = ' ';
	}
}
void PrintBoard(char Board[ROW][COL], int row, int col)
{
	printf("\n");
	int i = 0;
	for (i = 0; i < col; i++)
	{
		int j = 0;
		//打印一排
		for (j = 0; j < col; j++)
		{
			if (j < col - 1)
				printf(" %c |", Board[i][j]);
			else
				printf(" %c ", Board[i][j]);
		}
		if (i < row - 1)
		{
			printf("\n");
			for (j = 0; j < col; j++)
			{
				printf("--- ");
			}
			printf("\n");
		}
		

	}
	printf("\n");
}
void Playergame(char Board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家下\n");
	do
	{
		printf("请输入:>");
		scanf("%d%d", &x, &y);
		if (x > 0 && x <= row && y>0 && y <= col)    //判断坐标是否非法
		{
			if (Board[x - 1][y - 1] == ' ')          //判断坐标是否被占用
			{
				Board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("坐标已被占用，请重新输入\n");
		}
		else
			printf("坐标非法，请重新输入\n");
	} while (1);
}
void Computergame(char Board[ROW][COL], int row, int col)
{
	printf("电脑下\n");  
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (Board[x][y] == ' ')
		{
			Board[x][y] = '#';
			break;
		}
	}
}
int is_draw(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (Board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
char is_winer(char Board[ROW][COL], int row, int col)
{
	//判断行
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (Board[i][0] == Board[i][1] && Board[i][0] == Board[i][2])
			return Board[i][0];
	}
	//判断列
	int j = 0;
	for (j = 0; j < col; j++)
	{
		if (Board[0][j] == Board[1][j] && Board[0][j]==Board[2][j])
			return Board[0][j];
	}
	//判断对角
	if (Board[0][0] == Board[1][1] && Board[0][0] == Board[2][2])
		return Board[0][0];
	if (Board[2][0] == Board[1][1] && Board[2][0] == Board[0][2])
		return Board[2][0];
	//判断是否平局
	if (is_draw(Board,ROW,COL))
		return '!';
	return 'c';
}