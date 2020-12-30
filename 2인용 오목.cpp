#include <stdio.h>                                 

#include <Windows.h>                              

#include <conio.h>                                 

 

void gotoxy(int x, int y);                         

void gamecontrol();                                                     

void Key_Down(int Board[][20], char key, int* x, int* y);  

void Erase_Stone(int x, int y);                       

void Draw_Stone();                                

void Put_Stone(int Board[][20], int x, int y);           

void Draw_Put_Stone(int Board[][20]);                  

void Draw_BadukBoard(int column, int row);

void intro();

void printCount(int x, int y);

int Win_Check(int Board[][20]);                      

unsigned char a = 0xa6;

unsigned char b[12];

 

 

 

 

int check = 1, count = 1;                                                                       

 

 

int main(void) {

	intro();

	gamecontrol();  

	gotoxy(0, 23);                                

	return 0;                                   

}

 

void gamecontrol() {

	int Baduk_Board[20][20] = { 0 };                    

	int x = 16, y = 10;                              

	char Key;                                   

 

	Draw_BadukBoard(20, 20);                              

	gotoxy(x, y);                               

	Draw_Stone();                                

	do {

		printCount(x, y);                        

		Key = _getch();                         

		Erase_Stone(x, y);                       

		Key_Down(Baduk_Board, Key, &x, &y);              

		Draw_Put_Stone(Baduk_Board);              

		if (Win_Check(Baduk_Board))                  

			return;                               

		gotoxy(x, y);                             

		Draw_Stone();                             

	} while (Key != 27);                             

 

}

 

void Erase_Stone(int x, int y) {                       

	gotoxy(x, y);                                

	unsigned char a = 0xa6;

	unsigned char b[12];

	for (int i = 1; i < 12; i++)

		b[i] = 0xa0 + i;

 

	if (x == 0 && y == 0)                         

		printf("%c%c ", a, b[3]);                       

	else if (x == 38 && y == 0)                     

		printf("%c%c ", a, b[4]);                     

	else if (x == 0 && y == 19)                     

		printf("%c%c ", a, b[6]);                    

	else if (x == 38 && y == 19)                     

		printf("%c%c ", a, b[5]);                             

	else if (x == 0 && y < 20)                            

		printf("%c%c ", a, b[7]);                            

	else if (y == 0)                             

		printf("%c%c ", a, b[8]);                            

	else if (x == 38 && y < 20)                 

		printf("%c%c ", a, b[9]);                             

	else if (y == 19)                             

		printf("%c%c ", a, b[10]);

	

	else                                      

		printf("%c%c ", a, b[11]);                             

}                                             

								  

 

void Draw_Stone() {

	if (check == 1)                                 

		printf("●");

	else

		printf("○");                             

}

 

void Key_Down(int Board[][20], char key, int* x, int* y) {  

	switch (key) {

	case 72:                                    

		if (*y - 1 < 0)                         

			break;

		else                                    

			*y -= 1;

		break;

	case 80:                                   

		if (*y + 1 > 19)                           

			break;

		else                                  

			*y += 1;

		break;

	case 75:                                   

		if (*x - 2 < 0)                             

			break;

		else                                    

			*x -= 2;

		break;

	case 77:                                   

		if (*x + 2 > 38)                                

			break;

		else                                   

			*x += 2;

		break;

	case 32:                                    

		Put_Stone(Board, *x, *y);                   

		break;

	default:                               

		break;

	}

}

 

void Put_Stone(int Board[][20], int x, int y) {

	if (Board[y][x / 2] == 0) {                       

		if (check == 1) {                           

			Board[y][x / 2] = 1;                      

			check = 2;

			count++;

		}                              

 

		else {                                  

			Board[y][x / 2] = 2;                       

			check = 1;

			count++;

		}

	}                           // 전역변수 check값 1로 변환

}

 

void Draw_Put_Stone(int Board[][20]) {

 

 

	for (int i = 0; i < 20; i++) {                       

		for (int j = 0; j < 20; j++) {

			if (Board[j][i] == 1) {                     

				gotoxy(i * 2, j);                       

				printf("●");

			}                      

 

			else if (Board[j][i] == 2) {              

				gotoxy(i * 2, j);                      

				printf("○");

			}                                

		}

	}

}

 

