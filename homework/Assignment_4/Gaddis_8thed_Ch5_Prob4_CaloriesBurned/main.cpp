/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on April 1, 2017, 10:30 AM
 * Purpose:  Using a loop to calculate calories burned.
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
    float calBrnd=3.6f; //Calories Burned per minute
  
  
    
  
    //Let user know what the program does.
    cout<<"This Program will calculate how many calories were burned"<<endl;
    cout<<"after 5, 10, 15, 20, 25, and 30 minutes, each minute 3.6 "<<endl;
    cout<<"calories are burned."<<endl; 
    cout<<endl;
    
    //Using For loop to count minutes till it reaches 30
    for (int min=0;min<=30;min++){
    
    //Nested if else statement to process the calories burned per minutes.
    if (min==5) 
        cout<<"In 5 minutes "<<min*calBrnd<<" calories were burned"<<endl;
    else if (min==10)
        cout<<"In 10 minutes "<<min*calBrnd<<" calories were burned"<<endl;
    else if (min==15)
        cout<<"In 15 minutes "<<min*calBrnd<<" calories were burned"<<endl;
    else if (min==20)
        cout<<"In 20 minutes "<<min*calBrnd<<" calories were burned"<<endl;
    else if (min==25)
        cout<<"In 25 minutes "<<min*calBrnd<<" calories were burned"<<endl;
    else if (min==30)
        cout<<"In 30 minutes "<<min*calBrnd<<" calories were burned"<<endl;
    }
    
    
    //Exit stage right!
    return 0;
}

