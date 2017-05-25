/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on February 28, 2017, 9:27 AM
 * Purpose:  calculate total purchase , problem 8
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
    float prc1=15.95; //item number one price $15.95
    float prc2=24.95; //item number two, $24.95
    float prc3=6.95;  //item number three, $6.95
    float prc4=12.95;  // item number four, $12.95
    float prc5=3.95;  // item number five, $3.95
    float slsTax=0.07; //percent of tax
    float subTtl,taxTtl,total;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    subTtl=prc1+prc2+prc3+prc4+prc5;
    taxTtl=subTtl*slsTax;
    total=taxTtl+subTtl;
    
    //Output the transformed data
    cout<<"item 1 = $"<<prc1<<endl;
    cout<<"item 2 = $"<<prc2<<endl;
    cout<<"item 3 = $"<<prc3<<endl;
    cout<<"item 4 = $"<<prc4<<endl;
    cout<<"item 5 = $"<<prc5<<endl;
    cout<<"Subtotal = $"<<subTtl<<endl;
    cout<<"Amount of sales tax = $"<<taxTtl<<endl;
    cout<<"Total amount = $"<<total<<endl;
   
    
    //Exit stage right!
    return 0;
}

