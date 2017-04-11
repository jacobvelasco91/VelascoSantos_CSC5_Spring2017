/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on February 28, 2017, 7:56 AM
 * Purpose:  calculating an employee's total annual pay
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
    float payAmount=2200.0;
    float payPeriods=26;
    float annlPay;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    annlPay=payAmount*payPeriods;
    
    //Output the transformed data
    cout<<"If an employee gets paid every two weeks, with a pay amount of $"
            <<payAmount<<", in one year his/her annual pay will be $"
            <<annlPay<<endl;
    
    //Exit stage right!
    return 0;
}

