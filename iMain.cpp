#include <stdio.h>
#include<bits/stdc++.h>
#include <windows.h>
#include <mmsystem.h>
#include <stdlib.h>
#include <unistd.h>
#include <thread>
#include <stdlib.h>
#include <time.h>
#include<string>
#include "iGraphics.h"

#pragma comment(lib, "winmm.lib");

#define size 3
#define player 'o'
#define opponent 'x'


int o_s_point = 0;
int x_s_point = 0;

int X_win_1 = 0;
int O_win_1 = 0;
int X_win_2 = 0;
int O_win_2 = 0;
int X_win_3 = 0;
int O_win_3 = 0;
int X_win_4 = 0;
int O_win_4 = 0;
int done = 0;

int data1 = 1;
int data2 = 1;
int data3 = 1;
int data4 = 1;
int data5 = 1;
int data6 = 1;
int data7 = 1;
int data8 = 1;

int dat1 = 1;
int dat2 = 1;
int dat3 = 1;
int dat4 = 1;

int pass1 = 1;
int pass2 = 1;
int pass3 = 1;
int pass4 = 1;


int current;
int block1_1 = 0;
int block1_2 = 0;
int block1_3 = 0;
int block1_4 = 0;
int block1_5 = 0;
int block1_6 = 0;
int block1_7 = 0;
int block1_8 = 0;
int block1_9 = 0;

int block2_1 = 0;
int block2_2 = 0;
int block2_3 = 0;
int block2_4 = 0;
int block2_5 = 0;
int block2_6 = 0;
int block2_7 = 0;
int block2_8 = 0;
int block2_9 = 0;

int block3_1 = 0;
int block3_2 = 0;
int block3_3 = 0;
int block3_4 = 0;
int block3_5 = 0;
int block3_6 = 0;
int block3_7 = 0;
int block3_8 = 0;
int block3_9 = 0;

int block4_1 = 0;
int block4_2 = 0;
int block4_3 = 0;
int block4_4 = 0;
int block4_5 = 0;
int block4_6 = 0;
int block4_7 = 0;
int block4_8 = 0;
int block4_9 = 0;

int bst_row1, bst_col1;


static int player_at1 = 0;
static int player_at2 = 0;
static int player_at3 = 0;
static int player_at4 = 0;

char board_1[size][size] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
char board_2[size][size] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
char board_3[size][size] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
char board_4[size][size] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
char symbol_1 = 'x';
char symbol_2 = 'o';



void playmusic(){
	if(current == 0){
		PlaySound("home.wav", NULL, SND_LOOP | SND_ASYNC);
	}
}
void nevigate(int button, int state, int mx, int my){
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
		PlaySound("move.wav", NULL, SND_ASYNC);
		if(mx >= 601 && mx <= 991 && my >= 259 && my <= 310){
			exit(0);
		}
		if(mx >= 601 && mx <= 991 && my >= 345 && my <= 399){
			current = 3;
		}
		if(mx >= 601 && mx <= 991 && my >= 430 && my <= 485){
			current = 1;
		}
	}
}
// int done = 0;

//--------------------------------------------------------------AI part-----------------------------------------------------------------------------------------



typedef struct {
    int row, col;
} Move;

bool isMovesLeft(char board[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == ' ')
                return true;
    return false;
}

int evaluate(char b[3][3]) {

    for (int row = 0; row < 3; row++) {
        if (b[row][0] == b[row][1] && b[row][1] == b[row][2]) {
            if (b[row][0] == player)
                return +10;
            else if (b[row][0] == opponent)
                return -10;
        }
    }

    for (int col = 0; col < 3; col++) {
        if (b[0][col] == b[1][col] && b[1][col] == b[2][col]) {
            if (b[0][col] == player)
                return +10;
            else if (b[0][col] == opponent)
                return -10;
        }
    }

    if (b[0][0] == b[1][1] && b[1][1] == b[2][2]) {
        if (b[0][0] == player)
            return +10;
        else if (b[0][0] == opponent)
            return -10;
    }

    if (b[0][2] == b[1][1] && b[1][1] == b[2][0]) {
        if (b[0][2] == player)
            return +10;
        else if (b[0][2] == opponent)
            return -10;
    }

    return 0; 
}

int minimax(char board[3][3], int depth, bool isMax) {
    int score = evaluate(board);

    if (score == 10)
        return score;

    if (score == -10)
        return score;

    if (!isMovesLeft(board))
        return 0;

    if (isMax) {
        int best = -1000;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
              
                if (board[i][j] == ' ') {
                   
                    board[i][j] = player;

                    best = (best < minimax(board, depth + 1, false)) ? minimax(board, depth + 1, false) : best;

                    board[i][j] = ' ';
                }
            }
        }
        return best;
    } 
 
    else {
        int best = 1000;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
               
                if (board[i][j] == ' ') {
                    
                    board[i][j] = opponent;

                    best = (best > minimax(board, depth + 1, true)) ? minimax(board, depth + 1, true) : best;

                    board[i][j] = ' ';
                }
            }
        }
		return best; 
	} 
} 


Move findBestMove(char board[3][3]) 
{ 
	int bestVal = -1000; 
	Move bestMove; 
	bestMove.row = -1; 
	bestMove.col = -1; 
	for (int i = 0; i<3; i++) 
	{ 
		for (int j = 0; j<3; j++) 
		{ 
		
			if (board[i][j]==' ') 
			{ 
				
				board[i][j] = player; 

			
				int moveVal = minimax(board, 0, false); 

				board[i][j] = ' '; 
				if (moveVal > bestVal) 
				{ 
					bestMove.row = i; 
					bestMove.col = j; 
					bestVal = moveVal; 
				} 
			} 
		} 
	}  

	return bestMove; 
} 


// ---------------------------------------win cndition part-----------------------------------------------------------
int checkWin(char board[3][3], char symbol)
{
	for (int i = 0; i < 3; i++)
	{
		if (board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol){
			return 1;
			}
		if (board[0][i] == symbol && board[1][i] == symbol && board[2][i] == symbol){
			return 1;
			}
	}
	if (board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol){
		return 1;
		}
	if (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol){
		return 1;
		}
	return 0;
}

// ---------------------------------------win cndition part-----------------------------------------------------------
int checkDraw(char board[3][3])
{
	int flag = 1;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(board[i][j] == ' '){
				flag = 0;
				break;
			}
	}
	}
	if(flag == 1)return 1;
	return 0;
}



