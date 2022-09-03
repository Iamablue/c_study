#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void InitBoard(char Board[ROW][COL], int row, int col);
void PrintBoard(char Board[ROW][COL], int row, int col);
void Playergame(char Board[ROW][COL], int row, int col);
void Computergame(char Board[ROW][COL], int row, int col);
char is_winer(char Board[ROW][COL], int row, int col);