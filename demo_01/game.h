#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define COL 3
#include<stdlib.h>    //srand�ĵ���
#include<time.h>      //time�ĵ���
//������ʼ�����̺���
void InitBoard(char Board[ROW][COL], int row, int col);
//����չʾ����
void DisplayBoard(char Board[ROW][COL], int row, int col);

void PlayerMove(char Board[ROW][COL],int row,int col);

void ComputerMove(char Board[ROW][COL], int row, int col);

char Is_Win(char Board[ROW][COL], int row, int col);