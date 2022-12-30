#include<iostream>
using namespace std;
void calculatebill(string country, int amount);

main()
{   while(true){

    string country;
    int amount;
    cout<<"Enter Country Name ";
    cin>> country;
    cout<<"Enter amount ";
    cin>> amount;
     
    calculatebill(country,amount);


}
    
}



  void calculatebill(string country, int amount)
{


   if(country=="Ireland")
{
    float result;

    result=amount*0.1;

   float amountpaid=amount-result;

   cout<<"Your final price  is "<<amountpaid<<endl;

}


  if(country=="Pakistan")
{
    float result;

    result=amount*0.05;

   float amountpaid=amount-result;

   cout<<"Your final price  is "<<amountpaid<<endl;

}


  if(country=="India")
{
    float result;

    result=amount*0.3;

   float amountpaid=amount-result;

   cout<<"Your final price  is "<<amountpaid<<endl;

}
 
  if(country=="Canada")
{
    float result;

    result=amount*0.45;

   float amountpaid=amount-result;

   cout<<"Your final price  is "<<amountpaid<<endl;

}









}