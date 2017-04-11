/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on March 3, 2017, 11:52 AM
 * Purpose:  Calculate Monthly Payment
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip>  //Format Library
#include <cmath>    // Math library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PERCENT=100.0f; // Percent conversion
const float CNVYRMS=12;

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float faceVal;  //Loan face value in $'s
    float consRec;  //What the consumer receives in $'s
    float mthPay;   //Monthly payment in $'s
    int   intRate;  //Monthly interest rate
    int   nMonths;  //Number of months in the loan
    
    
    //Initialize variables
    
    
    //Input data
    cout<<"This program calculates Loan Parameters"<<endl;
    cout<<"Input the loan amount to be received in $ ";
    cin>>consRec;
    cout<<"Number of months in the loan ";
    cin>>nMonths;
    cout<<"Interest rate % = ";
    cin>>intRate;
    
    //Map inputs to outputs or process the data
    faceVal=consRec/(1-intRate/PERCENT/CNVYRMS*nMonths);
    mthPay=faceVal/nMonths;
    
    
    //Output the transformed data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Loan amount received = $"<<consRec<<endl;
    cout<<"Number of monthly payments = "<<nMonths<<endl;
    cout<<"Interest rate = "<<intRate<<"%"<<endl;
    cout<<"Face value of the loan = $"<<faceVal<<endl;
    cout<<"Monthly Payments = $"<<mthPay<<endl;
    
    //Exit stage right!
    return 0;
}

