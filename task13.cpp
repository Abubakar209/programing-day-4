#include<iostream>
using namespace std;
void tomresult(int num);
main(){

       int num;
      cout<<"ENter number of Holidays";
      cin>>num;
      tomresult(num);  


}






void tomresult(int num){

int workingdays=365-num;
int timegames=(workingdays*63)+(num*127);
int differnorm=30000-timegames;
float differInmin=differnorm*0.0166667;
cout<<"Tom sleep well "<<differInmin<<" hours"<<endl;
cout<<"Tom will play "<<timegames<<endl;







}























































