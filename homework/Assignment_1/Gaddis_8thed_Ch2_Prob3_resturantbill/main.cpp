/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on February 28, 2017, 1:12 AM
 * Purpose:  Calculate tax and tip
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PERCENT=100.0;

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float bill=88.67; //$86.77 cost of food bill
    float tax=.0675; //6.75% tax on food bill
    float tip=.20;  //20% tip on bill w/tax
    float taxBill,ttlBill,tipBill,newBill;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    taxBill=bill*tax;
    newBill=taxBill+bill;
    tipBill=newBill*tip;
    ttlBill=newBill+tipBill;
    
    
    //Output the transformed data
    cout<<"Meal cost = $"<<bill<<endl;
    cout<<"Tax amount = $"<<taxBill<<endl;
    cout<<"Tip amount = $"<<tipBill<<endl;
    cout<<"Total bill = $"<<ttlBill<<endl;
    
    
    //Exit stage right!
    return 0;
}

