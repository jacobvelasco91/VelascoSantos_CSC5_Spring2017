/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on May 5, 2017, 10:58 PM
 * Purpose:  Chapter 6 problem 10 future value
 */

//System Libraries
#include <iostream>  //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes


//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int num1;
    int num2;
    int product = 0;
   
    
  
    
    //Initialize variables
    cout<<"Please Enter A Number to multiply them."<<endl;
    
    //Input data
    cin>>num1;
    cout<<"Enter next number : "; cin>>num2;
    
    
  
 
    //Map inputs to outputs or process the data  
    product = num1 * num2;
 
       
   
    //Output the transformed data
    cout<<"Your multiplied number is "<<product<<" !"<<endl;
    
    //Exit stage right!
    return 0;
}


