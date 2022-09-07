#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define simple_count 10;
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void InitBoard(char Board[ROWS][COLS], int rows, int cols,char set);
void DisplayBoard(char Board[ROWS][COLS], int row, int col);
void SetMine(char Board[ROWS][COLS], int row, int col);
void FindMine(char Board[ROWS][COLS], char show[ROWS][COLS], int row, int col);