#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int,int);
void printMaze();
void playMove(int x,int y);
main(){
   int x=3;
   int y=3;
   system("cls");
   printMaze();
   playMove(x,y);
}

void printMaze()
{

  cout<<"################################"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"################################"<<endl;


}


 void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);

}


 void playMove(int x,int y){
 
  gotoxy(x-1,y);
  cout<<" ";
  gotoxy(x,y);
  cout<<"p";
 Sleep(200);


}
