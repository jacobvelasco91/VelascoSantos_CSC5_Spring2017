/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on May 5, 2017, 10:41 PM
 * Purpose:  Chapter 6 problem 9 present value
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   // Formatting
#include <cmath>    //math formatting library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float presentValue (int futureV,float annualR, int numYrs);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float fValue,aInterest,numberY;
    float presentV;
    
    
    
    cout<<"This program calculates your present value"<<endl<<endl;
  
    cout<<"Enter future value (amount you want in the future): $";cin>>fValue;
    cout<<"Enter annual interest rate percent: ";cin>>aInterest;
    cout<<"Enter number of years you plan to let the money sit: ";cin>>numberY;
    
    
    presentV = presentValue(fValue,aInterest,numberY);
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The amount you need to deposit is $"<<presentV<<endl;
    
  
    
  
    
    //Initialize variables
    
    
    //Input data
   
   
 
    //Map inputs to outputs or process the data  
    
 
       
   
    //Output the transformed data
    
    
    //Exit stage right!
    return 0;
}
float presentValue (int futureV,float annualR, int numYrs) {
    float presentV;
    
    presentV = futureV/pow((1+annualR/100),numYrs);
    
    return presentV;
}