int Win_Check(int Board[][20]) {

 

	for (int i = 2; i < 18; i++) {                     

		for (int j = 0; j < 18; j++) {                

			if (Board[j][i - 2] == 1 && Board[j][i - 1] == 1 && Board[j][i] == 1 && Board[j][i + 1] == 1 && Board[j][i + 2] == 1) {   

				gotoxy(60, 15);

				printf("%d수 만에\n", count-1);

				gotoxy(60, 16);

				printf("백돌 승리!!!!");

				return 1;

			}

			else if (Board[j][i - 2] == 2 && Board[j][i - 1] == 2 && Board[j][i] == 2 && Board[j][i + 1] == 2 && Board[j][i + 2] == 2) {

				gotoxy(60, 15);

				printf("%d수 만에\n", count-1);

				gotoxy(60, 16);

				printf("흑돌 승리!!!!");

				return 1;

			}

 

			else if (Board[i - 2][j] == 1 && Board[i - 1][j] == 1 && Board[i][j] == 1 && Board[i + 1][j] == 1 && Board[i + 2][j] == 1) {  

				gotoxy(60, 15);

				printf("%d수 만에\n", count-1);

				gotoxy(60, 16);

				printf("백돌 승리!!!!");

				return 1;

			}

			else if (Board[i - 2][j] == 2 && Board[i - 1][j] == 2 && Board[i][j] == 2 && Board[i + 1][j] == 2 && Board[i + 2][j] == 2) {

				gotoxy(60, 15);

				printf("%d수 만에\n", count-1);

				gotoxy(60, 16);

				printf("흑돌 승리!!!!");

				return 1;

			}

		}

	}

 

	for (int i = 2; i < 18; i++) {                  

		for (int j = 2; j < 18; j++) {             

			if (Board[j - 2][i - 2] == 1 && Board[j - 1][i - 1] == 1 && Board[j][i] == 1 && Board[j + 1][i + 1] == 1 && Board[j + 2][i + 2] == 1) { 

				gotoxy(60, 15);

				printf("%d수 만에\n", count - 1);

				gotoxy(60, 16);

				printf("백돌 승리!!!!");

				return 1;

			}

			else if (Board[j - 2][i - 2] == 2 && Board[j - 1][i - 1] == 2 && Board[j][i] == 2 && Board[j + 1][i + 1] == 2 && Board[j + 2][i + 2] == 2) {

				gotoxy(60, 15);

				printf("%d수 만에\n", count - 1);

				gotoxy(60, 16);

				printf("흑돌 승리!!!!");

				return 1;

			}

 

			else if (Board[j + 2][i - 2] == 1 && Board[j + 1][i - 1] == 1 && Board[j][i] == 1 && Board[j - 1][i + 1] == 1 && Board[j - 2][i + 2] == 1) {

				gotoxy(60, 15);

				printf("%d수 만에\n", count - 1);

				gotoxy(60, 16);

				printf("백돌 승리!!!!");

				return 1;

			}

			else if (Board[j + 2][i - 2] == 2 && Board[j + 1][i - 1] == 2 && Board[j][i] == 2 && Board[j - 1][i + 1] == 2 && Board[j - 2][i + 2] == 2) {

				gotoxy(60, 15);

				printf("%d수 만에\n", count - 1);

				gotoxy(60, 16);

				printf("흑돌 승리!!!!");

				return 1;

			}

		}

	} 

	return 0;

}

 

void Draw_BadukBoard(int c, int r)

{

	int i, j;

	unsigned char a = 0xa6;

	unsigned char b[12];

	for (i = 1; i < 12; i++)

		b[i] = 0xa0 + i;

	printf("%c%c", a, b[3]);

	for (i = 0; i < c - 2; i++)

	{

		printf(" ");

		printf("%c%c", a, b[8]);

	}

	printf(" ");

	printf("%c%c", a, b[4]);

	printf("\n");

	for (i = 0; i < r - 2; i++)

	{

		printf("%c%c", a, b[7]);

		for (j = 0; j < c - 2; j++)

		{

			printf(" ");

			printf("%c%c", a, b[11]);

		}

		printf(" ");

		printf("%c%c", a, b[9]);

		printf("\n");

	}

	printf("%c%c", a, b[6]);

	for (i = 0; i < c - 2; i++)

	{

		printf(" ");

		printf("%c%c", a, b[10]);

	}

	printf(" ");

	printf("%c%c", a, b[5]);

	printf("\n");

}

 

void gotoxy(int x, int y)

{                    

	COORD Pos = { x , y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);

}

 

void intro()

{

	gotoxy(20, 8

	);

	printf("컴퓨터시뮬레이션학과 20161508 안예찬");

	gotoxy(20, 9);

	printf("2인용입니다! 시작하려면 아무키나 눌러주세요..>");

	_getch();

	system("cls");

	gotoxy(20, 10);

	printf("게임 시작!!!");

	Sleep(1000);

	system("cls");

}

 

void printCount(int x, int y)

{

	gotoxy(60, 10);

	printf("돌 놓은 수 : %d", count);

}
