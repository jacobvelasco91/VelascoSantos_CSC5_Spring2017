/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on February 24, 2017, 11:18 AM
 * Purpose:  Problem 1 - Sum of two numbers
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Random number generator
#include <ctime>     //Time Library to seed the random number generator
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Initialize the random number generator with time
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    short num1,num2,sum ;
    
    //Initialize variables
    num1=rand()%51+50;//[50-100]
    num2=rand()%51+50;//[50-100]
    
    //Input data
    
    //Map inputs to outputs or process the data
    sum=num1+num2;
    
    
    //Output the transformed data
    cout<<num1<<" + "<<num2<<" = "<<sum<<endl;
    
    //Exit stage right!
    return 0;
}

