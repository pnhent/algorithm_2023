#include<stdio.h>
#include<Windows.h>
#include<conio.h>

typedef enum _ColorType { 
BLACK, //0
DarkBLUE, //1
DarkGreen, //2
DarkSkyBlue, //3
DarkRed, //4
DarkPurple, //5
DarkYellow, //6
GRAY, //7
DarkGray, //8
BLUE, //9
GREEN, //10
SkyBlue, //11
RED, //12
PURPLE, //13
YELLOW, //14
WHITE //15
} COLOR;
void setTextColor(COLOR colorNum) 
{ 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 
colorNum); 
}

void setTextColor(COLOR c);
void gotoXY(int x, int y){
COORD pos = {x*2,y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
int main(){
CONSOLE_CURSOR_INFO cursorInfo = { 0, };
cursorInfo.bVisible = 0;
cursorInfo.dwSize = 1;
SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
gotoXY(3,3);
setTextColor(RED); 
printf("бр");
int c = _getch();
return 0;
}