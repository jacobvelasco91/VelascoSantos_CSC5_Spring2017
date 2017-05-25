/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on February 28, 2017, 12:46 AM
 * Purpose:  calculate total tax of a purchase including both state
 *           and sales tax.
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
    float cntyTax=0.02f; //2 percent County Tax
    float staTax=0.04f;  //4 percent state tax
    short purChse=95.00;  // $95 purchase
    float fullTx,ttlSltx;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    fullTx=cntyTax+staTax;
    ttlSltx=purChse*fullTx;
    
    //Output the transformed data
    cout<<"Purchase amount = $"<<purChse<<endl;
    cout<<"State Tax = "<<staTax*PERCENT<<"%"<<endl;
    cout<<"County Tax = "<<cntyTax*PERCENT<<"%"<<endl;
    cout<<"Total Tax = "<<fullTx*PERCENT<<"%"<<endl;
    cout<<"Total Sales Tax on $"<<purChse<<" = $"<<ttlSltx<<endl;
    
    //Exit stage right!
    return 0;
}

