#include<iostream>
#include<windows.h>
using namespace std;

 void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);

}


int main()
{
system("cls");




gotoxy(30,20); cout<<"######    ######    #      #     ######    ######   ###       ###    #######    #######";
gotoxy(30,21); cout<<"##  ##    #    #    #      #     #    #    #    #    ##     ##       ##   ##    ##   ##";
gotoxy(30,22); cout<<"######    ######    #      #     ######    ######    ## #####        #######    #######";
gotoxy(30,23); cout<<"##  ##    #    #    #      #     #    #    #    #    ##     ##       #     #    ##   ##";
gotoxy(30,24); cout<<"##  ##    ######    ########     ######    #    #    ##      ###     #     #    ##    ###";   








return 0;









}