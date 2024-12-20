#include <stdio.h>
#include <bits/stdc++.h>
#include <windows.h>
#include <mmsystem.h>
#include <stdlib.h>
#include <unistd.h>
#include <thread>
#include <stdlib.h>
#include <time.h>
#include <string>
#include "iGraphics.h"

#pragma comment(lib, "winmm.lib");

#define size 3
#define player 'o'
#define opponent 'x'
#define playerNameLength 20

int o_s_point = 0;
int x_s_point = 0;

bool isTextBoxActive = false;

char playerName[playerNameLength] = "";

int score = 0;
int music = 1;
int idx = 0;

int win_brd = 0;
int win_brd1 = 0;
int win_brd2 = 0;
int win_brd3 = 0;

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


int done_bord1 = 0;
int done_bord2 = 0;
int done_bord3 = 0;
int done_bord4 = 0;

int win_data = 1;

int easy = 0;
int medium = 0;
int hard = 0;

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

void newgame() {
    o_s_point = 0;
    x_s_point = 0;
	score = 0;
	idx = 0;

	isTextBoxActive = false;
	playerName[playerNameLength] = {'\0'};


	 win_brd = 0;
     win_brd1 = 0;
     win_brd2 = 0;
     win_brd3 = 0;


    X_win_1 = 0;
    O_win_1 = 0;
    X_win_2 = 0;
    O_win_2 = 0;
    X_win_3 = 0;
    O_win_3 = 0;
    X_win_4 = 0;
    O_win_4 = 0;
    done = 0;

    data1 = 1;
    data2 = 1;
    data3 = 1;
    data4 = 1;
    data5 = 1;
    data6 = 1;
    data7 = 1;
    data8 = 1;

    dat1 = 1;
    dat2 = 1;
    dat3 = 1;
    dat4 = 1;

    pass1 = 1;
    pass2 = 1;
    pass3 = 1;
    pass4 = 1;

    block1_1 = 0;
    block1_2 = 0;
    block1_3 = 0;
    block1_4 = 0;
    block1_5 = 0;
    block1_6 = 0;
    block1_7 = 0;
    block1_8 = 0;
    block1_9 = 0;

    block2_1 = 0;
    block2_2 = 0;
    block2_3 = 0;
    block2_4 = 0;
    block2_5 = 0;
    block2_6 = 0;
    block2_7 = 0;
    block2_8 = 0;
    block2_9 = 0;

    block3_1 = 0;
    block3_2 = 0;
    block3_3 = 0;
    block3_4 = 0;
    block3_5 = 0;
    block3_6 = 0;
    block3_7 = 0;
    block3_8 = 0;
    block3_9 = 0;

    block4_1 = 0;
    block4_2 = 0;
    block4_3 = 0;
    block4_4 = 0;
    block4_5 = 0;
    block4_6 = 0;
    block4_7 = 0;
    block4_8 = 0;
    block4_9 = 0;

    done_bord1 = 0;
    done_bord2 = 0;
    done_bord3 = 0;
    done_bord4 = 0;

    win_data = 1;

    easy = 0;
    medium = 0;
    hard = 0;

    player_at1 = 0;
    player_at2 = 0;
    player_at3 = 0;
    player_at4 = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            board_1[i][j] = ' ';
            board_2[i][j] = ' ';
            board_3[i][j] = ' ';
            board_4[i][j] = ' ';
        }
    }
    iClear();
    iShowBMP(0, 0, "resources\\project_bg.bmp");
    iShowBMP(210, 10, "resources\\tic_tac_game-crop (2).bmp");
    iShowBMP(210, 400, "resources\\tic_tac_game-crop (2).bmp");
    iShowBMP(600, 10, "resources\\tic_tac_game-crop (2).bmp");
    iShowBMP(600, 400, "resources\\tic_tac_game-crop (2).bmp");
}
struct Player_file {
	char name[playerNameLength];
	int Score;
};

void saveScore() {
	Player_file players[6] = {0};
	int count = 0;

	FILE *ptr = fopen("topScores.txt", "r");
	if (ptr != NULL) {
		while (count < 5 && fscanf(ptr, "%19s %d", &players[count].name, &players[count].Score) == 2) {
			count++;
		}
		fclose(ptr);
	}

	int position = count;
	for (int i = 0; i < count; i++) {
		if (score >= players[i].Score) {
			position = i;
			break;
		}
	}

	if (position < 5) {
		if (count < 5) count++;
		for (int i = count - 1; i > position; i--) {
			players[i] = players[i - 1];
		}
		strcpy(players[position].name, playerName);
		players[position].Score = score;
	}

	ptr = fopen("topScores.txt", "w");
	if (ptr == NULL) {
		printf("Error: Could not write to file.\n");
		return;
	}

	for (int i = 0; i < count; i++) {
		fprintf(ptr, "%s %d\n", players[i].name, players[i].Score);
	}
	fclose(ptr);
}

void loadScore() {
	Player_file players[6];
	int count = 0;

	FILE *ptr = fopen("topScores.txt", "r");
	if (ptr != NULL) {
		while (fscanf(ptr, "%19s %d", &players[count].name, &players[count].Score) != EOF && count < 5) {
			count++;
		}
		fclose(ptr);
	}

	iSetColor(255, 255, 255);
	iText(500, 500, "Player Name", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(650, 500, "Score", GLUT_BITMAP_TIMES_ROMAN_24);
	for (int i = 0; i < count; i++) {
		if (players[i].Score == 0 || players[i].name[0] == '\0') break;
		char showingScore[1000];
		char showingScore1[1000];
		sprintf(showingScore, "%s", players[i].name);
		sprintf(showingScore1, "%d", players[i].Score);
		iText(500, 460 - i * 50, showingScore, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(660, 460 - i * 50, showingScore1, GLUT_BITMAP_TIMES_ROMAN_24);
	}
}

void drawScorePage()
{
    iSetColor(208, 255, 250);
	iShowBMP(0, 0, "resources\\Game_homepage-blur.bmp");
    iShowBMP(100, 100, "resources\\scorePage.bmp");
    iShowBMP(930, 634, "resources\\backButton.bmp");
    iSetColor(255, 255, 255);
	saveScore();
    loadScore();
}
void drawGameOverPage()
{
    iSetColor(103, 217, 10);
    iFilledRectangle(445, 350, 300, 80);
    iSetColor(0, 0, 0);
    iText(450, 410, "Player Name?", GLUT_BITMAP_TIMES_ROMAN_24);
    iText(450, 391, playerName, GLUT_BITMAP_TIMES_ROMAN_24);
}


// void give_input(){
// 	iSetColor(255, 255, 255);
//     iText(650, 410, "Player Name???", GLUT_BITMAP_TIMES_ROMAN_24);
//     // iText(450, 391, playerName, GLUT_BITMAP_TIMES_ROMAN_24);
// }

void playmusic()
{
	if (current == 0 && music == 1)
	{
		PlaySound("resources\\home.wav", NULL, SND_LOOP | SND_ASYNC);
	}
}
void nevigate(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		
		PlaySound("resources\\move.wav", NULL, SND_ASYNC);
		if(mx >= 12 && mx <= 67 && my >= 747 && my <= 780){
			current = 25;
		}
		if (mx >= 450 && mx <= 746 && my >= 179 && my <= 214)
		{
			exit(0);
		}
		if (mx >= 453 && mx <= 742 && my >= 239 && my <= 276)
		{
			current = 3;
		}
		if (mx >= 450 && mx <= 746 && my >= 296 && my <= 338)
		{
			current = 1;
		}
	}
}

void Ai_mode(int current, int button, int state, int mx, int my)
{
	if (current == 3 && easy == 0 && medium == 0 && hard == 0)
	{
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if (mx >= 530 && mx <= 670 && my >= 501 && my <= 567)
			{
				easy = 1;
			}
			else if (mx >= 530 && mx <= 670 && my >= 419 && my <= 482)
			{
				medium = 1;
			}
			else if (mx >= 530 && mx <= 670 && my >= 336 && my <= 397)
			{
				hard = 1;
			}
		}
	}
}

void settings(int button, int state, int mx, int my)
{
	if(mx >= 3 && mx <= 85 && my >= 771 && my <= 795){
		current = 0;
		playmusic();
	}
	if(mx >= 366 && mx <= 840 && my >= 444 && my <= 567){
		current = 50;
	}
	if(mx >= 366 && mx <= 840 && my >= 229 && my <= 357){
		current = 100;
	}
}
// int done = 0;

//--------------------------------------------------------------AI part-----------------------------------------------------------------------------------------

// ----------------------------------------------------------------------Medium----------------------------------------------------------------

typedef struct {
    int row, col;
} Move_in_medium;

int check_available_moves_mid(char board[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board[i][j] == ' ')
			{
				return 1;
			}
		}
	}
	return 0;
}

int evalute_the_board_mid(char board[3][3]) {

    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            if (board[i][0] == 'x')
                return +10;
            else if (board[i][0] == 'o')
                return -3;
        }
    }

    for (int j = 0; j < 3; j++) {
        if (board[0][j] == board[1][j] && board[1][j] == board[2][j]) {
            if (board[0][j] == 'x')
                return +10;
            else if (board[0][j] == 'o')
                return -3;
        }
    }

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        if (board[0][0] == 'x')
            return +10;
        else if (board[0][0] == 'o')
            return 0;
    }

    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        if (board[0][2] == 'x')
            return +10;
        else if (board[0][2] == 'o')
            return -3;
    }

    return 0; 
}

int medium_diff(char board[3][3], int depth, int is_max) {
    int gain_point = evalute_the_board_mid(board);

    if (gain_point == 10)
        return gain_point;

    if (gain_point == -3)
        return gain_point;

    if (!check_available_moves_mid(board))
        return 0;

    if (is_max) {
        int best = -1000;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
              
                if (board[i][j] == ' ') {
                   
                    board[i][j] = 'x';

                    best = (best < medium_diff(board, depth + 1, 0)) ? medium_diff(board, depth + 1, 0) : best;

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
                    
                    board[i][j] = 'o';

                    best = (best > medium_diff(board, depth + 1, 1)) ? medium_diff(board, depth + 1, 1) : best;

                    board[i][j] = ' ';
                }
            }
        }
		return best; 
	} 
} 


Move_in_medium find_medium_Move(char board[3][3]) 
{ 
	int bestVal = -1000; 
	Move_in_medium optimal_move; 
	optimal_move.row = -1; 
	optimal_move.col = -1; 
	for (int i = 0; i<3; i++) 
	{ 
		for (int j = 0; j<3; j++) 
		{ 
		
			if (board[i][j]==' ') 
			{ 
				
				board[i][j] = 'x'; 

			
				int moveVal = medium_diff(board, 0, 0); 

				board[i][j] = ' '; 
				if (moveVal > bestVal) 
				{ 
					optimal_move.row = i; 
					optimal_move.col = j; 
					bestVal = moveVal; 
				} 
			} 
		} 
	}  

	return optimal_move; 
} 


