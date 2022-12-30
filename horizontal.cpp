#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int,int);
void printMaze();
void playMove(int x,int y);
main(){
 system("cls");
   printMaze();
   int x=2;
   int y=6;

   while(true)
{
    playMove(x,y);
   if(x < 28){
    x=x+1;
}

   if(x == 28){
   gotoxy(x-1,y);
  cout<<" ";
  x=2;

}

}




  
  
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
