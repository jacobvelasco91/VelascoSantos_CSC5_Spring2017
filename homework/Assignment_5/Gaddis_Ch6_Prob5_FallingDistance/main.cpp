/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on April 1, 2017, 10:30 AM
 * Purpose:  Chapter 6 Problem 5 falling Distance
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   // Formatting
#include <cmath>     //Math library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float fallingDistance (int t);

//Execution begins here
int main(int argc, char** argv) {
 
    
    //For loop to pass values 1-10 to the falling distance function
    for (int i = 1; i <= 10; i++){
        
        cout<<"In "<<setw(2)<<i<<" seconds an object has fallen "
                <<fallingDistance(i)<<" meters"<<endl;
                
                
        
    }
   
    
  
    

    
    
    //Exit stage right!
    return 0;
}
//Function that determines the distance an object falls in a specific period
float fallingDistance (int t) {
    float distance;                //Variable a value from the formula
    float g = 9.8;                 //Gravity
    distance = .5*(g*pow(t,2));   //Formula d = 1/2gt^2
    
    return distance;             // Returning the value of the expression 
}           

