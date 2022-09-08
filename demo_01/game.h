#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define COL 3
#include<stdlib.h>    //srand的调用
#include<time.h>      //time的调用
//申明初始化棋盘函数
void InitBoard(char Board[ROW][COL], int row, int col);
//申明展示函数
void DisplayBoard(char Board[ROW][COL], int row, int col);

void PlayerMove(char Board[ROW][COL],int row,int col);

void ComputerMove(char Board[ROW][COL], int row, int col);

char Is_Win(char Board[ROW][COL], int row, int col);