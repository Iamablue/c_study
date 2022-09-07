#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char Board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			Board[i][j] = set;
		}
	}
}
void DisplayBoard(char Board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("  " );
	for (i = 1; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", Board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char Board[ROWS][COLS], int row, int col)
{
	int count = simple_count;
	
	while (count)
	{
		int x = rand() % row + 1;  //1-9
		int y = rand() % col + 1;
		if (Board[x][y] == '0')
		{
			Board[x][y] = '1';
			count--;
		}
	}
}
int GetMinecount(char mine[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			count += mine[x+i][y+j];
		}
	}
	return count - 8 * '0' - mine[x][y];
	
}
void FindMine(char Board[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	int easycount = simple_count
	while (win<row*col-easycount)
	{
		printf("请输入坐标:>");
		scanf("%d%d",&x,&y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//坐标合法
			//1.是雷
			if (Board[x][y] == '1')
			{
				printf("你被炸死了\n");
				DisplayBoard(Board, ROW, COL);
				break;
			}
			//2.不是雷
			else
			{
				int count = GetMinecount(Board, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标非法，请重新输入");
		}
	}
	if (win == row * col - easycount)
	{
		printf("恭喜你赢了\n");
		DisplayBoard(show, row, col);
	}
}