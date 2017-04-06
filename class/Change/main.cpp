/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on April 6, 2017, 10:30 AM
 * Purpose:  correct change
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   // Formatting
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float price, tender;
    int iprice, itender,ichange;
  
    
    //Input data
    do{
    cout<<"This program gives you change"<<endl;
    cout<<"Input the price to pay and how much tendered"<<endl;
    cout<<"The tendered amount must be greater than price"<<endl;
    cout<<"Input the price"<<endl;
    cin>>price;
    cout<<"Input the tendered amount"<<endl;
    cin>>tender;
    }while(tender<price);
   
   
 
    //Convert to pennies
    iprice=(price+.005f)*100;//converts float to the proper integer
    itender=(tender+.005f)*100;//converts float to the proper integer
    
    //Calculate the change
    ichange=itender-iprice;
    
    int hundred=ichange/10000;
    cout<<hundred<<"hundreds"<<endl;
    ichange-=hundred*10000;
    
    int twenty=ichange/2000;
    cout<<twenty<<"twenties"<<endl;
    ichange-=twenty*2000;
    
    int tens=ichange/1000;
    cout<<tens<<"tens"<<endl;
    ichange-=tens*1000;
    
    int fives=ichange/500;
    cout<<fives<<"fives"<<endl;
    ichange-=fives*500;
    
    int ones=ichange/100;
    cout<<ones<<"ones"<<endl;
    ichange-=ones*100;
       
   
    //Output the transformed data
  
    
    //Exit stage right!
    return 0;
}

