/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on May 4, 2017, 9:51 AM
 * Purpose:  Chapter 6 Problem 1 Calculate retail with a function
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //Formatting Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float calRetail (float price, float percent);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float cost;     //Wholesale cost of an item in $'s
    float markUp;   //Percentage markup value
    
    
    
    //Let user know what to do & input the data
    cout<<"This Program will determine a wholesale items retail cost."<<endl;
    cout<<"Enter an items wholesale cost: $";cin>>cost;
    cout<<"What is its markup percentage?: ";cin>>markUp;
    
   
    //Calling the function calRetail that computes the retail value
    calRetail(cost,markUp);
    
    //Statement with the calRetail conversion
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Wholesale cost $"<<cost<<endl;
    cout<<"Mark up percent "<<markUp<<"%"<<endl;
    cout<<"Retail amount $"<<calRetail(cost,markUp)<<endl;
    
  
    
    
    
    
    //Exit stage right!
    return 0;
}
//Function named calRetail to calculate the retail price of an item

float calRetail (float price, float percent){
    float retail;       //Variable to hold the value of the retail price
    
    if (price <= 0) {   //Input validation, if price is <= 0 , exit function
        cout<<"Price invalid"<<endl;
        return 1;
    }
    else {
        percent = percent/100;
        retail = price + price * percent;
        return retail;
    }
}