int value_altr(int current)
{
	if (current == 1)
	{
		return 2;
	}
	else if (current == 2)
	{
		return 1;
	}
}
int value_altr1(int current)
{
	if (current == 3)
	{
		return 4;
	}
	else if (current == 4)
	{
		return 3;
	}
}
void iDraw()
{


	iClear();
	if(current == 0){
	iShowBMP(0, 0, "Game_homepage.bmp");
	}
	if(current > 0){
	iShowBMP(0, 0, "project_bg.bmp");
	iShowBMP(300, 140, "tic_tac_game-crop (2).bmp");
	iShowBMP(300, 642, "tic_tac_game-crop (2).bmp");
	iShowBMP(800, 140, "tic_tac_game-crop (2).bmp");
	iShowBMP(800, 642, "tic_tac_game-crop (2).bmp");
	
	
	if(checkWin(board_1, 'x')){
		x_s_point += 1;
		iShowBMP(340,564,"xwon.bmp");
		iShowBMP(340,180, "X_win.bmp");
		if(data1 == 1){
		PlaySound("win_m.wav", NULL, SND_ASYNC);
		data1 = 0;
		}
		
	}else if(!checkWin(board_1, 'o')){
	if (block1_1 == 1)
	{
		iShowBMP2(360, 200, "cross.bmp", 0);
		
	}
	if (block1_2 == 1)
	{
		iShowBMP2(500, 200, "cross.bmp", 0);
	}
	if (block1_3 == 1)
	{
		iShowBMP2(650, 200, "cross.bmp", 0);
	}
	if (block1_4 == 1)
	{
		iShowBMP2(360, 350, "cross.bmp", 0);
	}
	if (block1_5 == 1)
	{
		iShowBMP2(500, 350, "cross.bmp", 0);
	}
	if (block1_6 == 1)
	{
		iShowBMP2(650, 350, "cross.bmp", 0);
	}
	if (block1_7 == 1)
	{
		iShowBMP2(360, 490, "cross.bmp", 0);
	}
	if (block1_8 == 1)
	{
		iShowBMP2(500, 490, "cross.bmp", 0);
	}
	if (block1_9 == 1)
	{
		iShowBMP2(645, 485, "cross.bmp", 0);
	}
}


if(checkWin(board_2, 'x')){
	    x_s_point += 1;
		iShowBMP(340,680, "X_win.bmp");
		iShowBMP(340,1064,"xwon.bmp");
		if(data2 == 1){
		PlaySound("win_m.wav", NULL, SND_ASYNC);
		data2 = 0;
		}
	}
		else if(!checkWin(board_2, 'o')){
	if (block2_1 == 1)
	{
		iShowBMP2(360, 700, "cross.bmp", 0);
	}
	if (block2_2 == 1)
	{
		iShowBMP2(500, 700, "cross.bmp", 0);
	}
	if (block2_3 == 1)
	{
		iShowBMP2(650, 700, "cross.bmp", 0);
	}
	if (block2_4 == 1)
	{
		iShowBMP2(360, 850, "cross.bmp", 0);
	}
	if (block2_5 == 1)
	{
		iShowBMP2(500, 850, "cross.bmp", 0);
	}
	if (block2_6 == 1)
	{
		iShowBMP2(650, 850, "cross.bmp", 0);
	}
	if (block2_7 == 1)
	{
		iShowBMP2(360, 990, "cross.bmp", 0);
	}
	if (block2_8 == 1)
	{
		iShowBMP2(500, 990, "cross.bmp", 0);
	}
	if (block2_9 == 1)
	{
		iShowBMP2(650, 990, "cross.bmp", 0);
	}

	}
	



	if(checkWin(board_3, 'x')){
		x_s_point += 1;
		iShowBMP(840,180, "X_win.bmp");
		iShowBMP(840,564,"xwon.bmp");
		if(data3 == 1){
		PlaySound("win_m.wav", NULL, SND_ASYNC);
		data3 = 0;
		}
	}else if(!checkWin(board_3, 'o')){
	if (block3_1 == 1)
	{
		iShowBMP2(860, 200, "cross.bmp", 0);
	}
	if (block3_2 == 1)
	{
		iShowBMP2(1000, 200, "cross.bmp", 0);
	}
	if (block3_3 == 1)
	{
		iShowBMP2(1150, 200, "cross.bmp", 0);
	}
	if (block3_4 == 1)
	{
		iShowBMP2(860, 350, "cross.bmp", 0);
	}
	if (block3_5 == 1)
	{
		iShowBMP2(1000, 350, "cross.bmp", 0);
	}
	if (block3_6 == 1)
	{
		iShowBMP2(1150, 350, "cross.bmp", 0);
	}
	if (block3_7 == 1)
	{
		iShowBMP2(860, 490, "cross.bmp", 0);
	}
	if (block3_8 == 1)
	{
		iShowBMP2(1000, 490, "cross.bmp", 0);
	}
	if (block3_9 == 1)
	{
		iShowBMP2(1150, 490, "cross.bmp", 0);
	}
	}


	if(checkWin(board_4, 'x')){
		x_s_point += 1;
		iShowBMP(840,680, "X_win.bmp");
		iShowBMP(840,1063,"xwon.bmp");
		if(data4 == 1){
		PlaySound("win_m.wav", NULL, SND_ASYNC);
		data4 = 0;
		}
	}else if(!checkWin(board_4, 'o')){
	if (block4_1 == 1)
	{
		iShowBMP2(360 + 500, 200 + 500, "cross.bmp", 0);
	}
	if (block4_2 == 1)
	{
		iShowBMP2(1000, 200 + 500, "cross.bmp", 0);
	}
	if (block4_3 == 1)
	{
		iShowBMP2(650 + 500, 200 + 500, "cross.bmp", 0);
	}
	if (block4_4 == 1)
	{
		iShowBMP2(360 + 500, 350 + 500, "cross.bmp", 0);
	}
	if (block4_5 == 1)
	{
		iShowBMP2(1000, 350 + 500, "cross.bmp", 0);
	}
	if (block4_6 == 1)
	{
		iShowBMP2(650 + 500, 350 + 500, "cross.bmp", 0);
	}
	if (block4_7 == 1)
	{
		iShowBMP2(360 + 500, 490 + 500, "cross.bmp", 0);
	}
	if (block4_8 == 1)
	{
		iShowBMP2(1000, 490 + 500, "cross.bmp", 0);
	}
	if (block4_9 == 1)
	{
		iShowBMP2(650 + 500, 490 + 500, "cross.bmp", 0);
	}
	}



if(checkWin(board_1, 'o')){
	   o_s_point += 1;
		iShowBMP(340,180, "X_win.bmp");
		iShowBMP(340,564,"owon.bmp");
		if(data5 == 1){
		PlaySound("win_m.wav", NULL, SND_ASYNC);
		data5 = 0;
		}
	}else if(!checkWin(board_1, 'x')){
	if (block1_1 == 2)
	{
		iShowBMP2(355, 195, "circle.bmp", 0);
	}
	if (block1_2 == 2)
	{
		iShowBMP2(497, 195, "circle.bmp", 0);
	}
	if (block1_3 == 2)
	{
		iShowBMP2(645, 195, "circle.bmp", 0);
	}
	if (block1_4 == 2)
	{
		iShowBMP2(355, 338, "circle.bmp", 0);
	}
	if (block1_5 == 2)
	{
		iShowBMP2(497, 338, "circle.bmp", 0);
	}
	if (block1_6 == 2)
	{
		iShowBMP2(645, 338, "circle.bmp", 0);
	}
	if (block1_7 == 2)
	{
		iShowBMP2(355, 485, "circle.bmp", 0);
	}
	if (block1_8 == 2)
	{
		iShowBMP2(497, 485, "circle.bmp", 0);
	}
	if (block1_9 == 2)
	{
		iShowBMP2(645, 485, "circle.bmp", 0);
	}
	}



	if(checkWin(board_2, 'o')){
		o_s_point += 1;
		iShowBMP(340,680, "X_win.bmp");
		iShowBMP(340,1064,"owon.bmp");
		if(data6 == 1){
		PlaySound("win_m.wav", NULL, SND_ASYNC);
		data6 = 0;
		}
	}else if(!checkWin(board_2, 'x')){
	if (block2_1 == 2)
	{
		iShowBMP2(355, 195 + 500, "circle.bmp", 0);
	}
	if (block2_2 == 2)
	{
		iShowBMP2(497, 195 + 500, "circle.bmp", 0);
	}
	if (block2_3 == 2)
	{
		iShowBMP2(645, 195 + 500, "circle.bmp", 0);
	}
	if (block2_4 == 2)
	{
		iShowBMP2(355, 340 + 500, "circle.bmp", 0);
	}
	if (block2_5 == 2)
	{
		iShowBMP2(497, 340 + 500, "circle.bmp", 0);
	}
	if (block2_6 == 2)
	{
		iShowBMP2(645, 340 + 500, "circle.bmp", 0);
	}
	if (block2_7 == 2)
	{
		iShowBMP2(355, 485 + 500, "circle.bmp", 0);
	}
	if (block2_8 == 2)
	{
		iShowBMP2(497, 485 + 500, "circle.bmp", 0);
	}
	if (block2_9 == 2)
	{
		iShowBMP2(645, 485 + 500, "circle.bmp", 0);
	}
  }



  if(checkWin(board_3, 'o')){
	    o_s_point += 1;
		iShowBMP(840,180, "X_win.bmp");
		iShowBMP(840,564,"owon.bmp");
		if(data7 == 1){
		PlaySound("win_m.wav", NULL, SND_ASYNC);
		data7 = 0;
		}
	}else if(!checkWin(board_3, 'x')){
	if (block3_1 == 2)
	{
		iShowBMP2(355 + 500, 195, "circle.bmp", 0);
	}
	if (block3_2 == 2)
	{
		iShowBMP2(497 + 500, 195, "circle.bmp", 0);
	}
	if (block3_3 == 2)
	{
		iShowBMP2(645 + 500, 195, "circle.bmp", 0);
	}
	if (block3_4 == 2)
	{
		iShowBMP2(355 + 500, 340, "circle.bmp", 0);
	}
	if (block3_5 == 2)
	{
		iShowBMP2(497 + 500, 340, "circle.bmp", 0);
	}
	if (block3_6 == 2)
	{
		iShowBMP2(645 + 500, 340, "circle.bmp", 0);
	}
	if (block3_7 == 2)
	{
		iShowBMP2(355 + 500, 485, "circle.bmp", 0);
	}
	if (block3_8 == 2)
	{
		iShowBMP2(497 + 500, 485, "circle.bmp", 0);
	}
	if (block3_9 == 2)
	{
		iShowBMP2(645 + 500, 485, "circle.bmp", 0);
	}
	}



	if(checkWin(board_4, 'o')){
		o_s_point += 1;
		iShowBMP(840,680, "X_win.bmp");
		iShowBMP(840,1063,"owon.bmp");
		if(data8 == 1){
		PlaySound("win_m.wav", NULL, SND_ASYNC);
		data8 = 0;
		}
	}else if(!checkWin(board_4, 'x')){
	if (block4_1 == 2)
	{
		iShowBMP2(355 + 500, 195 + 500, "circle.bmp", 0);
	}
	if (block4_2 == 2)
	{
		iShowBMP2(497 + 500, 195 + 500, "circle.bmp", 0);
	}
	if (block4_3 == 2)
	{
		iShowBMP2(645 + 500, 195 + 500, "circle.bmp", 0);
	}
	if (block4_4 == 2)
	{
		iShowBMP2(355 + 500, 340 + 500, "circle.bmp", 0);
	}
	if (block4_5 == 2)
	{
		iShowBMP2(497 + 500, 340 + 500, "circle.bmp", 0);
	}
	if (block4_6 == 2)
	{
		iShowBMP2(645 + 500, 340 + 500, "circle.bmp", 0);
	}
	if (block4_7 == 2)
	{
		iShowBMP2(355 + 500, 485 + 500, "circle.bmp", 0);
	}
	if (block4_8 == 2)
	{
		iShowBMP2(497 + 500, 485 + 500, "circle.bmp", 0);
	}
	if (block4_9 == 2)
	{
		iShowBMP2(645 + 500, 485 + 500, "circle.bmp", 0);
	}
	}
	if(current == 1){
		iShowBMP(730, 620, "x'sturn.bmp");
	}else if(current == 2){
		iShowBMP(730, 620, "o'sturn.bmp");
	}

	if(checkDraw(board_1)){
		iShowBMP(340,564,"draw.bmp");
		iShowBMP(340,180, "X_win.bmp");
		if(dat1 == 1){
		PlaySound("tie.wav", NULL, SND_ASYNC);
		dat1 = 0;
		}
		}

		if(checkDraw(board_2)){
		iShowBMP(340,1064,"draw.bmp");
		iShowBMP(340,680, "X_win.bmp");
		if(dat2 == 1){
		PlaySound("tie.wav", NULL, SND_ASYNC);
		dat2 = 0;
		
		}
		}

		 if(checkDraw(board_3)){
		iShowBMP(840,564,"draw.bmp");
		iShowBMP(840,180, "X_win.bmp");
		if(dat3 == 1){
		PlaySound("tie.wav", NULL, SND_ASYNC);
		dat3 = 0;
		}
		}
		 if(checkDraw(board_4)){
		iShowBMP(840,1063,"draw.bmp");
		iShowBMP(840,680, "X_win.bmp");
		if(dat4 == 1){
		PlaySound("tie.wav", NULL, SND_ASYNC);
		dat4 = 0;
		}
		}
		}
}

