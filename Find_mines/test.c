#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	//设计棋盘
	char Board[ROW][COL] = {0};
	//初始化棋盘
	InitBoard(Board, ROW, COL);
	//打印棋盘
	PrintBoard(Board, ROW, COL);
	
	while (1)
	{
		//玩家下棋
		Playergame(Board, ROW, COL);
		PrintBoard(Board, ROW, COL);
		//判断玩家是否赢
		int ret = 0;
		ret = is_winer(Board, ROW, COL);
		if (ret == '*')
		{
			printf("恭喜你,你赢了！\n游戏结束\n");
			break;
		}
		else if (ret == '!')
		{
			printf("平局\n");
			break;
		}
		//电脑下棋
		Computergame(Board, ROW, COL);
		PrintBoard(Board, ROW, COL);
		ret = is_winer(Board, ROW, COL);
		if (ret == '#')
		{
			printf("很遗憾，电脑赢\n游戏结束\n");
			break;
		}
		//判断电脑是否赢

	}
	
	//判断输赢
	//平局   ！
	//玩家赢  *
	//电脑赢  #
	//继续    c
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
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误！请重新输入\n");
			break;
		}
	}

}
int main()
{
	test();
	return 0;
}