#include<iostream>
using namespace std;
void lastresult(int,int,int);

main()
{   while(true){

    int redRose;
    int whiteRose; 
    int tulips;
  cout<<"Enter number of resRose ";
  cin>>redRose;
   cout<<"Enter number of whiteRose ";
  cin>>whiteRose;
  cout<<"Enter number of tulips ";
  cin>>tulips;

 lastresult(redRose,whiteRose, tulips);  


}
    
}



 void lastresult(int redRose,int whiteRose, int tulips)
{
 float redresult;
 float whiteresult;
 float tulipsresult;
 redresult=redRose*2;
 whiteresult=whiteRose*4.10;
 tulipsresult=tulips*2.50;
  float additionprice=redresult+whiteresult+tulipsresult;
float discountresult;
float allresult;
   if(additionprice>=200)
{
    discountresult=additionprice*0.2;
    allresult=additionprice-discountresult;

cout<<"original price is "<<additionprice<<endl;
cout<<"Discount "<<discountresult<<endl;
cout<<"price After discount is "<<allresult<<endl;



}


}