// ________________________________________________________________________Hard_______________________________________________________________________
typedef struct
{
	int row, col;
} Move;

int check_available_moves(char board[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
	{
		if (board[i][j] == ' ')
		{
			return 1;
		}
	}
	}
	return 0;
}

int evalute_the_board(char board[3][3])
{

	for (int i = 0; i < 3; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
		{
			if (board[i][0] == 'x')
				return 10;
			else if (board[i][0] == 'o')
				return -10;
		}
	}
	for (int j = 0; j < 3; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j])
		{
			if (board[0][j] == 'x')
				return 10;
			else if (board[0][j] == 'o')
				return -10;
		}
	}

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
	{
		if (board[0][0] == 'x')
			return 10;
		else if (board[0][0] == 'o')
			return -10;
	}

	if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
	{
		if (board[0][2] == 'x')
			return 10;
		else if (board[0][2] == 'o')
			return -10;
	}

	return 0;
}

int minimax(char board[3][3], int depth, int is_max)
{
	int gain_point = evalute_the_board(board);

	if (gain_point == 10)
	{
		return (gain_point - depth);
	}

	if (gain_point == -10)
	{
		return (gain_point + depth);
	}

	if (!check_available_moves(board))
		return 0;

	if (is_max)
	{
		int best = INT_MIN;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (board[i][j] == ' ')
				{
					board[i][j] = 'x';
					best = (best < minimax(board, depth + 1, 0)) ? minimax(board, depth + 1, 0) : best;
					board[i][j] = ' ';
				}
			}
		}
		return best;
	}
	else
	{
		int best = INT_MAX;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (board[i][j] == ' ')
				{
					board[i][j] = 'o';
					best = (best > minimax(board, depth + 1, 0)) ? minimax(board, depth + 1, 0) : best;
					board[i][j] = ' ';
				}
			}
		}
		return best;
	}
}

Move find_the_most_optimal_move(char board[3][3])
{
	int best_value = INT_MIN;
	Move optimal_move = {-1, -1};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board[i][j] == ' ')
			{
				board[i][j] = 'x';
				int move_cost = minimax(board, 0, 0);
				board[i][j] = ' ';

				if (move_cost > best_value)
				{
					optimal_move.row = i;
					optimal_move.col = j;
					best_value = move_cost;
				}
			}
		}
	}

	return optimal_move;
}

// ---------------------------------------win cndition part-----------------------------------------------------------
int checkWin(char board[3][3], char symbol)
{
	for (int i = 0; i < 3; i++)
	{
		if (board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol)
		{
			return 1;
		}
		if (board[0][i] == symbol && board[1][i] == symbol && board[2][i] == symbol)
		{
			return 1;
		}
	}
	if (board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol)
	{
		return 1;
	}
	if (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol)
	{
		return 1;
	}
	return 0;
}

