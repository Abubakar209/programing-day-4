#include<iostream>
using namespace std;
void operation(int num1);


main(){
   int num1;
  
   cout<<"ENter operation";
   cin>>num1;
   operation(num1);     
}

void operation( int num1){
   if(num1==1){


float matric_marks;
float inter_marks;
float ecat_marks;

string name;

cout<<"enter your name ";
cin>> name;
cout<<"eneter your matric marks ";
cin>> matric_marks;
cout<<"enter your inter marks ";
cin>> inter_marks;
cout<<"enter your ecat marks ";
cin>> ecat_marks;
float percentage_matric=(matric_marks/1100)*100;
float weightage_matric=percentage_matric*(0.1);
cout<<"weightage of matric is"<<weightage_matric <<endl;

float percentage_inter=(inter_marks/550)*100;
float weightage_inter=percentage_inter*(0.4);
cout<<"weightage of inter is"<<weightage_inter <<endl;

float percentage_ecat=(ecat_marks/400)*100;
float weightage_ecat=percentage_ecat*(0.5);
cout<<"weightage of ecat is"<<weightage_ecat <<endl;

float aggregate=weightage_matric+weightage_inter+weightage_ecat;
cout<<"total aggregate "<<aggregate;
  
}
   if (num1==0){
    string st1_name;
    int ecat_st1;
    cout<<"Enter your name";
     cin>>st1_name;
    cout<<"Enter your Ecat number";
       cin>>ecat_st1;
       string st2_name;
    int ecat_st2;
    cout<<"Enter your name";
     cin>>st2_name;
    cout<<"Enter your Ecat number";
       cin>>ecat_st2;
     if(ecat_st1>ecat_st2){
      cout<<"roll number 1 "<<ecat_st1;
      cout<<"roll number 2 "<<ecat_st2;
}

     if(ecat_st1<ecat_st2){
      cout<<"roll number 1 "<<ecat_st2;
      cout<<"roll number 2 "<<ecat_st1;
}



}

}









