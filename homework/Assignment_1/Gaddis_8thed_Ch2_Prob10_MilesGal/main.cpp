/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on February 28, 2017, 11:14 AM
 * Purpose:  calculating the number of miles per gallon my car gets.
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
    short carGal=15;
    short milsFul=375;
    short mpg;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    mpg=milsFul/carGal;
    
    
    //Output the transformed data
    cout<<"If a car holds "<<carGal<<" gallons of gasoline and drives "
            <<milsFul<<" miles"<<endl;
    cout<<"The MPG the car is getting is "<<mpg<<" miles per gallon"<<endl;
            
    
    //Exit stage right!
    return 0;
}