// ---------------------------------------win cndition part-----------------------------------------------------------
int checkDraw(char board[3][3])
{
	int flag = 1;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board[i][j] == ' ')
			{
				flag = 0;
				break;
			}
		}
	}
	if (flag == 1)
		return 1;
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
	// printf("%d \t %d \t %d \t %d\n", win_brd, win_brd1, win_brd2, win_brd3);
	if (current == 0)
	{   newgame();
		iShowBMP(0, 0, "resources\\Game_homepage.bmp");
		iShowBMP2(0,720, "resources\\settings.bmp", 0);
		
	}else if(current == 25){
		iShowBMP(0, 0, "resources\\setting_pic.bmp");
	}else if(current == 50){
		iShowBMP(0,0,"resources\\Rules_page.bmp");
	}else if((current == 2 || current == 1) && done_bord1 == 1 && done_bord2 == 1 && done_bord3 == 1 && done_bord4 == 1){
		Sleep(2000);
		if(win_data == 1){
		PlaySound("resources\\win_end.wav", NULL, SND_ASYNC);
		win_data = 0;
		}
		iShowBMP(0, 0, "resources\\Who won The Game.bmp");
		if(o_s_point == x_s_point){
				
				iShowBMP(440, 680, "resources\\draw_con.bmp");
				// printf("%d \t %d \n",o_s_point,x_s_point);
		    }
        else if(o_s_point >= x_s_point){
				iShowBMP(440, 680, "resources\\owon_con.bmp");
				// printf("%d \t %d \n",o_s_point,x_s_point);
		}
		else if(x_s_point > o_s_point){
			iShowBMP(440, 680, "resources\\xwon_con.bmp");
			// printf("%d \t %d \n",o_s_point,x_s_point);
			}
		iShowBMP2(565, 100, "resources\\replay.bmp", 0);
	}
	else if(current == 100){
		drawScorePage();
	}
	else if((current == 3 || current == 4) && done_bord1 == 1 && done_bord2 == 1 && done_bord3 == 1 && done_bord4 == 1){
		Sleep(2000);
		if(win_data == 1){
		PlaySound("resources\\win_end.wav", NULL, SND_ASYNC);
		win_data = 0;
		}
		iShowBMP(0,0,"resources\\vsComp_end.bmp");
		drawGameOverPage();
	}
	else if (current == 3 && easy == 0 && medium == 0 && hard == 0)
	{
		iShowBMP(0, 0, "resources\\Game_homepage-blur.bmp");
		iShowBMP(437, 230, "resources\\AI_mode.bmp");
	}
	else if (current > 0)
	{
		iShowBMP(0, 0, "resources\\project_bg.bmp");
		iShowBMP(210, 10, "resources\\tic_tac_game-crop (2).bmp");
		iShowBMP(210, 400, "resources\\tic_tac_game-crop (2).bmp");
		iShowBMP(600, 10, "resources\\tic_tac_game-crop (2).bmp");
		iShowBMP(600, 400, "resources\\tic_tac_game-crop (2).bmp");

		if (checkWin(board_1, 'x'))
		{
			done_bord1 = 1;
			if(win_brd == 0){
				x_s_point += 2;
				win_brd = 1;
			}
			
			iShowBMP(239, 350, "resources\\xwon.bmp");
			iShowBMP(239, 40, "resources\\X_win.bmp");
			if (data1 == 1)
			{
				PlaySound("resources\\win_m.wav", NULL, SND_ASYNC);
				data1 = 0;
			}
		}
		else if (!checkWin(board_1, 'o'))
		{
			if (block1_1 == 1)
			{
				iShowBMP2(250, 50, "resources\\cross.bmp", 0);
			}
			if (block1_2 == 1)
			{
				iShowBMP2(365, 50, "resources\\cross.bmp", 0);
			}
			if (block1_3 == 1)
			{
				iShowBMP2(480, 50, "resources\\cross.bmp", 0);
			}
			if (block1_4 == 1)
			{
				iShowBMP2(250, 165, "resources\\cross.bmp", 0);
			}
			if (block1_5 == 1)
			{
				iShowBMP2(365, 165, "resources\\cross.bmp", 0);
			}
			if (block1_6 == 1)
			{
				iShowBMP2(480, 165, "resources\\cross.bmp", 0);
			}
			if (block1_7 == 1)
			{
				iShowBMP2(250, 280, "resources\\cross.bmp", 0);
			}
			if (block1_8 == 1)
			{
				iShowBMP2(365, 280, "resources\\cross.bmp", 0);
			}
			if (block1_9 == 1)
			{
				iShowBMP2(480, 280, "resources\\cross.bmp", 0);
			}
		}

		if (checkWin(board_2, 'x'))
		{
			done_bord2 = 1;
			if(win_brd1 == 0){
				x_s_point += 2;
				win_brd1 = 1;
			}
			iShowBMP(238, 740, "resources\\xwon.bmp");
			iShowBMP(238, 430, "resources\\X_win.bmp");
			
			if (data2 == 1)
			{
				PlaySound("resources\\win_m.wav", NULL, SND_ASYNC);
				data2 = 0;
			}
		}
		else if (!checkWin(board_2, 'o'))
		{
			if (block2_1 == 1)
			{
				iShowBMP2(250, 440, "resources\\cross.bmp", 0);
			}
			if (block2_2 == 1)
			{
				iShowBMP2(365, 440, "resources\\cross.bmp", 0);
			}
			if (block2_3 == 1)
			{
				iShowBMP2(480, 440, "resources\\cross.bmp", 0);
			}
			if (block2_4 == 1)
			{
				iShowBMP2(250, 555, "resources\\cross.bmp", 0);
			}
			if (block2_5 == 1)
			{
				iShowBMP2(365, 555, "resources\\cross.bmp", 0);
			}
			if (block2_6 == 1)
			{
				iShowBMP2(480, 555, "resources\\cross.bmp", 0);
			}
			if (block2_7 == 1)
			{
				iShowBMP2(250, 670, "resources\\cross.bmp", 0);
			}
			if (block2_8 == 1)
			{
				iShowBMP2(365, 670, "resources\\cross.bmp", 0);
			}
			if (block2_9 == 1)
			{
				iShowBMP2(480, 670, "resources\\cross.bmp", 0);
			}
		}

		if (checkWin(board_3, 'x'))
		{
			done_bord3 = 1;
			if(win_brd2 == 0){
				x_s_point += 2;
				win_brd2 = 1;
			}
			iShowBMP(625, 40, "resources\\X_win.bmp");
			iShowBMP(625, 350, "resources\\xwon.bmp");
			if (data3 == 1)
			{
				PlaySound("resources\\win_m.wav", NULL, SND_ASYNC);
				data3 = 0;
			}
		}
		else if (!checkWin(board_3, 'o'))
		{
			if (block3_1 == 1)
			{
				iShowBMP2(640, 50, "resources\\cross.bmp", 0);
			}
			if (block3_2 == 1)
			{
				iShowBMP2(755, 50, "resources\\cross.bmp", 0);
			}
			if (block3_3 == 1)
			{
				iShowBMP2(870, 50, "resources\\cross.bmp", 0);
			}
			if (block3_4 == 1)
			{
				iShowBMP2(640, 165, "resources\\cross.bmp", 0);
			}
			if (block3_5 == 1)
			{
				iShowBMP2(755, 165, "resources\\cross.bmp", 0);
			}
			if (block3_6 == 1)
			{
				iShowBMP2(870, 165, "resources\\cross.bmp", 0);
			}
			if (block3_7 == 1)
			{
				iShowBMP2(640, 280, "resources\\cross.bmp", 0);
			}
			if (block3_8 == 1)
			{
				iShowBMP2(755, 280, "resources\\cross.bmp", 0);
			}
			if (block3_9 == 1)
			{
				iShowBMP2(870, 280, "resources\\cross.bmp", 0);
			}
		}

		if (checkWin(board_4, 'x'))
		{
			done_bord4 = 1;
			if(win_brd3 == 0){
				x_s_point += 2;
				win_brd3 = 1;
			}
			iShowBMP(625, 430, "resources\\X_win.bmp");
			iShowBMP(625, 740, "resources\\xwon.bmp");
			if (data4 == 1)
			{
				PlaySound("resources\\win_m.wav", NULL, SND_ASYNC);
				data4 = 0;
			}
		}
		else if (!checkWin(board_4, 'o'))
		{
			if (block4_1 == 1)
			{
				iShowBMP2(640, 440, "resources\\cross.bmp", 0);
			}
			if (block4_2 == 1)
			{
				iShowBMP2(755, 440, "resources\\cross.bmp", 0);
			}
			if (block4_3 == 1)
			{
				iShowBMP2(870, 440, "resources\\cross.bmp", 0);
			}
			if (block4_4 == 1)
			{
				iShowBMP2(640, 555, "resources\\cross.bmp", 0);
			}
			if (block4_5 == 1)
			{
				iShowBMP2(755, 555, "resources\\cross.bmp", 0);
			}
			if (block4_6 == 1)
			{
				iShowBMP2(870, 555, "resources\\cross.bmp", 0);
			}
			if (block4_7 == 1)
			{
				iShowBMP2(640, 670, "resources\\cross.bmp", 0);
			}
			if (block4_8 == 1)
			{
				iShowBMP2(755, 670, "resources\\cross.bmp", 0);
			}
			if (block4_9 == 1)
			{
				iShowBMP2(870, 670, "resources\\cross.bmp", 0);
			}
		}

		if (checkWin(board_1, 'o'))
		{
			done_bord1 = 1;
			if(win_brd == 0){
				if(hard == 1){
					score += 10;
				    win_brd = 1;
				}else if(medium == 1){
					score += 5;
				    win_brd = 1;
				}else if(easy == 1){
					score += 1;
				    win_brd = 1;
				}else{
				o_s_point += 2;
				win_brd = 1;
				}
			}
			iShowBMP(239, 40, "resources\\X_win.bmp");
			iShowBMP(239, 350, "resources\\owon.bmp");
			if (data5 == 1)
			{
				PlaySound("resources\\win_m.wav", NULL, SND_ASYNC);
				data5 = 0;
			}
		}
		else if (!checkWin(board_1, 'x'))
		{
			if (block1_1 == 2)
			{
				iShowBMP2(230, 30, "resources\\circle.bmp", 0);
			}
			if (block1_2 == 2)
			{
				iShowBMP2(342, 30, "resources\\circle.bmp", 0);
			}
			if (block1_3 == 2)
			{
				iShowBMP2(456, 30, "resources\\circle.bmp", 0);
			}
			if (block1_4 == 2)
			{
				iShowBMP2(230, 142, "resources\\circle.bmp", 0);
			}
			if (block1_5 == 2)
			{
				iShowBMP2(342, 142, "resources\\circle.bmp", 0);
			}
			if (block1_6 == 2)
			{
				iShowBMP2(456, 142, "resources\\circle.bmp", 0);
			}
			if (block1_7 == 2)
			{
				iShowBMP2(230, 254, "resources\\circle.bmp", 0);
			}
			if (block1_8 == 2)
			{
				iShowBMP2(342, 254, "resources\\circle.bmp", 0);
			}
			if (block1_9 == 2)
			{
				iShowBMP2(456, 254, "resources\\circle.bmp", 0);
			}
		}

		if (checkWin(board_2, 'o'))
		{
			done_bord2 = 1;
			if(win_brd1 == 0){
				if(hard == 1){
					score += 10;
				    win_brd1 = 1;
				}else if(medium == 1){
					score += 5;
				    win_brd1 = 1;
				}else if(easy == 1){
					score += 1;
				    win_brd1 = 1;
				}else{
				o_s_point += 2;
				win_brd1 = 1;
				}
			}
			iShowBMP(239, 430, "resources\\X_win.bmp");
			iShowBMP(239, 740, "resources\\owon.bmp");
			if (data6 == 1)
			{
				PlaySound("resources\\win_m.wav", NULL, SND_ASYNC);
				data6 = 0;
			}
		}
		else if (!checkWin(board_2, 'x'))
		{
			if (block2_1 == 2)
			{
				iShowBMP2(230, 420, "resources\\circle.bmp", 0);
			}
			if (block2_2 == 2)
			{
				iShowBMP2(342, 420, "resources\\circle.bmp", 0);
			}
			if (block2_3 == 2)
			{
				iShowBMP2(456, 420, "resources\\circle.bmp", 0);
			}
			if (block2_4 == 2)
			{
				iShowBMP2(230, 532, "resources\\circle.bmp", 0);
			}
			if (block2_5 == 2)
			{
				iShowBMP2(342, 532, "resources\\circle.bmp", 0);
			}
			if (block2_6 == 2)
			{
				iShowBMP2(456, 532, "resources\\circle.bmp", 0);
			}
			if (block2_7 == 2)
			{
				iShowBMP2(230, 644, "resources\\circle.bmp", 0);
			}
			if (block2_8 == 2)
			{
				iShowBMP2(342, 644, "resources\\circle.bmp", 0);
			}
			if (block2_9 == 2)
			{
				iShowBMP2(456, 644, "resources\\circle.bmp", 0);
			}
		}

		if (checkWin(board_3, 'o'))
		{
			done_bord3 = 1;
			if(win_brd2 == 0){
				if(hard == 1){
					score += 10;
				    win_brd2 = 1;
				}else if(medium == 1){
					score += 5;
				    win_brd2 = 1;
				}else if(easy == 1){
					score += 1;
				    win_brd2 = 1;
				}else{
				o_s_point += 2;
				win_brd2 = 1;
				}
			}
			iShowBMP(625, 40, "resources\\X_win.bmp");
			iShowBMP(625, 350, "resources\\owon.bmp");
			if (data7 == 1)
			{
				PlaySound("resources\\win_m.wav", NULL, SND_ASYNC);
				data7 = 0;
			}
		}
		else if (!checkWin(board_3, 'x'))
		{
			if (block3_1 == 2)
			{
				iShowBMP2(620, 30, "resources\\circle.bmp", 0);
			}
			if (block3_2 == 2)
			{
				iShowBMP2(732, 30, "resources\\circle.bmp", 0);
			}
			if (block3_3 == 2)
			{
				iShowBMP2(844, 30, "resources\\circle.bmp", 0);
			}
			if (block3_4 == 2)
			{
				iShowBMP2(620, 142, "resources\\circle.bmp", 0);
			}
			if (block3_5 == 2)
			{
				iShowBMP2(732, 142, "resources\\circle.bmp", 0);
			}
			if (block3_6 == 2)
			{
				iShowBMP2(844, 142, "resources\\circle.bmp", 0);
			}
			if (block3_7 == 2)
			{
				iShowBMP2(620, 254, "resources\\circle.bmp", 0);
			}
			if (block3_8 == 2)
			{
				iShowBMP2(732, 254, "resources\\circle.bmp", 0);
			}
			if (block3_9 == 2)
			{
				iShowBMP2(844, 254, "resources\\circle.bmp", 0);
			}
		}

		if (checkWin(board_4, 'o'))
		{
			done_bord4 = 1;
			if(win_brd3 == 0){
				if(hard == 1){
					score += 10;
				    win_brd3 = 1;
				}else if(medium == 1){
					score += 5;
				    win_brd3 = 1;
				}else if(easy == 1){
					score += 1;
				    win_brd3 = 1;
				}else{
				o_s_point += 2;
				win_brd3 = 1;
				}
			}
			iShowBMP(625, 430, "resources\\X_win.bmp");
			iShowBMP(625, 740, "resources\\owon.bmp");
			if (data8 == 1)
			{
				PlaySound("resources\\win_m.wav", NULL, SND_ASYNC);
				data8 = 0;
			}
		}
		else if (!checkWin(board_4, 'x'))
		{
			if (block4_1 == 2)
			{
				iShowBMP2(620, 420, "resources\\circle.bmp", 0);
			}
			if (block4_2 == 2)
			{
				iShowBMP2(732, 420, "resources\\circle.bmp", 0);
			}
			if (block4_3 == 2)
			{
				iShowBMP2(844, 420, "resources\\circle.bmp", 0);
			}
			if (block4_4 == 2)
			{
				iShowBMP2(620, 532, "resources\\circle.bmp", 0);
			}
			if (block4_5 == 2)
			{
				iShowBMP2(732, 532, "resources\\circle.bmp", 0);
			}
			if (block4_6 == 2)
			{
				iShowBMP2(844, 532, "resources\\circle.bmp", 0);
			}
			if (block4_7 == 2)
			{
				iShowBMP2(620, 654, "resources\\circle.bmp", 0);
			}
			if (block4_8 == 2)
			{
				iShowBMP2(732, 654, "resources\\circle.bmp", 0);
			}
			if (block4_9 == 2)
			{
				iShowBMP2(844, 654, "resources\\circle.bmp", 0);
			}
		}
		if (current == 1)
		{
			iShowBMP(514, 383, "resources\\x'sturn.bmp");
		}
		else if (current == 2)
		{
			iShowBMP(514, 383, "resources\\o'sturn.bmp");
		}
		if(!checkWin(board_1, 'x') && !checkWin(board_1, 'o')){
		if (checkDraw(board_1))
		{
			
			if(win_brd == 0 && done_bord1 == 0){
				done_bord1 = 1;
				if(hard == 1){
					score += 3;
				    win_brd = 1;
				}else if(medium == 1){
					score += 1;
				    win_brd = 1;
				}else{
					x_s_point += 1;
				    o_s_point += 1;
				   win_brd = 1;
				}
				
			}
			iShowBMP(239, 350, "resources\\draw.bmp");
			iShowBMP(239, 40, "resources\\X_win.bmp");
			if (dat1 == 1)
			{
				PlaySound("resources\\tie.wav", NULL, SND_ASYNC);
				dat1 = 0;
			}
		}
		}

		if(!checkWin(board_2, 'x') && !checkWin(board_2, 'o')){
		if (checkDraw(board_2))
		{
			
			if(win_brd1 == 0 && done_bord2 == 0){
				done_bord2 = 1;
				if(hard == 1){
					score += 3;
				    win_brd1 = 1;
				}else if(medium == 1){
					score += 1;
				    win_brd1 = 1;
				}else{
					x_s_point += 1;
				    o_s_point += 1;
				    win_brd1 = 1;
				}
				
				
			}
			iShowBMP(239, 740, "resources\\draw.bmp");
			iShowBMP(239, 430, "resources\\X_win.bmp");
			if (dat2 == 1)
			{
				PlaySound("resources\\tie.wav", NULL, SND_ASYNC);
				dat2 = 0;
			}
		}
		}

		if(!checkWin(board_3, 'x') && !checkWin(board_3, 'o')){
		if (checkDraw(board_3))
		{
			
			if(win_brd2 == 0 && done_bord3 == 0){
				done_bord3 = 1;
				if(hard == 1){
					score += 3;
				    win_brd2 = 1;
				}else if(medium == 1){
					score += 1;
				    win_brd2 = 1;
				}else{
					x_s_point += 1;
				    o_s_point += 1;
				    win_brd2 = 1;
				}
			}
			iShowBMP(625, 350, "resources\\draw.bmp");
			iShowBMP(625, 40, "resources\\X_win.bmp");
			if (dat3 == 1)
			{
				PlaySound("resources\\tie.wav", NULL, SND_ASYNC);
				dat3 = 0;
			}
		}
		}

		if(!checkWin(board_4, 'x') && !checkWin(board_4, 'o')){
		if (checkDraw(board_4))
		{
			
			if(win_brd3 == 0 && done_bord4 == 0){
				done_bord4 = 1;
				if(hard == 1){
					score += 3;
				    win_brd3 = 1;
				}else if(medium == 1){
					score += 1;
				    win_brd3 = 1;
				}else{
					x_s_point += 1;
				    o_s_point += 1;
				    win_brd3 = 1;
				}
				
			}
			iShowBMP(625, 740, "resources\\draw.bmp");
			iShowBMP(625, 430, "resources\\X_win.bmp");
			if (dat4 == 1)
			{
				PlaySound("resources\\tie.wav", NULL, SND_ASYNC);
				dat4 = 0;
			}
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
	if (current == 0)
	{
		nevigate(button, state, mx, my);
		playmusic();
	}else if((current == 2 || current == 1) && done_bord1 == 1 && done_bord2 == 1 && done_bord3 == 1 && done_bord4 == 1){
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if (mx >= 567 && mx <= 630 && my >= 106 && my <= 168)
			{
				PlaySound("resources\\move.wav", NULL, SND_ASYNC);
				current = 0;
				playmusic();
				
			}
		}
	}else if(current == 25){
		settings(button, state, mx, my);
	}else if(current == 50){
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			PlaySound("resources\\move.wav", NULL, SND_ASYNC);
			if(mx >= 977 && mx <= 1049 && my >= 90 && my <= 200){
				music = 1;
			}
			if(mx >= 15 && mx <= 106 && my >= 757 && my <= 778){
				
				current = 0;
				playmusic();
			}
			if(mx >= 824 && mx <= 895 && my >= 90 && my <= 200){
				music = 0;
			}
			
			
		}
	} 
	if((current == 3 || current == 4) && done_bord1 == 1 && done_bord2 == 1 && done_bord3 == 1 && done_bord4 == 1){
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			
			if (mx >= 445 && mx <= 743 && my >= 365 && my <= 414)
			{   
				PlaySound("resources\\move.wav", NULL, SND_ASYNC);
				isTextBoxActive = true;
			}
			
			if(mx >= 520 && mx <= 675 && my >= 250 && my <= 288){
				if(playerName[0] != '\0')
			{
				PlaySound("resources\\move.wav", NULL, SND_ASYNC);
				saveScore();
				current = 0;
				playmusic();
			}else{
			PlaySound("resources\\tie.wav", NULL, SND_ASYNC);
			}
			}
			}
	}else if(current == 100){
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			
			if (mx >= 929 && mx <= 1099 && my >= 635 && my <= 700)
			{
				PlaySound("resources\\move.wav", NULL, SND_ASYNC);
				current = 0;
				playmusic();
			}
		}
	}
	
	else if (current == 3 && easy == 0 && medium == 0 && hard == 0)
	{
		PlaySound("resources\\move.wav", NULL, SND_ASYNC);
		Ai_mode(current, button, state, mx, my);
	}
	else
	{
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			PlaySound("resources\\move.wav", NULL, SND_ASYNC);
			if (current == 1)

			{
				if (!checkWin(board_1, 'x') && !checkWin(board_1, 'o'))
				{
					if (mx >= 248 && mx <= 350 && my >= 46 && my <= 151 && board_1[0][0] == ' ')
					{
						block1_1 = 1;
						board_1[0][0] = 'x';
						current = value_altr(current);
					}

					if (mx >= 365 && mx <= 458 && my >= 46 && my <= 151 && board_1[0][1] == ' ')
					{
						block1_2 = 1;
						board_1[0][1] = 'x';
						current = value_altr(current);
					}

					if (mx >= 477 && mx <= 579 && my >= 46 && my <= 151 && board_1[0][2] == ' ')
					{
						block1_3 = 1;
						board_1[0][2] = 'x';
						current = value_altr(current);
					}

					if (mx >= 243 && mx <= 347 && my >= 168 && my <= 259 && board_1[1][0] == ' ')
					{
						block1_4 = 1;
						board_1[1][0] = 'x';
						current = value_altr(current);
					}

					if (mx >= 366 && mx <= 455 && my >= 171 && my <= 258 && board_1[1][1] == ' ')
					{
						block1_5 = 1;
						board_1[1][1] = 'x';
						current = value_altr(current);
					}

					if (mx >= 476 && mx <= 579 && my >= 169 && my <= 258 && board_1[1][2] == ' ')
					{
						block1_6 = 1;
						board_1[1][2] = 'x';
						current = value_altr(current);
					}

					if (mx >= 241 && mx <= 348 && my >= 280 && my <= 382 && board_1[2][0] == ' ')
					{
						block1_7 = 1;
						board_1[2][0] = 'x';
						current = value_altr(current);
					}

					if (mx >= 366 && mx <= 458 && my >= 280 && my <= 382 && board_1[2][1] == ' ')
					{
						block1_8 = 1;
						board_1[2][1] = 'x';
						current = value_altr(current);
					}

					if (mx >= 477 && mx <= 568 && my >= 280 && my <= 382 && block1_9 == 0 && board_1[2][2] == ' ')
					{
						block1_9 = 1;
						board_1[2][2] = 'x';
						// printf("%d ", block1_9);
						current = value_altr(current);
					}
				}

				if (!checkWin(board_2, 'x') && !checkWin(board_2, 'o'))
				{
					if (mx >= 241 && mx <= 348 && my >= 437 && my <= 541 && board_2[0][0] == ' ')
					{
						block2_1 = 1;
						board_2[0][0] = 'x';
						current = value_altr(current);
					}

					if (mx >= 365 && mx <= 458 && my >= 437 && my <= 541 && board_2[0][1] == ' ')
					{
						block2_2 = 1;
						board_2[0][1] = 'x';
						current = value_altr(current);
					}

					if (mx >= 476 && mx <= 568 && my >= 437 && my <= 541 && board_2[0][2] == ' ')
					{
						block2_3 = 1;
						board_2[0][2] = 'x';
						current = value_altr(current);
					}

					if (mx >= 244 && mx <= 348 && my >= 557 && my <= 650 && board_2[1][0] == ' ')
					{
						block2_4 = 1;
						board_2[1][0] = 'x';
						current = value_altr(current);
					}

					if (mx >= 366 && mx <= 458 && my >= 557 && my <= 650 && board_2[1][1] == ' ')
					{
						block2_5 = 1;
						board_2[1][1] = 'x';
						current = value_altr(current);
					}

					if (mx >= 475 && mx <= 579 && my >= 557 && my <= 650 && board_2[1][2] == ' ')
					{
						block2_6 = 1;
						board_2[1][2] = 'x';
						current = value_altr(current);
					}

					if (mx >= 243 && mx <= 349 && my >= 669 && my <= 773 && board_2[2][0] == ' ')
					{
						block2_7 = 1;
						board_2[2][0] = 'x';
						current = value_altr(current);
					}
					if (mx >= 366 && mx <= 457 && my >= 669 && my <= 773 && board_2[2][1] == ' ')
					{
						block2_8 = 1;
						board_2[2][1] = 'x';
						current = value_altr(current);
					}

					if (mx >= 475 && mx <= 573 && my >= 669 && my <= 773 && board_2[2][2] == ' ')
					{
						block2_9 = 1;
						board_2[2][2] = 'x';
						current = value_altr(current);
					}
				}

				if (!checkWin(board_3, 'x') && !checkWin(board_3, 'o'))
				{
					if (mx >= 638 && mx <= 738 && my >= 50 && my <= 151 && board_3[0][0] == ' ')
					{
						block3_1 = 1;
						board_3[0][0] = 'x';
						current = value_altr(current);
					}
					if (mx >= 755 && mx <= 847 && my >= 50 && my <= 151 && board_3[0][1] == ' ')
					{
						block3_2 = 1;
						board_3[0][1] = 'x';
						current = value_altr(current);
					}

					if (mx >= 866 && mx <= 970 && my >= 50 && my <= 151 && board_3[0][2] == ' ')
					{
						block3_3 = 1;
						board_3[0][2] = 'x';
						current = value_altr(current);
					}

					if (mx >= 633 && mx <= 738 && my >= 167 && my <= 260 && board_3[1][0] == ' ')
					{
						block3_4 = 1;
						board_3[1][0] = 'x';
						current = value_altr(current);
					}

					if (mx >= 755 && mx <= 848 && my >= 167 && my <= 260 && board_3[1][1] == ' ')
					{
						block3_5 = 1;
						board_3[1][1] = 'x';
						current = value_altr(current);
					}

					if (mx >= 867 && mx <= 967 && my >= 167 && my <= 260 && board_3[1][2] == ' ')
					{
						block3_6 = 1;
						board_3[1][2] = 'x';
						current = value_altr(current);
					}

					if (mx >= 633 && mx <= 736 && my >= 280 && my <= 380 && board_3[2][0] == ' ')
					{
						block3_7 = 1;
						board_3[2][0] = 'x';
						current = value_altr(current);
					}

					if (mx >= 755 && mx <= 846 && my >= 280 && my <= 380 && board_3[2][1] == ' ')
					{
						block3_8 = 1;
						board_3[2][1] = 'x';
						current = value_altr(current);
					}

					if (mx >= 867 && mx <= 967 && my >= 280 && my <= 380 && board_3[2][2] == ' ')
					{
						block3_9 = 1;
						board_3[2][2] = 'x';
						current = value_altr(current);
					}
				}

				if (!checkWin(board_4, 'x') && !checkWin(board_4, 'o'))
				{
					if (mx >= 639 && mx <= 737 && my >= 437 && my <= 540 && board_4[0][0] == ' ')
					{
						block4_1 = 1;
						board_4[0][0] = 'x';
						current = value_altr(current);
					}

					if (mx >= 755 && mx <= 846 && my >= 437 && my <= 540 && board_4[0][1] == ' ')
					{
						block4_2 = 1;
						board_4[0][1] = 'x';
						current = value_altr(current);
					}

					if (mx >= 867 && mx <= 968 && my >= 437 && my <= 540 && board_4[0][2] == ' ')
					{
						block4_3 = 1;
						board_4[0][2] = 'x';
						current = value_altr(current);
					}

					if (mx >= 634 && mx <= 738 && my >= 558 && my <= 648 && board_4[1][0] == ' ')
					{
						block4_4 = 1;
						board_4[1][0] = 'x';
						current = value_altr(current);
					}

					if (mx >= 755 && mx <= 842 && my >= 558 && my <= 648 && board_4[1][1] == ' ')
					{
						block4_5 = 1;
						board_4[1][1] = 'x';
						current = value_altr(current);
					}

					if (mx >= 867 && mx <= 967 && my >= 558 && my <= 648 && board_4[1][2] == ' ')
					{
						block4_6 = 1;
						board_4[1][2] = 'x';
						current = value_altr(current);
					}

					if (mx >= 634 && mx <= 736 && my >= 669 && my <= 772 && board_4[2][0] == ' ')
					{
						block4_7 = 1;
						board_4[2][0] = 'x';
						current = value_altr(current);
					}

					if (mx >= 759 && mx <= 846 && my >= 669 && my <= 772 && board_4[2][1] == ' ')
					{
						block4_8 = 1;
						board_4[2][1] = 'x';
						current = value_altr(current);
					}

					if (mx >= 870 && mx <= 958 && my >= 669 && my <= 772 && board_4[2][2] == ' ')
					{
						block4_9 = 1;
						board_4[2][2] = 'x';
						current = value_altr(current);
					}
				}
			}

			if (current == 2)
			{
				if (!checkWin(board_1, 'x') && !checkWin(board_1, 'o'))
				{
					if (mx >= 248 && mx <= 350 && my >= 46 && my <= 151 && board_1[0][0] == ' ')
					{
						block1_1 = 2;
						board_1[0][0] = 'o';
						current = value_altr(current);
					}

					if (mx >= 365 && mx <= 458 && my >= 46 && my <= 151 && board_1[0][1] == ' ')
					{
						block1_2 = 2;
						board_1[0][1] = 'o';
						current = value_altr(current);
					}

					if (mx >= 477 && mx <= 579 && my >= 46 && my <= 151 && board_1[0][2] == ' ')
					{
						block1_3 = 2;
						board_1[0][2] = 'o';
						current = value_altr(current);
					}

					if (mx >= 243 && mx <= 347 && my >= 168 && my <= 259 && board_1[1][0] == ' ')
					{
						block1_4 = 2;
						board_1[1][0] = 'o';
						current = value_altr(current);
					}

					if (mx >= 366 && mx <= 455 && my >= 171 && my <= 258 && board_1[1][1] == ' ')
					{
						block1_5 = 2;
						board_1[1][1] = 'o';
						current = value_altr(current);
					}

					if (mx >= 476 && mx <= 579 && my >= 169 && my <= 258 && board_1[1][2] == ' ')
					{
						block1_6 = 2;
						board_1[1][2] = 'o';
						current = value_altr(current);
					}

					if (mx >= 241 && mx <= 348 && my >= 280 && my <= 382 && board_1[2][0] == ' ')
					{
						block1_7 = 2;
						board_1[2][0] = 'o';
						current = value_altr(current);
					}

					if (mx >= 366 && mx <= 458 && my >= 280 && my <= 382 && board_1[2][1] == ' ')
					{
						block1_8 = 2;
						board_1[2][1] = 'o';
						current = value_altr(current);
					}

					if (mx >= 477 && mx <= 568 && my >= 280 && my <= 382 && block1_9 == 0 && board_1[2][2] == ' ')
					{
						block1_9 = 2;
						board_1[2][2] = 'o';
						current = value_altr(current);
					}
				}

				// board-2-----------------------------------------------------------------------------------------------------------------

				if (!checkWin(board_2, 'x') && !checkWin(board_2, 'o'))
				{
					if (mx >= 241 && mx <= 348 && my >= 437 && my <= 541 && board_2[0][0] == ' ')
					{
						block2_1 = 2;
						board_2[0][0] = 'o';
						current = value_altr(current);
					}

					if (mx >= 365 && mx <= 458 && my >= 437 && my <= 541 && board_2[0][1] == ' ')
					{
						block2_2 = 2;
						board_2[0][1] = 'o';
						current = value_altr(current);
					}

					if (mx >= 476 && mx <= 568 && my >= 437 && my <= 541 && board_2[0][2] == ' ')
					{
						block2_3 = 2;
						board_2[0][2] = 'o';
						current = value_altr(current);
					}

					if (mx >= 244 && mx <= 348 && my >= 557 && my <= 650 && board_2[1][0] == ' ')
					{
						block2_4 = 2;
						board_2[1][0] = 'o';
						current = value_altr(current);
					}

					if (mx >= 366 && mx <= 458 && my >= 557 && my <= 650 && board_2[1][1] == ' ')
					{
						block2_5 = 2;
						board_2[1][1] = 'o';
						current = value_altr(current);
					}

					if (mx >= 475 && mx <= 579 && my >= 557 && my <= 650 && board_2[1][2] == ' ')
					{
						block2_6 = 2;
						board_2[1][2] = 'o';
						current = value_altr(current);
					}

					if (mx >= 243 && mx <= 349 && my >= 669 && my <= 773 && board_2[2][0] == ' ')
					{
						block2_7 = 2;
						board_2[2][0] = 'o';
						current = value_altr(current);
					}

					if (mx >= 366 && mx <= 457 && my >= 669 && my <= 773 && board_2[2][1] == ' ')
					{
						block2_8 = 2;
						board_2[2][1] = 'o';
						current = value_altr(current);
					}

					if (mx >= 475 && mx <= 573 && my >= 669 && my <= 773 && board_2[2][2] == ' ')
					{
						block2_9 = 2;
						board_2[2][2] = 'o';
						current = value_altr(current);
					}
				}

				// board-3 ---------------------------------------------------------------------------------------------------------------

				if (!checkWin(board_3, 'x') && !checkWin(board_3, 'o'))
				{
					if (mx >= 638 && mx <= 738 && my >= 50 && my <= 151 && board_3[0][0] == ' ')
					{
						block3_1 = 2;
						board_3[0][0] = 'o';
						current = value_altr(current);
					}

					if (mx >= 755 && mx <= 847 && my >= 50 && my <= 151 && board_3[0][1] == ' ')
					{
						block3_2 = 2;
						board_3[0][1] = 'o';
						current = value_altr(current);
					}

					if (mx >= 866 && mx <= 970 && my >= 50 && my <= 151 && board_3[0][2] == ' ')
					{
						block3_3 = 2;
						board_3[0][2] = 'o';
						current = value_altr(current);
					}

					if (mx >= 633 && mx <= 738 && my >= 167 && my <= 260 && board_3[1][0] == ' ')
					{
						block3_4 = 2;
						board_3[1][0] = 'o';
						current = value_altr(current);
					}

					if (mx >= 755 && mx <= 848 && my >= 167 && my <= 260 && board_3[1][1] == ' ')
					{
						block3_5 = 2;
						board_3[1][1] = 'o';
						current = value_altr(current);
					}

					if (mx >= 867 && mx <= 967 && my >= 167 && my <= 260 && board_3[1][2] == ' ')
					{
						block3_6 = 2;
						board_3[1][2] = 'o';
						current = value_altr(current);
					}

					if (mx >= 633 && mx <= 736 && my >= 280 && my <= 380 && board_3[2][0] == ' ')
					{
						block3_7 = 2;
						board_3[2][0] = 'o';
						current = value_altr(current);
					}

					if (mx >= 755 && mx <= 846 && my >= 280 && my <= 380 && board_3[2][1] == ' ')
					{
						block3_8 = 2;
						board_3[2][1] = 'o';
						current = value_altr(current);
					}

					if (mx >= 867 && mx <= 967 && my >= 280 && my <= 380 && block3_9 == 0 && board_3[2][2] == ' ')
					{
						block3_9 = 2;
						board_3[2][2] = 'o';
						current = value_altr(current);
					}
				}

				// board-4 -----------------------------------------------------------------------------------------------------------------------------------------

				if (!checkWin(board_4, 'x') && !checkWin(board_4, 'o'))
				{
					if (mx >= 639 && mx <= 737 && my >= 437 && my <= 540 && board_4[0][0] == ' ')
					{
						block4_1 = 2;
						board_4[0][0] = 'o';
						current = value_altr(current);
					}

					if (mx >= 755 && mx <= 846 && my >= 437 && my <= 540 && board_4[0][1] == ' ')
					{
						block4_2 = 2;
						board_4[0][1] = 'o';
						current = value_altr(current);
					}

					if (mx >= 867 && mx <= 968 && my >= 437 && my <= 540 && board_4[0][2] == ' ')
					{
						block4_3 = 2;
						board_4[0][2] = 'o';
						current = value_altr(current);
					}

					if (mx >= 634 && mx <= 738 && my >= 558 && my <= 648 && board_4[1][0] == ' ')
					{
						block4_4 = 2;
						board_4[1][0] = 'o';
						current = value_altr(current);
					}

					if (mx >= 755 && mx <= 842 && my >= 558 && my <= 648 && board_4[1][1] == ' ')
					{
						block4_5 = 2;
						board_4[1][1] = 'o';
						current = value_altr(current);
					}

					if (mx >= 867 && mx <= 967 && my >= 558 && my <= 648 && board_4[1][2] == ' ')
					{
						block4_6 = 2;
						board_4[1][2] = 'o';
						current = value_altr(current);
					}

					if (mx >= 634 && mx <= 736 && my >= 669 && my <= 772 && board_4[2][0] == ' ')
					{
						block4_7 = 2;
						board_4[2][0] = 'o';
						current = value_altr(current);
					}

					if (mx >= 759 && mx <= 846 && my >= 669 && my <= 772 && board_4[2][1] == ' ')
					{
						block4_8 = 2;
						board_4[2][1] = 'o';
						current = value_altr(current);
					}

					if (mx >= 870 && mx <= 958 && my >= 669 && my <= 772 && board_4[2][2] == ' ')
					{
						block4_9 = 2;
						board_4[2][2] = 'o';
						current = value_altr(current);
					}
				}
			}

			if (current == 3)
			{
				if (!checkWin(board_1, 'x') && !checkWin(board_1, 'o'))
				{

					if (mx >= 248 && mx <= 350 && my >= 46 && my <= 151 && board_1[0][0] == ' ')
					{
						block1_1 = 2;
						board_1[0][0] = 'o';
						current = value_altr1(current);
						player_at1 = 1;
					}
					if (mx >= 365 && mx <= 458 && my >= 46 && my <= 151 && board_1[0][1] == ' ')
					{
						block1_2 = 2;
						board_1[0][1] = 'o';
						current = value_altr1(current);
						player_at1 = 1;
					}

					if (mx >= 477 && mx <= 579 && my >= 46 && my <= 151 && board_1[0][2] == ' ')
					{
						block1_3 = 2;
						board_1[0][2] = 'o';
						current = value_altr1(current);
						player_at1 = 1;
					}

					if (mx >= 243 && mx <= 347 && my >= 168 && my <= 259 && board_1[1][0] == ' ')
					{
						block1_4 = 2;
						board_1[1][0] = 'o';
						current = value_altr1(current);
						player_at1 = 1;
					}

					if (mx >= 366 && mx <= 455 && my >= 171 && my <= 258 && board_1[1][1] == ' ')
					{
						block1_5 = 2;
						board_1[1][1] = 'o';
						current = value_altr1(current);
						player_at1 = 1;
					}

					if (mx >= 476 && mx <= 579 && my >= 169 && my <= 258 && board_1[1][2] == ' ')
					{
						block1_6 = 2;
						board_1[1][2] = 'o';
						current = value_altr1(current);
						player_at1 = 1;
					}

					if (mx >= 241 && mx <= 348 && my >= 280 && my <= 382 && board_1[2][0] == ' ')
					{
						block1_7 = 2;
						board_1[2][0] = 'o';
						current = value_altr1(current);
						player_at1 = 1;
					}

					if (mx >= 366 && mx <= 458 && my >= 280 && my <= 382 && board_1[2][1] == ' ')
					{
						block1_8 = 2;
						board_1[2][1] = 'o';
						current = value_altr1(current);
						player_at1 = 1;
					}

					if (mx >= 477 && mx <= 568 && my >= 280 && my <= 382 && block1_9 == 0)
					{
						block1_9 = 2;
						board_1[2][2] = 'o';
						current = value_altr1(current);
						player_at1 = 1;
					}

					if ((checkWin(board_1, symbol_2) || checkDraw(board_1)) && pass1 == 1)
					{
						if(!checkWin(board_2, 'x') && !checkWin(board_2, 'o') && !checkDraw(board_2) && pass1 == 1){
							player_at2 = 1;
							player_at1 = 0;
							pass1 = 0;
							current = 4;
						}else if(!checkWin(board_3, 'x') && !checkWin(board_3, 'o') && !checkDraw(board_3) && pass1 == 1){
							player_at3 = 1;
							player_at1 = 0;
							pass1 = 0;
							current = 4;
						}else if(!checkWin(board_4, 'x') && !checkWin(board_4, 'o') && !checkDraw(board_4) && pass1 == 1){
							player_at4 = 1;
							player_at1 = 0;
							pass1 = 0;
							current = 4;
						}
					}
				}
				// board-2-----------------------------------------------------------------------------------------------------------------

				if (!checkWin(board_2, 'x') && !checkWin(board_2, 'o'))
				{
					if (mx >= 241 && mx <= 348 && my >= 437 && my <= 541 && board_2[0][0] == ' ')
					{
						block2_1 = 2;
						board_2[0][0] = 'o';
						current = value_altr1(current);
						player_at2 = 1;
					}

					if (mx >= 365 && mx <= 458 && my >= 437 && my <= 541 && board_2[0][1] == ' ')
					{
						block2_2 = 2;
						board_2[0][1] = 'o';
						current = value_altr1(current);
						player_at2 = 1;
					}

					if (mx >= 476 && mx <= 568 && my >= 437 && my <= 541 && board_2[0][2] == ' ')
					{
						block2_3 = 2;
						board_2[0][2] = 'o';
						current = value_altr1(current);
						player_at2 = 1;
					}

					if (mx >= 244 && mx <= 348 && my >= 557 && my <= 650 && board_2[1][0] == ' ')
					{
						block2_4 = 2;
						board_2[1][0] = 'o';
						current = value_altr1(current);
						player_at2 = 1;
					}

					if (mx >= 366 && mx <= 458 && my >= 557 && my <= 650 && board_2[1][1] == ' ')
					{
						block2_5 = 2;
						board_2[1][1] = 'o';
						current = value_altr1(current);
						player_at2 = 1;
					}

					if (mx >= 475 && mx <= 579 && my >= 557 && my <= 650 && board_2[1][2] == ' ')
					{
						block2_6 = 2;
						board_2[1][2] = 'o';
						current = value_altr1(current);
						player_at2 = 1;
					}

					if (mx >= 243 && mx <= 349 && my >= 669 && my <= 773 && board_2[2][0] == ' ')
					{
						block2_7 = 2;
						board_2[2][0] = 'o';
						current = value_altr1(current);
						player_at2 = 1;
					}

					if (mx >= 366 && mx <= 457 && my >= 669 && my <= 773 && board_2[2][1] == ' ')
					{
						block2_8 = 2;
						board_2[2][1] = 'o';
						current = value_altr1(current);
						player_at2 = 1;
					}

					if (mx >= 475 && mx <= 573 && my >= 669 && my <= 773 && board_2[2][2] == ' ')
					{
						block2_9 = 2;
						board_2[2][2] = 'o';
						current = value_altr1(current);
						player_at2 = 1;
					}

					if ((checkWin(board_2, symbol_2)|| checkDraw(board_2)) && pass2 == 1)
					{
						if(!checkWin(board_1, 'x') && !checkWin(board_1, 'o') && !checkDraw(board_1) && pass2 == 1){
							player_at1 = 1;
							player_at2 = 0;
							pass2 = 0;
							current = 4;
						}else if(!checkWin(board_3, 'x') && !checkWin(board_3, 'o') && !checkDraw(board_3) && pass2 == 1){
							player_at3 = 1;
							player_at2 = 0;
							pass2 = 0;
							current = 4;
						}else if(!checkWin(board_4, 'x') && !checkWin(board_4, 'o') && !checkDraw(board_4) && pass2 == 1){
							player_at4 = 1;
							player_at2 = 0;
							pass2 = 0;
							current = 4;
						}
					}
				}
				// board-3 ---------------------------------------------------------------------------------------------------------------

				if (!checkWin(board_3, 'x') && !checkWin(board_3, 'o'))
				{

					if (mx >= 638 && mx <= 738 && my >= 50 && my <= 151 && board_3[0][0] == ' ')
					{
						block3_1 = 2;
						board_3[0][0] = 'o';
						current = value_altr1(current);
						player_at3 = 1;
					}

					if (mx >= 755 && mx <= 847 && my >= 50 && my <= 151 && board_3[0][1] == ' ')
					{
						block3_2 = 2;
						board_3[0][1] = 'o';
						current = value_altr1(current);
						player_at3 = 1;
					}

					if (mx >= 866 && mx <= 970 && my >= 50 && my <= 151 && board_3[0][2] == ' ')
					{
						block3_3 = 2;
						board_3[0][2] = 'o';
						current = value_altr1(current);
						player_at3 = 1;
					}

					if (mx >= 633 && mx <= 738 && my >= 167 && my <= 260 && board_3[1][0] == ' ')
					{
						block3_4 = 2;
						board_3[1][0] = 'o';
						current = value_altr1(current);
						player_at3 = 1;
					}

					if (mx >= 755 && mx <= 848 && my >= 167 && my <= 260 && board_3[1][1] == ' ')
					{
						block3_5 = 2;
						board_3[1][1] = 'o';
						current = value_altr1(current);
						player_at3 = 1;
					}

					if (mx >= 867 && mx <= 967 && my >= 167 && my <= 260 && board_3[1][2] == ' ')
					{
						block3_6 = 2;
						board_3[1][2] = 'o';
						current = value_altr1(current);
						player_at3 = 1;
					}

					if (mx >= 633 && mx <= 736 && my >= 280 && my <= 380 && board_3[2][0] == ' ')
					{
						block3_7 = 2;
						board_3[2][0] = 'o';
						current = value_altr1(current);
						player_at3 = 1;
					}

					if (mx >= 755 && mx <= 846 && my >= 280 && my <= 380 && board_3[2][1] == ' ')
					{
						block3_8 = 2;
						board_3[2][1] = 'o';
						current = value_altr1(current);
						player_at3 = 1;
					}

					if (mx >= 867 && mx <= 967 && my >= 280 && my <= 380 && block3_9 == 0)
					{
						block3_9 = 2;
						board_3[2][2] = 'o';
						current = value_altr1(current);
						player_at3 = 1;
					}

					if ((checkWin(board_3, symbol_2)|| checkDraw(board_3)) && pass3 == 1)
					{
						if(!checkWin(board_1, 'x') && !checkWin(board_1, 'o') && !checkDraw(board_1) && pass3 == 1){
							player_at1 = 1;
							player_at3 = 0;
							pass3 = 0;
							current = 4;
						}else if(!checkWin(board_2, 'x') && !checkWin(board_2, 'o') && !checkDraw(board_2) && pass3 == 1){
							player_at2 = 1;
							player_at3 = 0;
							pass3 = 0;
							current = 4;
						}else if(!checkWin(board_4, 'x') && !checkWin(board_4, 'o') && !checkDraw(board_4) && (checkWin(board_3, symbol_2) || checkDraw(board_3)) && pass3 == 1){
							player_at4 = 1;
							player_at3 = 0;
							pass3 = 0;
							current = 4;
						}
					}
				}
				// board-4 -----------------------------------------------------------------------------------------------------------------------------------------

				if (!checkWin(board_4, 'x') && !checkWin(board_4, 'o'))
				{
					if (mx >= 639 && mx <= 737 && my >= 437 && my <= 540 && board_4[0][0] == ' ')
					{
						block4_1 = 2;
						board_4[0][0] = 'o';
						current = value_altr1(current);
						player_at4 = 1;
					}

					if (mx >= 755 && mx <= 846 && my >= 437 && my <= 540 && board_4[0][1] == ' ')
					{
						block4_2 = 2;
						board_4[0][1] = 'o';
						current = value_altr1(current);
						player_at4 = 1;
					}

					if (mx >= 867 && mx <= 968 && my >= 437 && my <= 540 && board_4[0][2] == ' ')
					{
						block4_3 = 2;
						board_4[0][2] = 'o';
						current = value_altr1(current);
						player_at4 = 1;
					}

					if (mx >= 634 && mx <= 738 && my >= 558 && my <= 648 && board_4[1][0] == ' ')
					{
						block4_4 = 2;
						board_4[1][0] = 'o';
						current = value_altr1(current);
						player_at4 = 1;
					}

					if (mx >= 755 && mx <= 842 && my >= 558 && my <= 648 && board_4[1][1] == ' ')
					{
						block4_5 = 2;
						board_4[1][1] = 'o';
						current = value_altr1(current);
						player_at4 = 1;
					}

					if (mx >= 867 && mx <= 967 && my >= 558 && my <= 648 && board_4[1][2] == ' ')
					{
						block4_6 = 2;
						board_4[1][2] = 'o';
						current = value_altr1(current);
						player_at4 = 1;
					}

					if (mx >= 634 && mx <= 736 && my >= 669 && my <= 772 && board_4[2][0] == ' ')
					{
						block4_7 = 2;
						board_4[2][0] = 'o';
						current = value_altr1(current);
						player_at4 = 1;
					}

					if (mx >= 759 && mx <= 846 && my >= 669 && my <= 772 && board_4[2][1] == ' ')
					{
						block4_8 = 2;
						board_4[2][1] = 'o';
						current = value_altr1(current);
						player_at4 = 1;
					}

					if (mx >= 870 && mx <= 958 && my >= 669 && my <= 772 && board_4[2][2] == ' ')
					{
						block4_9 = 2;
						board_4[2][2] = 'o';
						current = value_altr1(current);
						player_at4 = 1;
					}

					if ((checkWin(board_4, symbol_2) || checkDraw(board_4)) && pass4 == 1)
					{
						if(!checkWin(board_3, 'x') && !checkWin(board_3, 'o') && !checkDraw(board_3) && pass4 == 1){
							player_at2 = 1;
							player_at4 = 0;
							pass4 = 0;
							current = 4;
						}else if(!checkWin(board_1, 'x') && !checkWin(board_1, 'o') && !checkDraw(board_1) && (checkWin(board_4, symbol_2) || checkDraw(board_4)) && pass4 == 1){
							player_at3 = 1;
							player_at4 = 0;
							pass4 = 0;
							current = 4;
						}else if(!checkWin(board_1, 'x') && !checkWin(board_1, 'o') && !checkDraw(board_1) && (checkWin(board_4, symbol_2) || checkDraw(board_4)) && pass4 == 1){
							player_at1 = 1;
							player_at4 = 0;
							pass4 = 0;
							current = 4;
						}
					}
				}
			}

			if (current == 4)
			{
				if (easy == 1)
				{
					if (!checkWin(board_1, symbol_1) && player_at1 == 1)
					{
						player_at1 = 0;
						current = value_altr(current);
						int row_1 = -1;
						int col_1 = -1;
						for (int i = 0; i < 3 && row_1 == -1; i++)
						{
							for (int j = 0; j < 3; j++)
							{
								if (board_1[i][j] == ' ')
								{
									board_1[i][j] = 'x';
									row_1 = i;
									col_1 = j;
									break;
								}
							}
						}
						if (row_1 == 0 && col_1 == 0)
						{
							block1_1 = 1;
						}
						else if (row_1 == 0 && col_1 == 1)
						{
							block1_2 = 1;
						}
						else if (row_1 == 0 && col_1 == 2)
						{
							block1_3 = 1;
						}
						else if (row_1 == 1 && col_1 == 0)
						{
							block1_4 = 1;
						}
						else if (row_1 == 1 && col_1 == 1)
						{
							block1_5 = 1;
						}
						else if (row_1 == 1 && col_1 == 2)
						{
							block1_6 = 1;
						}
						else if (row_1 == 2 && col_1 == 0)
						{
							block1_7 = 1;
						}
						else if (row_1 == 2 && col_1 == 1)
						{
							block1_8 = 1;
						}
						else if (row_1 == 2 && col_1 == 2)
						{
							block1_9 = 1;
						}

						if(checkWin(board_1, symbol_1) || checkDraw(board_1)){
					               pass1 = 0;
								   current = 3;
					   }
						current = 3;
					}

					if (!checkWin(board_2, symbol_1) && player_at2 == 1)
					{
						done = 0;
						player_at2 = 0;
						current = value_altr(current);
						int row = -1;
						int col = -1;
						for (int i = 0; i < 3 && row == -1; i++)
						{
							for (int j = 0; j < 3; j++)
							{
								if (board_2[i][j] == ' ')
								{
									board_2[i][j] = 'x';
									row = i;
									col = j;
									break;
								}
							}
						}
						if (row == 0 && col == 0)
						{
							block2_1 = 1;
						}
						else if (row == 0 && col == 1)
						{
							block2_2 = 1;
						}
						else if (row == 0 && col == 2)
						{
							block2_3 = 1;
						}
						else if (row == 1 && col == 0)
						{
							block2_4 = 1;
						}
						else if (row == 1 && col == 1)
						{
							block2_5 = 1;
						}
						else if (row == 1 && col == 2)
						{
							block2_6 = 1;
						}
						else if (row == 2 && col == 0)
						{
							block2_7 = 1;
						}
						else if (row == 2 && col == 1)
						{
							block2_8 = 1;
						}
						else if (row == 2 && col == 2)
						{
							block2_9 = 1;
						}
						if(checkWin(board_2, symbol_1) || checkDraw(board_2)){
					               pass2 = 0;
								   current = 3;
					   }
						current = 3;
					}

					if (!checkWin(board_3, symbol_1) && player_at3 == 1)
					{
						done = 0;
						player_at3 = 0;
						current = value_altr(current);
						int row = -1;
						int col = -1;
						for (int i = 0; i < 3 && row == -1; i++)
						{
							for (int j = 0; j < 3; j++)
							{
								if (board_3[i][j] == ' ')
								{
									board_3[i][j] = 'x';
									row = i;
									col = j;
									break;
								}
							}
						}
						if (row == 0 && col == 0)
						{
							block3_1 = 1;
						}
						else if (row == 0 && col == 1)
						{
							block3_2 = 1;
						}
						else if (row == 0 && col == 2)
						{
							block3_3 = 1;
						}
						else if (row == 1 && col == 0)
						{
							block3_4 = 1;
						}
						else if (row == 1 && col == 1)
						{
							block3_5 = 1;
						}
						else if (row == 1 && col == 2)
						{
							block3_6 = 1;
						}
						else if (row == 2 && col == 0)
						{
							block3_7 = 1;
						}
						else if (row == 2 && col == 1)
						{
							block3_8 = 1;
						}
						else if (row == 2 && col == 2)
						{
							block3_9 = 1;
						}
						if(checkWin(board_3, symbol_1) || checkDraw(board_3)){
					               pass3 = 0;
								   current = 3;
					   }
						current = 3;
					}

					if (!checkWin(board_4, symbol_1) && player_at4 == 1)
					{
						done = 0;
						player_at4 = 0;
						current = value_altr(current);
						int row = -1;
						int col = -1;
						for (int i = 0; i < 3 && row == -1; i++)
						{
							for (int j = 0; j < 3; j++)
							{
								if (board_4[i][j] == ' ')
								{
									board_4[i][j] = 'x';
									row = i;
									col = j;
									break;
								}
							}
						}
						if (row == 0 && col == 0)
						{
							block4_1 = 1;
						}
						else if (row == 0 && col == 1)
						{
							block4_2 = 1;
						}
						else if (row == 0 && col == 2)
						{
							block4_3 = 1;
						}
						else if (row == 1 && col == 0)
						{
							block4_4 = 1;
						}
						else if (row == 1 && col == 1)
						{
							block4_5 = 1;
						}
						else if (row == 1 && col == 2)
						{
							block4_6 = 1;
						}
						else if (row == 2 && col == 0)
						{
							block4_7 = 1;
						}
						else if (row == 2 && col == 1)
						{
							block4_8 = 1;
						}
						else if (row == 2 && col == 2)
						{
							block4_9 = 1;
						}
						if(checkWin(board_4, symbol_1) || checkDraw(board_4)){
					               pass4 = 0;
								   current = 3;
					   }
						current = 3;
					}
					current = 3;
				}
				else if (medium == 1)
				{

					if (!checkWin(board_1, symbol_1) && player_at1 == 1)
					{
						done = 0;
						player_at1 = 0;
						current = value_altr(current);
						Move_in_medium optimal_move = find_medium_Move(board_1);
						if (optimal_move.row == 0 && optimal_move.col == 0)
						{
							block1_1 = 1;
							board_1[0][0] = 'x';
						}
						else if (optimal_move.row == 0 && optimal_move.col == 1)
						{
							block1_2 = 1;
							board_1[0][1] = 'x';
						}
						else if (optimal_move.row == 0 && optimal_move.col == 2)
						{
							block1_3 = 1;
							board_1[0][2] = 'x';
						}
						else if (optimal_move.row == 1 && optimal_move.col == 0)
						{
							block1_4 = 1;
							board_1[1][0] = 'x';
						}
						else if (optimal_move.row == 1 && optimal_move.col == 1)
						{
							block1_5 = 1;
							board_1[1][1] = 'x';
						}
						else if (optimal_move.row == 1 && optimal_move.col == 2)
						{
							block1_6 = 1;
							board_1[1][2] = 'x';
						}
						else if (optimal_move.row == 2 && optimal_move.col == 0)
						{
							block1_7 = 1;
							board_1[2][0] = 'x';
						}
						else if (optimal_move.row == 2 && optimal_move.col == 1)
						{
							block1_8 = 1;
							board_1[2][1] = 'x';
						}
						else if (optimal_move.row == 2 && optimal_move.col == 2)
						{
							block1_9 = 1;
							board_1[2][2] = 'x';
						}
						if(checkWin(board_1, symbol_1) || checkDraw(board_1)){
					               pass1 = 0;
								   current = 3;
					   }
						current = 3;
					}

					if (!checkWin(board_2, symbol_1) && player_at2 == 1)
					{
						done = 0;
						player_at2 = 0;
						current = value_altr(current);
						Move_in_medium optimal_move = find_medium_Move(board_2);

						if (optimal_move.row == 0 && optimal_move.col == 0)
						{
							block2_1 = 1;
							board_2[0][0] = 'x';
						}
						else if (optimal_move.row == 0 && optimal_move.col == 1)
						{
							block2_2 = 1;
							board_2[0][1] = 'x';
						}
						else if (optimal_move.row == 0 && optimal_move.col == 2)
						{
							block2_3 = 1;
							board_2[0][2] = 'x';
						}
						else if (optimal_move.row == 1 && optimal_move.col == 0)
						{
							block2_4 = 1;
							board_2[1][0] = 'x';
						}
						else if (optimal_move.row == 1 && optimal_move.col == 1)
						{
							block2_5 = 1;
							board_2[1][1] = 'x';
						}
						else if (optimal_move.row == 1 && optimal_move.col == 2)
						{
							block2_6 = 1;
							board_2[1][2] = 'x';
						}
						else if (optimal_move.row == 2 && optimal_move.col == 0)
						{
							block2_7 = 1;
							board_2[2][0] = 'x';
						}
						else if (optimal_move.row == 2 && optimal_move.col == 1)
						{
							block2_8 = 1;
							board_2[2][1] = 'x';
						}
						else if (optimal_move.row == 2 && optimal_move.col == 2)
						{
							block2_9 = 1;
							board_2[2][2] = 'x';
						}
						if(checkWin(board_2, symbol_1) || checkDraw(board_2)){
					               pass2 = 0;
								   current = 3;
					   }
						current = 3;
					}

					if (!checkWin(board_3, symbol_1) && player_at3 == 1)
					{
						done = 0;
						player_at3 = 0;
						current = value_altr(current);
						Move_in_medium optimal_move = find_medium_Move(board_3);
						if (optimal_move.row == 0 && optimal_move.col == 0)
						{
							block3_1 = 1;
							board_3[0][0] = 'x';
						}
						else if (optimal_move.row == 0 && optimal_move.col == 1)
						{
							block3_2 = 1;
							board_3[0][1] = 'x';
						}
						else if (optimal_move.row == 0 && optimal_move.col == 2)
						{
							block3_3 = 1;
							board_3[0][2] = 'x';
						}
						else if (optimal_move.row == 1 && optimal_move.col == 0)
						{
							block3_4 = 1;
							board_3[1][0] = 'x';
						}
						else if (optimal_move.row == 1 && optimal_move.col == 1)
						{
							block3_5 = 1;
							board_3[1][1] = 'x';
						}
						else if (optimal_move.row == 1 && optimal_move.col == 2)
						{
							block3_6 = 1;
							board_3[1][2] = 'x';
						}
						else if (optimal_move.row == 2 && optimal_move.col == 0)
						{
							block3_7 = 1;
							board_3[2][0] = 'x';
						}
						else if (optimal_move.row == 2 && optimal_move.col == 1)
						{
							block3_8 = 1;
							board_3[2][1] = 'x';
						}
						else if (optimal_move.row == 2 && optimal_move.col == 2)
						{
							block3_9 = 1;
							board_3[2][2] = 'x';
						}
						if(checkWin(board_3, symbol_1) || checkDraw(board_3)){
					               pass3 = 0;
								   current = 3;
					   }
						current = 3;
					}

					if (!checkWin(board_4, symbol_1) && player_at4 == 1)
					{
						done = 0;
						player_at4 = 0;
						current = value_altr(current);
						Move_in_medium optimal_move = find_medium_Move(board_4);
						if (optimal_move.row == 0 && optimal_move.col == 0)
						{
							block4_1 = 1;
							board_4[0][0] = 'x';
						}
						else if (optimal_move.row == 0 && optimal_move.col == 1)
						{
							block4_2 = 1;
							board_4[0][1] = 'x';
						}
						else if (optimal_move.row == 0 && optimal_move.col == 2)
						{
							block4_3 = 1;
							board_4[0][2] = 'x';
						}
						else if (optimal_move.row == 1 && optimal_move.col == 0)
						{
							block4_4 = 1;
							board_4[1][0] = 'x';
						}
						else if (optimal_move.row == 1 && optimal_move.col == 1)
						{
							block4_5 = 1;
							board_4[1][1] = 'x';
						}
						else if (optimal_move.row == 1 && optimal_move.col == 2)
						{
							block4_6 = 1;
							board_4[1][2] = 'x';
						}
						else if (optimal_move.row == 2 && optimal_move.col == 0)
						{
							block4_7 = 1;
							board_4[2][0] = 'x';
						}
						else if (optimal_move.row == 2 && optimal_move.col == 1)
						{
							block4_8 = 1;
							board_4[2][1] = 'x';
						}
						else if (optimal_move.row == 2 && optimal_move.col == 2)
						{
							block4_9 = 1;
							board_4[2][2] = 'x';
						}
						if(checkWin(board_4, symbol_1) || checkDraw(board_4)){
					               pass4 = 0;
								   current = 3;
					   }
						current = 3;
					}
					current = 3;
				}
				else if (hard == 1)
				{
					if (!checkWin(board_1, symbol_1) && player_at1 == 1)
					{
						done = 0;
						player_at1 = 0;
						current = value_altr(current);
						Move optimal_move = find_the_most_optimal_move(board_1);
						if (optimal_move.row == 0 && optimal_move.col == 0)
						{
							block1_1 = 1;
							board_1[0][0] = 'x';
						}
						else if (optimal_move.row == 0 && optimal_move.col == 1)
						{
							block1_2 = 1;
							board_1[0][1] = 'x';
						}
						else if (optimal_move.row == 0 && optimal_move.col == 2)
						{
							block1_3 = 1;
							board_1[0][2] = 'x';
						}
						else if (optimal_move.row == 1 && optimal_move.col == 0)
						{
							block1_4 = 1;
							board_1[1][0] = 'x';
						}
						else if (optimal_move.row == 1 && optimal_move.col == 1)
						{
							block1_5 = 1;
							board_1[1][1] = 'x';
						}
						else if (optimal_move.row == 1 && optimal_move.col == 2)
						{
							block1_6 = 1;
							board_1[1][2] = 'x';
						}
						else if (optimal_move.row == 2 && optimal_move.col == 0)
						{
							block1_7 = 1;
							board_1[2][0] = 'x';
						}
						else if (optimal_move.row == 2 && optimal_move.col == 1)
						{
							block1_8 = 1;
							board_1[2][1] = 'x';
						}
						else if (optimal_move.row == 2 && optimal_move.col == 2)
						{
							block1_9 = 1;
							board_1[2][2] = 'x';
						}
						if(checkWin(board_1, symbol_1) || checkDraw(board_1)){
					               pass1 = 0;
								   current = 3;
					   }
						current = 3;
					}

					if (!checkWin(board_2, symbol_1) && player_at2 == 1)
					{
						done = 0;
						player_at2 = 0;
						current = value_altr(current);
						Move optimal_move = find_the_most_optimal_move(board_2);

						if (optimal_move.row == 0 && optimal_move.col == 0)
						{
							block2_1 = 1;
							board_2[0][0] = 'x';
						}
						else if (optimal_move.row == 0 && optimal_move.col == 1)
						{
							block2_2 = 1;
							board_2[0][1] = 'x';
						}
						else if (optimal_move.row == 0 && optimal_move.col == 2)
						{
							block2_3 = 1;
							board_2[0][2] = 'x';
						}
						else if (optimal_move.row == 1 && optimal_move.col == 0)
						{
							block2_4 = 1;
							board_2[1][0] = 'x';
						}
						else if (optimal_move.row == 1 && optimal_move.col == 1)
						{
							block2_5 = 1;
							board_2[1][1] = 'x';
						}
						else if (optimal_move.row == 1 && optimal_move.col == 2)
						{
							block2_6 = 1;
							board_2[1][2] = 'x';
						}
						else if (optimal_move.row == 2 && optimal_move.col == 0)
						{
							block2_7 = 1;
							board_2[2][0] = 'x';
						}
						else if (optimal_move.row == 2 && optimal_move.col == 1)
						{
							block2_8 = 1;
							board_2[2][1] = 'x';
						}
						else if (optimal_move.row == 2 && optimal_move.col == 2)
						{
							block2_9 = 1;
							board_2[2][2] = 'x';
						}
						if(checkWin(board_2, symbol_1) || checkDraw(board_2)){
					               pass2 = 0;
								   current = 3;
					   }
						current = 3;
					}

					if (!checkWin(board_3, symbol_1) && player_at3 == 1)
					{
						done = 0;
						player_at3 = 0;
						current = value_altr(current);
						Move optimal_move = find_the_most_optimal_move(board_3);
						if (optimal_move.row == 0 && optimal_move.col == 0)
						{
							block3_1 = 1;
							board_3[0][0] = 'x';
						}
						else if (optimal_move.row == 0 && optimal_move.col == 1)
						{
							block3_2 = 1;
							board_3[0][1] = 'x';
						}
						else if (optimal_move.row == 0 && optimal_move.col == 2)
						{
							block3_3 = 1;
							board_3[0][2] = 'x';
						}
						else if (optimal_move.row == 1 && optimal_move.col == 0)
						{
							block3_4 = 1;
							board_3[1][0] = 'x';
						}
						else if (optimal_move.row == 1 && optimal_move.col == 1)
						{
							block3_5 = 1;
							board_3[1][1] = 'x';
						}
						else if (optimal_move.row == 1 && optimal_move.col == 2)
						{
							block3_6 = 1;
							board_3[1][2] = 'x';
						}
						else if (optimal_move.row == 2 && optimal_move.col == 0)
						{
							block3_7 = 1;
							board_3[2][0] = 'x';
						}
						else if (optimal_move.row == 2 && optimal_move.col == 1)
						{
							block3_8 = 1;
							board_3[2][1] = 'x';
						}
						else if (optimal_move.row == 2 && optimal_move.col == 2)
						{
							block3_9 = 1;
							board_3[2][2] = 'x';
						}
						if(checkWin(board_3, symbol_1) || checkDraw(board_3)){
					               pass3 = 0;
								   current = 3;
					   }
						current = 3;
					}

					if (!checkWin(board_4, symbol_1) && player_at4 == 1 && player_at3 != 1)
					{
						done = 0;
						player_at4 = 0;
						current = value_altr(current);
						Move optimal_move = find_the_most_optimal_move(board_4);
						if (optimal_move.row == 0 && optimal_move.col == 0 && player_at3 != 1)
						{
							block4_1 = 1;
							board_4[0][0] = 'x';
						}
						else if (optimal_move.row == 0 && optimal_move.col == 1)
						{
							block4_2 = 1;
							board_4[0][1] = 'x';
						}
						else if (optimal_move.row == 0 && optimal_move.col == 2)
						{
							block4_3 = 1;
							board_4[0][2] = 'x';
						}
						else if (optimal_move.row == 1 && optimal_move.col == 0)
						{
							block4_4 = 1;
							board_4[1][0] = 'x';
						}
						else if (optimal_move.row == 1 && optimal_move.col == 1)
						{
							block4_5 = 1;
							board_4[1][1] = 'x';
						}
						else if (optimal_move.row == 1 && optimal_move.col == 2)
						{
							block4_6 = 1;
							board_4[1][2] = 'x';
						}
						else if (optimal_move.row == 2 && optimal_move.col == 0)
						{
							block4_7 = 1;
							board_4[2][0] = 'x';
						}
						else if (optimal_move.row == 2 && optimal_move.col == 1)
						{
							block4_8 = 1;
							board_4[2][1] = 'x';
						}
						else if (optimal_move.row == 2 && optimal_move.col == 2)
						{
							block4_9 = 1;
							board_4[2][2] = 'x';
						}
						if(checkWin(board_4, symbol_1) || checkDraw(board_4)){
					               pass4 = 0;
								   current = 3;
					   }
						current = 3;
					}
					current = 3;
				}
			}
		}

		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if (mx >= 1100 && mx <= 1188 && my >= 757 && my <= 790)
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
/*function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	if (isTextBoxActive)
    {
		 if (key == '\r')
            isTextBoxActive = false;
        else if (key != '\b')
        {
            playerName[idx] = key;
			playerName[++idx] = '\0';
        }
        else
        {
			if(idx <= 0){
				idx = 0;
			}else{
				idx--;
			}
			playerName[idx] = '\0';
        }
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

	current = 0;
	playmusic();
	idx = strlen(playerName);
	iInitialize(1200, 800, "Tic-Tac-Toe  Developed by : ""Tafsir Al Nafin""");
	return 0;
}
