
#ifndef __GAME_H__
#define __GAME_H__
 
enum OPTION
{
	PLAY,
	EXIT
};
 
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include<time.h>
#define ROW 11            
#define COL 11
#define SUIJI 10
void menu();
void init_board(char mine[ROW][COL], char show[ROW][COL]);  
void display_board(char show[ROW][COL]);                    
void set_mine(char mine[ROW][COL]);                         
int get_mine(char mine[ROW][COL], int x, int y);            
void mine_sweep(char mine[ROW][COL], char show[ROW][COL]);
 
#endif	 