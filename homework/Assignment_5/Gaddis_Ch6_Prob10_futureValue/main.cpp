/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on May 5, 2017, 10:58 PM
 * Purpose:  Chapter 6 problem 10 future value
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   // Formatting
#include <cmath>     //math library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float futureValue(float pValue,float mRate,float numMon);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float pV,mR,numM;
    float accountF;
    
  
    
  
    
    //Initialize variables
    
    
    //Input data
    cout<<"This program calculate your future value"<<endl;
    cout<<"Enter your present value: $";cin>>pV;
    cout<<"Enter your monthly interest rate percent: ";cin>>mR;
    cout<<"Enter the number of months you will leave it for: ";cin>>numM;
    accountF = futureValue(pV,mR,numM);
    
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Your future value is $"<<accountF<<endl;
    
   
 
    //Map inputs to outputs or process the data  
    
 
       
   
    //Output the transformed data
    
    
    //Exit stage right!
    return 0;
}
float futureValue(float pValue,float mRate,float numMon){
    float fValue;
    
    fValue = pValue*pow((1+mRate/100),numMon);
    
    return fValue;
}
