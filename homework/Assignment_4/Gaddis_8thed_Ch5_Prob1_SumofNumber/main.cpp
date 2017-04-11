/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on April 1, 2017, 10:30 AM
 * Purpose:  Using a loop to get the sum of 1 to entered number
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
    int number;          //Variable for number to be entered
    int sum=0;           //variable to add all numbers together

  
  
    
  
    

    //Map inputs to outputs or process the data.
    //Ask User to enter a positive number
    cout<<"This program will calculate the sum from 1 to a number entered"<<endl;
    cout<<endl;
    cout<<"Please enter a positive integer ";
    cin>>number;
    
    //If number entered is negative end the program.
    if (number<=0){
        cout<<endl;
        cout<<"Invalid entry"<<endl;
        return 1;
    }
    //Loop to add numbers together till entered number is reached.
    for(int srtNum=1;srtNum<=number;srtNum++){
        sum=sum+srtNum;
        }
    
   
    
    //Output the transformed data
    cout<<endl;
    cout<<"The total sum of 1 to your number entered is "<<sum<<endl;
    
    //Exit stage right!
    return 0;
}

