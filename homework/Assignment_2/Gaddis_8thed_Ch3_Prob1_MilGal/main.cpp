/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on March 7, 2017, 11:09 AM
 * Purpose:  calculate a car's gas mileage
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   // Math inputs
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float milTnk,tnkGal,milPrgl; //Miles per tank, How many gallons a tank holds
                                // and miles per gallon
    
    //Initialize variables
    
    //Input data
    cout<<"Enter the number of gallons of gas your car can hold\n";
    cin>>tnkGal;
    cout<<"Enter the number of miles it can drive on a full tank\n";
    cin>>milTnk;
  
          
    
    //Map inputs to outputs or process the data
    milPrgl=milTnk/tnkGal;

    //Output the transformed data
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"Your car got "<<milPrgl<<" MPG "<<endl;
   
   
   
    
    //Exit stage right!
    return 0;
}

