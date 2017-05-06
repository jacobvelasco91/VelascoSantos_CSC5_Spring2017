/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on May 5, 2017, 5:35 PM
 * Purpose:  Chapter 6 problem 7 Celsius Temperature Table
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   // Formatting
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float celsius (float fahren);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
   
    
  
    //Header for the table
    cout<<setw(10)<<"Fahrenheit"<<setw(10)<<"Celsius"<<endl;
    cout<<"-------------------------"<<endl;
    
    //For loop to run 1-20 in celsius function  
    for (int f = 1; f<=20; f++){
        float celTemp;      //variable to hold the return value of the function
        celTemp = celsius(f); //calling function & initializing variable
        
        //creating the table
        cout<<setw(5)<<f<<setw(15)<<celTemp<<endl;
    }
    
    
    //Exit stage right!
    return 0;
}
//Function that will convert a temperature from fahrenheit to celsius
float celsius (float fahren){
    float cTemp;         //Variable to hold new celsius temperature value
    
    cTemp = 0.555555556*(fahren-32); //Calculations of formula C=5/9(F-32)
    
    return cTemp;
}

