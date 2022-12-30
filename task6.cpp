#include<iostream>
#include<windows.h>
using namespace std;
void capital_A();
void capital_W();
void capital_I();
void capital_S();

int main(){
system("cls");
 capital_A();
 capital_W();
cout<<endl;
 capital_A();
cout<<endl;
 capital_I();
cout<<endl;
 capital_S();
cout<<endl;

}

 void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);

}




void capital_A(){

gotoxy(70,1);                cout<<"#############";
gotoxy(70,2);                cout<<"###       ###";
gotoxy(70,3);                cout<<"###       ###";
gotoxy(70,4);                cout<<"###       ###"; 
gotoxy(70,5);                cout<<"#############"; 
gotoxy(70,6);                cout<<"###       ###"; 
gotoxy(70,7);                cout<<"###       ###"; 
gotoxy(70,8);                cout<<"###       ###"; 
gotoxy(70,9);                cout<<"###       ###"; 
 
}



void capital_W(){

gotoxy(60,12);              cout<<"####           ##            ####"; 
gotoxy(60,13);              cout<<"####          ## ##          ####";
gotoxy(60,14);              cout<<"####         ##   ##         ####"; 
gotoxy(60,15);              cout<<"####        ##     ##        ####";   
gotoxy(60,16);              cout<<"####       ##       ##       ####";  
gotoxy(60,17);              cout<<"####      ##         ##      ####";
gotoxy(60,18);              cout<<"####     ##           ##     ####"; 
gotoxy(60,19);              cout<<"####   ###             ##    ####"; 
gotoxy(60,20);              cout<<"####  ####             ####  ####";  
                             cout<<endl;
}


void capital_I(){

gotoxy(70,25);              cout<<"#####################"; 
gotoxy(70,26);              cout<<"        #####        ";
gotoxy(70,27);              cout<<"        #####        ";
gotoxy(70,28);              cout<<"        #####        ";  
gotoxy(70,29);              cout<<"        #####        "; 
gotoxy(70,30);              cout<<"        #####        ";
gotoxy(70,31);              cout<<"        #####        "; 
gotoxy(70,32);              cout<<"        #####        "; 
gotoxy(70,33);              cout<<"        #####        ";  
gotoxy(70,34);              cout<<"        #####        ";
gotoxy(70,35);              cout<<"#####################";
cout<<endl;
}







void capital_S(){

gotoxy(70,38);              cout<<"###################"; 
gotoxy(70,39);              cout<<"###################";
gotoxy(70,40);              cout<<"####        "; 
gotoxy(70,41);              cout<<"####       ";   
gotoxy(70,42);              cout<<"###################";  
gotoxy(70,43);              cout<<"###################";
gotoxy(70,44);              cout<<"               ####"; 
gotoxy(70,45);              cout<<"               ####"; 
gotoxy(70,46);              cout<<"               ####";  
gotoxy(70,47);              cout<<"###################"; 
gotoxy(70,48);              cout<<"###################"; 
 
}