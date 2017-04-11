/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on February 28, 2017, 7:49 AM
 * Purpose:  calculate the average of sum values
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
    short num1=28;
    short num2=32;
    short num3=37;
    short num4=24;
    short num5=33;
    float sum,avrg;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    sum=num1+num2+num3+num4+num5;
    avrg=sum/5;
    
    //Output the transformed data
    cout<<"The average value is "<<avrg<<endl;
    
    //Exit stage right!
    return 0;
}