void iMouseMove(int mx, int my)
{
	// printf("x = %d, y= %d\n",mx,my);
	// place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouse(int button, int state, int mx, int my)
{
	if(current == 0){
	nevigate(button, state, mx, my);
	}
	else{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		PlaySound("move.wav", NULL, SND_ASYNC);
		if (current == 1)
		

		{
			if(!checkWin(board_1, 'x') && !checkWin(board_1, 'o')){
				if (mx >= 351 && mx <= 477 && my >= 196 && my <= 325 && board_1[0][0] == ' ')
				{
					block1_1 = 1;
					board_1[0][0] = 'x';
					current = value_altr(current);
				}

				if (mx >= 499 && mx <= 620 && my >= 193 && my <= 324 && board_1[0][1] == ' ')
				{
					block1_2 = 1;
					board_1[0][1] = 'x';
					current = value_altr(current);
				}

				if (mx >= 640 && mx <= 772 && my >= 193 && my <= 324 && board_1[0][2] == ' ')
				{
					block1_3 = 1;
					board_1[0][2] = 'x';
					current = value_altr(current);
				}

				if (mx >= 344 && mx <= 474 && my >= 347 && my <= 464 && board_1[1][0] == ' ')
				{
					block1_4 = 1;
					board_1[1][0] = 'x';
					current = value_altr(current);
				}

				if (mx >= 500 && mx <= 616 && my >= 348 && my <= 463 && board_1[1][1] == ' ')
				{
					block1_5 = 1;
					board_1[1][1] = 'x';
					current = value_altr(current);
				}

				if (mx >= 640 && mx <= 768 && my >= 348 && my <= 463 && board_1[1][2] == ' ')
				{
					block1_6 = 1;
					board_1[1][2] = 'x';
					current = value_altr(current);
				}

				if (mx >= 343 && mx <= 477 && my >= 491 && my <= 618 && board_1[2][0] == ' ')
				{
					block1_7 = 1;
					board_1[2][0] = 'x';
					current = value_altr(current);
				}

				if (mx >= 500 && mx <= 619 && my >= 488 && my <= 617 && board_1[2][1] == ' ')
				{
					block1_8 = 1;
					board_1[2][1] = 'x';
					current = value_altr(current);
				}

				if (mx >= 641 && mx <= 766 && my >= 488 && my <= 604 && block1_9 == 0 && board_1[2][2] == ' ')
				{
					block1_9 = 1;
					board_1[2][2] = 'x';
					// printf("%d ", block1_9);
					current = value_altr(current);
				}
			}




           if(!checkWin(board_2, 'x') && !checkWin(board_2, 'o')){
			if (mx >= 351 && mx <= 477 && my >= 696 && my <= 825 && board_2[0][0] == ' ')
			{
				block2_1 = 1;
				board_2[0][0] = 'x';
				current = value_altr(current);
			}

			if (mx >= 499 && mx <= 620 && my >= 693 && my <= 824 && board_2[0][1] == ' ')
			{
				block2_2 = 1;
				board_2[0][1] = 'x';
				current = value_altr(current);
			}

			if (mx >= 640 && mx <= 772 && my >= 693 && my <= 824 && board_2[0][2] == ' ')
			{
				block2_3 = 1;
				board_2[0][2] = 'x';
				current = value_altr(current);
			}

			if (mx >= 344 && mx <= 474 && my >= 847 && my <= 964 && board_2[1][0] == ' ')
			{
				block2_4 = 1;
				board_2[1][0] = 'x';
				current = value_altr(current);
			}

			if (mx >= 500 && mx <= 616 && my >= 848 && my <= 963 && board_2[1][1] == ' ')
			{
				block2_5 = 1;
				board_2[1][1] = 'x';
				current = value_altr(current);
			}

			if (mx >= 640 && mx <= 768 && my >= 848 && my <= 963 && board_2[1][2] == ' ')
			{
				block2_6 = 1;
				board_2[1][2] = 'x';
				current = value_altr(current);
			}

			if (mx >= 343 && mx <= 477 && my >= 991 && my <= 1118 && board_2[2][0] == ' ')
			{
				block2_7 = 1;
				board_2[2][0] = 'x';
				current = value_altr(current);
			}
			if (mx >= 500 && mx <= 619 && my >= 991 && my <= 1117 && board_2[2][1] == ' ')
			{
				block2_8 = 1;
				board_2[2][1] = 'x';
				current = value_altr(current);
			}

			if (mx >= 641 && mx <= 766 && my >= 988 && my <= 1104 && board_2[2][2] == ' ')
			{
				block2_9 = 1;
				board_2[2][2] = 'x';
				current = value_altr(current);
			}
		   }




			if(!checkWin(board_3, 'x') && !checkWin(board_3, 'o')){
			if (mx >= 351 + 500 && mx <= 477 + 500 && my >= 196 && my <= 325 && board_3[0][0] == ' ')
			{
				block3_1 = 1;
				board_3[0][0] = 'x';
				current = value_altr(current);
			}
			if (mx >= 499 + 500 && mx <= 620 + 500 && my >= 193 && my <= 324 && board_3[0][1] == ' ')
			{
				block3_2 = 1;
				board_3[0][1] = 'x';
				current = value_altr(current);
			}

			if (mx >= 640 + 500 && mx <= 772 + 500 && my >= 193 && my <= 324 && board_3[0][2] == ' ')
			{
				block3_3 = 1;
				board_3[0][2] = 'x';
				current = value_altr(current);
			}

			if (mx >= 344 + 500 && mx <= 474 + 500 && my >= 347 && my <= 464 && board_3[1][0] == ' ')
			{
				block3_4 = 1;
				board_3[1][0] = 'x';
				current = value_altr(current);
			}

			if (mx >= 500 + 500 && mx <= 616 + 500 && my >= 348 && my <= 463 && board_3[1][1] == ' ')
			{
				block3_5 = 1;
				board_3[1][1] = 'x';
				current = value_altr(current);
			}

			if (mx >= 640 + 500 && mx <= 768 + 500 && my >= 348 && my <= 463 && board_3[1][2] == ' ')
			{
				block3_6 = 1;
				board_3[1][2] = 'x';
				current = value_altr(current);
			}

			if (mx >= 343 + 500 && mx <= 477 + 500 && my >= 491 && my <= 618 && board_3[2][0] == ' ')
			{
				block3_7 = 1;
				board_3[2][0] = 'x';
				current = value_altr(current);
			}

			if (mx >= 500 + 500 && mx <= 619 + 500 && my >= 488 && my <= 617 && board_3[2][1] == ' ')
			{
				block3_8 = 1;
				board_3[2][1] = 'x';
				current = value_altr(current);
			}

			if (mx >= 641 + 500 && mx <= 766 + 500 && my >= 488 && my <= 604 && board_3[2][2] == ' ')
			{
				block3_9 = 1;
				board_3[2][2] = 'x';
				current = value_altr(current);
			}
			}



            if(!checkWin(board_4, 'x') && !checkWin(board_4, 'o')){
			if (mx >= 351 + 500 && mx <= 477 + 500 && my >= 696 && my <= 825 && board_4[0][0] == ' ')
			{
				block4_1 = 1;
				board_4[0][0] = 'x';
				current = value_altr(current);
			}

			if (mx >= 499 + 500 && mx <= 620 + 500 && my >= 693 && my <= 824 && board_4[0][1] == ' ')
			{
				block4_2 = 1;
				board_4[0][1] = 'x';
				current = value_altr(current);
			}

			if (mx >= 640 + 500 && mx <= 772 + 500 && my >= 693 && my <= 824 && board_4[0][2] == ' ')
			{
				block4_3 = 1;
				board_4[0][2] = 'x';
				current = value_altr(current);
			}

			if (mx >= 344 + 500 && mx <= 474 + 500 && my >= 847 && my <= 964 && board_4[1][0] == ' ')
			{
				block4_4 = 1;
				board_4[1][0] = 'x';
				current = value_altr(current);
			}

			if (mx >= 500 + 500 && mx <= 616 + 500 && my >= 848 && my <= 963 && board_4[1][1] == ' ')
			{
				block4_5 = 1;
				board_4[1][1] = 'x';
				current = value_altr(current);
			}

			if (mx >= 640 + 500 && mx <= 768 + 500 && my >= 848 && my <= 963 && board_4[1][2] == ' ')
			{
				block4_6 = 1;
				board_4[1][2] = 'x';
				current = value_altr(current);
			}

			if (mx >= 343 + 500 && mx <= 477 + 500 && my >= 991 && my <= 1118 && board_4[2][0] == ' ')
			{
				block4_7 = 1;
				board_4[2][0] = 'x';
				current = value_altr(current);
			}

			if (mx >= 500 + 500 && mx <= 619 + 500 && my >= 991 && my <= 1117 && board_4[2][1] == ' ')
			{
				block4_8 = 1;
				board_4[2][1] = 'x';
				current = value_altr(current);
			}

			if (mx >= 641 + 500 && mx <= 766 + 500 && my >= 988 && my <= 1104 && board_4[2][2] == ' ')
			{
				block4_9 = 1;
				board_4[2][2] = 'x';
				current = value_altr(current);
			}
			}
		}




		if (current == 2)
		{
			if(!checkWin(board_1, 'x') && !checkWin(board_1, 'o')){
			if (mx >= 351 && mx <= 477 && my >= 196 && my <= 325 && board_1[0][0] == ' ')
			{
				block1_1 = 2;
				board_1[0][0] = 'o';
				current = value_altr(current);
			}

			if (mx >= 499 && mx <= 620 && my >= 193 && my <= 324 && board_1[0][1] == ' ')
			{
				block1_2 = 2;
				board_1[0][1] = 'o';
				current = value_altr(current);
			}

			if (mx >= 640 && mx <= 772 && my >= 193 && my <= 324 && board_1[0][2] == ' ')
			{
				block1_3 = 2;
				board_1[0][2] = 'o';
				current = value_altr(current);
			}

			if (mx >= 344 && mx <= 474 && my >= 347 && my <= 464 && board_1[1][0] == ' ')
			{
				block1_4 = 2;
				board_1[1][0] = 'o';
				current = value_altr(current);
			}

			if (mx >= 500 && mx <= 616 && my >= 348 && my <= 463 && board_1[1][1] == ' ')
			{
				block1_5 = 2;
				board_1[1][1] = 'o';
				current = value_altr(current);
			}

			if (mx >= 640 && mx <= 768 && my >= 348 && my <= 463 && board_1[1][2] == ' ')
			{
				block1_6 = 2;
				board_1[1][2] = 'o';
				current = value_altr(current);
			}

			if (mx >= 343 && mx <= 477 && my >= 491 && my <= 618 && board_1[2][0] == ' ')
			{
				block1_7 = 2;
				board_1[2][0] = 'o';
				current = value_altr(current);
			}

			if (mx >= 500 && mx <= 619 && my >= 488 && my <= 617 && board_1[2][1] == ' ')
			{
				block1_8 = 2;
				board_1[2][1] = 'o';
				current = value_altr(current);
			}

			if (mx >= 641 && mx <= 766 && my >= 488 && my <= 604 && block1_9 == 0 && board_1[2][2] == ' ')
			{
				block1_9 = 2;
				board_1[2][2] = 'o';
				current = value_altr(current);
			}
			}

			// board-2-----------------------------------------------------------------------------------------------------------------
            
			
			if(!checkWin(board_2, 'x') && !checkWin(board_2, 'o')){
			if (mx >= 351 && mx <= 477 && my >= 696 && my <= 325 + 500 && board_2[0][0] == ' ')
			{
				block2_1 = 2;
				board_2[0][0] = 'o';
				current = value_altr(current);
			}

			if (mx >= 499 && mx <= 620 && my >= 193 + 500 && my <= 324 + 500 && board_2[0][1] == ' ')
			{
				block2_2 = 2;
				board_2[0][1] = 'o';
				current = value_altr(current);
			}

			if (mx >= 640 && mx <= 772 && my >= 193 + 500 && my <= 324 + 500 && board_2[0][2] == ' ')
			{
				block2_3 = 2;
				board_2[0][2] = 'o';
				current = value_altr(current);
			}

			if (mx >= 344 && mx <= 474 && my >= 347 + 500 && my <= 464 + 500 && board_2[1][0] == ' ')
			{
				block2_4 = 2;
				board_2[1][0] = 'o';
				current = value_altr(current);
			}

			if (mx >= 500 && mx <= 616 && my >= 348 + 500 && my <= 463 + 500 && board_2[1][1] == ' ')
			{
				block2_5 = 2;
				board_2[1][1] = 'o';
				current = value_altr(current);
			}

			if (mx >= 640 && mx <= 768 && my >= 348 + 500 && my <= 463 + 500 && board_2[1][2] == ' ')
			{
				block2_6 = 2;
				board_2[1][2] = 'o';
				current = value_altr(current);
			}

			if (mx >= 343 && mx <= 477 && my >= 491 + 500 && my <= 618 + 500 && board_2[2][0] == ' ')
			{
				block2_7 = 2;
				board_2[2][0] = 'o';
				current = value_altr(current);
			}

			if (mx >= 500 && mx <= 619 && my >= 488 + 500 && my <= 617 + 500 && board_2[2][1] == ' ')
			{
				block2_8 = 2;
				board_2[2][1] = 'o';
				current = value_altr(current);
			}

			if (mx >= 641 && mx <= 766 && my >= 488 + 500 && my <= 604 + 500 && board_2[2][2] == ' ')
			{
				block2_9 = 2;
				board_2[2][2] = 'o';
				current = value_altr(current);
			}
			}

			// board-3 ---------------------------------------------------------------------------------------------------------------

            if(!checkWin(board_3, 'x') && !checkWin(board_3, 'o')){
			if (mx >= 351 + 500 && mx <= 477 + 500 && my >= 196 && my <= 325 && board_3[0][0] == ' ')
			{
				block3_1 = 2;
				board_3[0][0] = 'o';
				current = value_altr(current);
			}

			if (mx >= 499 + 500 && mx <= 620 + 500 && my >= 193 && my <= 324 && board_3[0][1] == ' ')
			{
				block3_2 = 2;
				board_3[0][1] = 'o';
				current = value_altr(current);
			}

			if (mx >= 640 + 500 && mx <= 772 + 500 && my >= 193 && my <= 324 && board_3[0][2] == ' ')
			{
				block3_3 = 2;
				board_3[0][2] = 'o';
				current = value_altr(current);
			}

			if (mx >= 344 + 500 && mx <= 474 + 500 && my >= 347 && my <= 464 && board_3[1][0] == ' ')
			{
				block3_4 = 2;
				board_3[1][0] = 'o';
				current = value_altr(current);
			}

			if (mx >= 500 + 500 && mx <= 616 + 500 && my >= 348 && my <= 463 && board_3[1][1] == ' ')
			{
				block3_5 = 2;
				board_3[1][1] = 'o';
				current = value_altr(current);
			}

			if (mx >= 640 + 500 && mx <= 768 + 500 && my >= 348 && my <= 463 && board_3[1][2] == ' ')
			{
				block3_6 = 2;
				board_3[1][2] = 'o';
				current = value_altr(current);
			}

			if (mx >= 343 + 500 && mx <= 477 + 500 && my >= 491 && my <= 618 && board_3[2][0] == ' ')
			{
				block3_7 = 2;
				board_3[2][0] = 'o';
				current = value_altr(current);
			}

			if (mx >= 500 + 500 && mx <= 619 + 500 && my >= 488 && my <= 617 && board_3[2][1] == ' ')
			{
				block3_8 = 2;
				board_3[2][1] = 'o';
				current = value_altr(current);
			}

			if (mx >= 1141 && mx <= 1266 && my >= 488 && my <= 604 && block3_9 == 0 && board_3[2][2] == ' ')
			{
				block3_9 = 2;
				board_3[2][2] = 'o';
				current = value_altr(current);
			}
			}

			// board-4 -----------------------------------------------------------------------------------------------------------------------------------------

			if(!checkWin(board_4, 'x') && !checkWin(board_4, 'o')){
			if (mx >= 351 + 500 && mx <= 477 + 500 && my >= 696 && my <= 325 + 500 && board_4[0][0] == ' ')
			{
				block4_1 = 2;
				board_4[0][0] = 'o';
				current = value_altr(current);
			}

			if (mx >= 499 + 500 && mx <= 620 + 500 && my >= 193 + 500 && my <= 324 + 500 && board_4[0][1] == ' ')
			{
				block4_2 = 2;
				board_4[0][1] = 'o';
				current = value_altr(current);
			}

			if (mx >= 640 + 500 && mx <= 772 + 500 && my >= 193 + 500 && my <= 324 + 500 && board_4[0][2] == ' ')
			{
				block4_3 = 2;
				board_4[0][2] = 'o';
				current = value_altr(current);
			}

			if (mx >= 344 + 500 && mx <= 474 + 500 && my >= 347 + 500 && my <= 464 + 500 && board_4[1][0] == ' ')
			{
				block4_4 = 2;
				board_4[1][0] = 'o';
				current = value_altr(current);
			}

			if (mx >= 500 + 500 && mx <= 616 + 500 && my >= 348 + 500 && my <= 463 + 500 && board_4[1][1] == ' ')
			{
				block4_5 = 2;
				board_4[1][1] = 'o';
				current = value_altr(current);
			}

			if (mx >= 640 + 500 && mx <= 768 + 500 && my >= 348 + 500 && my <= 463 + 500 && board_4[1][2] == ' ')
			{
				block4_6 = 2;
				board_4[1][2] = 'o';
				current = value_altr(current);
			}

			if (mx >= 343 + 500 && mx <= 477 + 500 && my >= 491 + 500 && my <= 618 + 500 && board_4[2][0] == ' ')
			{
				block4_7 = 2;
				board_4[2][0] = 'o';
				current = value_altr(current);
			}

			if (mx >= 500 + 500 && mx <= 619 + 500 && my >= 488 + 500 && my <= 617 + 500 && board_4[2][1] == ' ')
			{
				block4_8 = 2;
				board_4[2][1] = 'o';
				current = value_altr(current);
			}

			if (mx >= 641 + 500 && mx <= 766 + 500 && my >= 488 + 500 && my <= 604 + 500 && board_4[2][2] == ' ')
			{
				block4_9 = 2;
				board_4[2][2] = 'o';
				current = value_altr(current);
			}
			}
		}
		
		if (current == 3)
		{
			if (mx >= 351 && mx <= 477 && my >= 196 && my <= 325 && board_1[0][0] == ' ')
			{
				block1_1 = 2;
				board_1[0][0] = 'o';
				current = value_altr1(current);
				player_at1 = 1;
			}
			if (mx >= 499 && mx <= 620 && my >= 193 && my <= 324 && board_1[0][1] == ' ')
			{
				block1_2 = 2;
				board_1[0][1] = 'o';
				current = value_altr1(current);
				player_at1 = 1;
			}

			if (mx >= 640 && mx <= 772 && my >= 193 && my <= 324 && board_1[0][2] == ' ')
			{
				block1_3 = 2;
				board_1[0][2] = 'o';
				current = value_altr1(current);
				player_at1 = 1;
			}

			if (mx >= 344 && mx <= 474 && my >= 347 && my <= 464 && board_1[1][0] == ' ')
			{
				block1_4 = 2;
				board_1[1][0] = 'o';
				current = value_altr1(current);
				player_at1 = 1;
			}

			if (mx >= 500 && mx <= 616 && my >= 348 && my <= 463 && board_1[1][1] == ' ')
			{
				block1_5 = 2;
				board_1[1][1] = 'o';
				current = value_altr1(current);
				player_at1 = 1;
			}

			if (mx >= 640 && mx <= 768 && my >= 348 && my <= 463 && board_1[1][2] == ' ')
			{
				block1_6 = 2;
				board_1[1][2] = 'o';
				current = value_altr1(current);
				player_at1 = 1;
			}

			if (mx >= 343 && mx <= 477 && my >= 491 && my <= 618 && board_1[2][0] == ' ')
			{
				block1_7 = 2;
				board_1[2][0] = 'o';
				current = value_altr1(current);
				player_at1 = 1;
			}

			if (mx >= 500 && mx <= 619 && my >= 488 && my <= 617 && board_1[2][1] == ' ')
			{
				block1_8 = 2;
				board_1[2][1] = 'o';
				current = value_altr1(current);
				player_at1 = 1;
			}

			if (mx >= 641 && mx <= 766 && my >= 488 && my <= 604 && block1_9 == 0)
			{
				block1_9 = 2;
				board_1[2][2] = 'o';
				current = value_altr1(current);
				player_at1 = 1;
			}

			if(checkWin(board_1, symbol_2) && pass1 == 1){
				player_at2 = 1;
				player_at1 = 0;
				pass1 = 0;
			}
			// board-2-----------------------------------------------------------------------------------------------------------------

			if (mx >= 351 && mx <= 477 && my >= 696 && my <= 325 + 500 && board_2[0][0] == ' ')
			{
				block2_1 = 2;
				board_2[0][0] = 'o';
				current = value_altr1(current);
				player_at2 = 1;
			}

			if (mx >= 499 && mx <= 620 && my >= 193 + 500 && my <= 324 + 500 && board_2[0][1] == ' ')
			{
				block2_2 = 2;
				board_2[0][1] = 'o';
				current = value_altr1(current);
				player_at2 = 1;
			}

			if (mx >= 640 && mx <= 772 && my >= 193 + 500 && my <= 324 + 500 && board_2[0][2] == ' ')
			{
				block2_3 = 2;
				board_2[0][2] = 'o';
				current = value_altr1(current);
				player_at2 = 1;
			}

			if (mx >= 344 && mx <= 474 && my >= 347 + 500 && my <= 464 + 500 && board_2[1][0] == ' ')
			{
				block2_4 = 2;
				board_2[1][0] = 'o';
				current = value_altr1(current);
				player_at2 = 1;
			}

			if (mx >= 500 && mx <= 616 && my >= 348 + 500 && my <= 463 + 500 && board_2[1][1] == ' ')
			{
				block2_5 = 2;
				board_2[1][1] = 'o';
				current = value_altr1(current);
				player_at2 = 1;
			}

			if (mx >= 640 && mx <= 768 && my >= 348 + 500 && my <= 463 + 500 && board_2[1][2] == ' ')
			{
				block2_6 = 2;
				board_2[1][2] = 'o';
				current = value_altr1(current);
				player_at2 = 1;
			}

			if (mx >= 343 && mx <= 477 && my >= 491 + 500 && my <= 618 + 500 && board_2[2][0] == ' ')
			{
				block2_7 = 2;
				board_2[2][0] = 'o';
				current = value_altr1(current);
				player_at2 = 1;
			}

			if (mx >= 500 && mx <= 619 && my >= 488 + 500 && my <= 617 + 500 && board_2[2][1] == ' ')
			{
				block2_8 = 2;
				board_2[2][1] = 'o';
				current = value_altr1(current);
				player_at2 = 1;
			}

			if (mx >= 641 && mx <= 766 && my >= 488 + 500 && my <= 604 + 500 && board_2[2][2] == ' ')
			{
				block2_9 = 2;
				board_2[2][2] = 'o';
				current = value_altr1(current);
				player_at2 = 1;
			}

			if(checkWin(board_2, symbol_2) && pass2 == 1){
				player_at3 = 1;
				player_at2 = 0;
				pass2 = 0;
			}


			// board-3 ---------------------------------------------------------------------------------------------------------------

			if (mx >= 351 + 500 && mx <= 477 + 500 && my >= 196 && my <= 325 && board_3[0][0] == ' ')
			{
				block3_1 = 2;
				board_3[0][0] = 'o';
				current = value_altr1(current);
				player_at3 = 1;
			}

			if (mx >= 499 + 500 && mx <= 620 + 500 && my >= 193 && my <= 324 && board_3[0][1] == ' ')
			{
				block3_2 = 2;
				board_3[0][1] = 'o';
				current = value_altr1(current);
				player_at3 = 1;
			}

			if (mx >= 640 + 500 && mx <= 772 + 500 && my >= 193 && my <= 324 && board_3[0][2] == ' ')
			{
				block3_3 = 2;
				board_3[0][2] = 'o';
				current = value_altr1(current);
				player_at3 = 1;
			}

			if (mx >= 344 + 500 && mx <= 474 + 500 && my >= 347 && my <= 464 && board_3[1][0] == ' ')
			{
				block3_4 = 2;
				board_3[1][0] = 'o';
				current = value_altr1(current);
				player_at3 = 1;
			}

			if (mx >= 500 + 500 && mx <= 616 + 500 && my >= 348 && my <= 463 && board_3[1][1] == ' ')
			{
				block3_5 = 2;
				board_3[1][1] = 'o';
				current = value_altr1(current);
				player_at3 = 1;
			}

			if (mx >= 640 + 500 && mx <= 768 + 500 && my >= 348 && my <= 463 && board_3[1][2] == ' ')
			{
				block3_6 = 2;
				board_3[1][2] = 'o';
				current = value_altr1(current);
				player_at3 = 1;
			}

			if (mx >= 343 + 500 && mx <= 477 + 500 && my >= 491 && my <= 618 && board_3[2][0] == ' ')
			{
				block3_7 = 2;
				board_3[2][0] = 'o';
				current = value_altr1(current);
				player_at3 = 1;
			}

			if (mx >= 500 + 500 && mx <= 619 + 500 && my >= 488 && my <= 617 && board_3[2][1] == ' ')
			{
				block3_8 = 2;
				board_3[2][1] = 'o';
				current = value_altr1(current);
				player_at3 = 1;
			}

			if (mx >= 1141 && mx <= 1266 && my >= 488 && my <= 604 && block3_9 == 0)
			{
				block3_9 = 2;
				board_3[2][2] = 'o';
				current = value_altr1(current);
				player_at3 = 1;
			}

            if(checkWin(board_3, symbol_2) && pass3 == 1){
				player_at4 = 1;
				player_at3 = 0;
				pass3 = 0;
			}
			// board-4 -----------------------------------------------------------------------------------------------------------------------------------------

			if (mx >= 351 + 500 && mx <= 477 + 500 && my >= 696 && my <= 325 + 500 && board_4[0][0] == ' ')
			{
				block4_1 = 2;
				board_4[0][0] = 'o';
				current = value_altr1(current);
				player_at4 = 1;
			}

			if (mx >= 499 + 500 && mx <= 620 + 500 && my >= 193 + 500 && my <= 324 + 500 && board_4[0][1] == ' ')
			{
				block4_2 = 2;
				board_4[0][1] = 'o';
				current = value_altr1(current);
				player_at4 = 1;
			}

			if (mx >= 640 + 500 && mx <= 772 + 500 && my >= 193 + 500 && my <= 324 + 500 && board_4[0][2] == ' ')
			{
				block4_3 = 2;
				board_4[0][2] = 'o';
				current = value_altr1(current);
				player_at4 = 1;
			}

			if (mx >= 344 + 500 && mx <= 474 + 500 && my >= 347 + 500 && my <= 464 + 500 && board_4[1][0] == ' ')
			{
				block4_4 = 2;
				board_4[1][0] = 'o';
				current = value_altr1(current);
				player_at4 = 1;
			}

			if (mx >= 500 + 500 && mx <= 616 + 500 && my >= 348 + 500 && my <= 463 + 500 && board_4[1][1] == ' ')
			{
				block4_5 = 2;
				board_4[1][1] = 'o';
				current = value_altr1(current);
				player_at4 = 1;
			}

			if (mx >= 640 + 500 && mx <= 768 + 500 && my >= 348 + 500 && my <= 463 + 500 && board_4[1][2] == ' ')
			{
				block4_6 = 2;
				board_4[1][2] = 'o';
				current = value_altr1(current);
				player_at4 = 1;
			}

			if (mx >= 343 + 500 && mx <= 477 + 500 && my >= 491 + 500 && my <= 618 + 500 && board_4[2][0] == ' ')
			{
				block4_7 = 2;
				board_4[2][0] = 'o';
				current = value_altr1(current);
				player_at4 = 1;
			}

			if (mx >= 500 + 500 && mx <= 619 + 500 && my >= 488 + 500 && my <= 617 + 500 && board_4[2][1] == ' ')
			{
				block4_8 = 2;
				board_4[2][1] = 'o';
				current = value_altr1(current);
				player_at4 = 1;
			}

			if (mx >= 641 + 500 && mx <= 766 + 500 && my >= 488 + 500 && my <= 604 + 500 && board_4[2][2] == ' ')
			{
				block4_9 = 2;
				board_4[2][2] = 'o';
				current = value_altr1(current);
				player_at4 = 1;
			}
			if(checkWin(board_4, symbol_2) && !checkWin(board_1, symbol_2) && pass4 == 1){
				player_at1 = 1;
				player_at4 = 0;
				pass4 = 0;
			}

		}


		if(current == 4)
			{
				 if(!checkWin(board_1, symbol_1) && player_at1 == 1)
			     {
				done = 0;
				player_at1 = 0;
				current = value_altr(current);
					Move bestMove = findBestMove(board_1);
					if(bestMove.row == 0 && bestMove.col == 0){
						block1_1 = 1;
						board_1[0][0] = 'x';
					}else if(bestMove.row == 0 && bestMove.col == 1){
						block1_2 = 1;
						board_1[0][1] = 'x';
					}else if(bestMove.row == 0 && bestMove.col == 2){
						block1_3 = 1;
						board_1[0][2] = 'x';
					}else if(bestMove.row == 1 && bestMove.col == 0){
						block1_4 = 1;
						board_1[1][0] = 'x';
					}else if(bestMove.row == 1 && bestMove.col == 1){
						block1_5 = 1;
						board_1[1][1] = 'x';
					}else if(bestMove.row == 1 && bestMove.col == 2){
						block1_6 = 1;
						board_1[1][2] = 'x';
					}else if(bestMove.row == 2 && bestMove.col == 0){
						block1_7 = 1;
						board_1[2][0] = 'x';
					}else if(bestMove.row == 2 && bestMove.col == 1){
						block1_8 = 1;
						board_1[2][1] = 'x';
					}else if(bestMove.row == 2 && bestMove.col == 2){
						block1_9 = 1;
						board_1[2][2] = 'x';
					}		
			}

			 if(!checkWin(board_2, symbol_1) && player_at2 == 1){
				done = 0;
				player_at2 = 0;
				current = value_altr(current);
				Move bestMove = findBestMove(board_2);
					
					if(bestMove.row == 0 && bestMove.col == 0){
						block2_1 = 1;
						board_2[0][0] = 'x';
					}else if(bestMove.row == 0 && bestMove.col == 1){
						block2_2 = 1;
						board_2[0][1] = 'x';
					}else if(bestMove.row == 0 && bestMove.col == 2){
						block2_3 = 1;
						board_2[0][2] = 'x';
					}else if(bestMove.row == 1 && bestMove.col == 0){
						block2_4 = 1;
						board_2[1][0] = 'x';
					}else if(bestMove.row == 1 && bestMove.col == 1){
						block2_5 = 1;
						board_2[1][1] = 'x';
					}else if(bestMove.row == 1 && bestMove.col == 2){
						block2_6 = 1;
						board_2[1][2] = 'x';
					}else if(bestMove.row == 2 && bestMove.col == 0){
						block2_7 = 1;
						board_2[2][0] = 'x';
					}else if(bestMove.row == 2 && bestMove.col == 1){
						block2_8 = 1;
						board_2[2][1] = 'x';
					}else if(bestMove.row == 2 && bestMove.col == 2){
						block2_9 = 1;
						board_2[2][2] = 'x';
					}
			
          }


		   if(!checkWin(board_3, symbol_1) && player_at3 == 1){
			done = 0;
			player_at3 = 0;
			current = value_altr(current);
			Move bestMove = findBestMove(board_3);
					if(bestMove.row == 0 && bestMove.col == 0){
						block3_1 = 1;
						board_3[0][0] = 'x';
					}else if(bestMove.row == 0 && bestMove.col == 1){
						block3_2 = 1;
						board_3[0][1] = 'x';
					}else if(bestMove.row == 0 && bestMove.col == 2){
						block3_3 = 1;
						board_3[0][2] = 'x';
					}else if(bestMove.row == 1 && bestMove.col == 0){
						block3_4 = 1;
						board_3[1][0] = 'x';
					}else if(bestMove.row == 1 && bestMove.col == 1){
						block3_5 = 1;
						board_3[1][1] = 'x';
					}else if(bestMove.row == 1 && bestMove.col == 2){
						block3_6 = 1;
						board_3[1][2] = 'x';
					}else if(bestMove.row == 2 && bestMove.col == 0){
						block3_7 = 1;
						board_3[2][0] = 'x';
					}else if(bestMove.row == 2 && bestMove.col == 1){
						block3_8 = 1;
						board_3[2][1] = 'x';
					}else if(bestMove.row == 2 && bestMove.col == 2){
						block3_9 = 1;
						board_3[2][2] = 'x';
					}
             }


			  if(!checkWin(board_4, symbol_1) && player_at4 == 1){
				done = 0;
				player_at4 = 0;
				current = value_altr(current);
				Move bestMove = findBestMove(board_4);
					if(bestMove.row == 0 && bestMove.col == 0){
						block4_1 = 1;
						board_4[0][0] = 'x';
					}else if(bestMove.row == 0 && bestMove.col == 1){
						block4_2 = 1;
						board_4[0][1] = 'x';
					}else if(bestMove.row == 0 && bestMove.col == 2){
						block4_3 = 1;
						board_4[0][2] = 'x';
					}else if(bestMove.row == 1 && bestMove.col == 0){
						block4_4 = 1;
						board_4[1][0] = 'x';
					}else if(bestMove.row == 1 && bestMove.col == 1){
						block4_5 = 1;
						board_4[1][1] = 'x';
					}else if(bestMove.row == 1 && bestMove.col == 2){
						block4_6 = 1;
						board_4[1][2] = 'x';
					}else if(bestMove.row == 2 && bestMove.col == 0){
						block4_7 = 1;
						board_4[2][0] = 'x';
					}else if(bestMove.row == 2 && bestMove.col == 1){
						block4_8 = 1;
						board_4[2][1] = 'x';
					}else if(bestMove.row == 2 && bestMove.col == 2){
						block4_9 = 1;
						board_4[2][2] = 'x';
					}
					
		}
		current = 3;
			
		}
		

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (mx >= 1500 && mx <= 1585 && my >= 1085 && my <= 1118)
		{
			exit(0);
		}
	}
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		printf("%d %d\n", mx, my);
	}
}
}
/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/
void iKeyboard(unsigned char key)
{
	if (key == 'q')
	{
		exit(0);
	}
	// place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
	*/
void iSpecialKeyboard(unsigned char key)
{

	// if (key == GLUT_KEY_END) {
	// 	exit(0);
	// }
	// place your codes for other keys here
}
int main()
{

	//    PlaySound("home.wav", NULL, SND_LOOP | SND_ASYNC);

	//  iSetTimer(4200, toss);

	current = 0;
	
	//    feature();
	playmusic();
	iInitialize(1600, 1140, "Tic-Tac-Toe");
	
	return 0;
}
