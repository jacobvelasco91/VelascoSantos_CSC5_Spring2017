/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on May 4, 2017, 11:31 AM
 * Purpose:  Retirement Calculator -Excel Sheet
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
    float inRate;       //Interest Rate in %
    float salary;       //Your salary
    float prcntSave;    //Percent amount that you want to save
    float svgToRetire;  //Savings to retire
    float balance=0;    //Balance of your savings retirement 
    int yrsWrkg;        //Years working
  
    
  
    

    
    
    
    //Let user know what to do & input data
    cout<<"This program will calculate your retirement."<<endl;
    cout<<"Enter the interest rate percent: ";cin>>inRate;
    cout<<"Enter your salary: $";cin>>salary;
    cout<<"Enter the percent amount of your salary to save: ";cin>>prcntSave;
    cout<<"Enter years working: ";cin>>yrsWrkg;
    
    //Line breaks
    cout<<endl<<endl;
    
    //Convert whole number into decimal/percent
    inRate = inRate/100;
    prcntSave = prcntSave/100;
    
    //Headings for table
    cout<<"Year"<<setw(18)<<"Savings"<<setw(18)<<"Interest"<<setw(18)<<"Yearly"<<endl;
         
    cout<<"    "<<setw(18)<<"balance"<<setw(18)<<"Paidper"<<setw(18)<<"Deposit"<<endl;
            
    //For loop incrementing i and i equals to years
    //Each time it loops balance is being updated and interest is being taken
    for(int i = 1; i <= yrsWrkg ; i++){
    float intPaid;
    float yrlyDpo;
    
    
    intPaid = balance * inRate;
    yrlyDpo = salary * prcntSave;
    
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<setw(4)<<i<<setw(18)<<balance<<setw(18)<<intPaid<<setw(18)<<yrlyDpo<<endl;
    
    balance = balance + intPaid + yrlyDpo;
   
    }
    

    
    
    //Exit stage right!
    return 0;
}

