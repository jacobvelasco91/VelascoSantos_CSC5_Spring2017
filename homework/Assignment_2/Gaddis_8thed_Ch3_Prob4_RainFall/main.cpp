/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on March 07, 2017, 2:38 PM
 * Purpose:  Calculating Average rainfall for 3 months
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   // Math inputs
#include <string>    // For names and such
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    string mnth1,mnth2,mnth3;       //3 variables for the input names of months
    float rain1,rain2,rain3;        //3 variables for input of inches of rain
    float avrgRn;                   //Average rainfall 
    
    //Initialize variables
    
    //Input data
    cout<<"Calculation of the average rainfall in 3 months.\n";
    cout<<endl;
    cout<<"Enter name of month and how much rain fell in inches.\n";
    cin>>mnth1>>rain1;
    cin>>mnth2>>rain2;
    cin>>mnth3>>rain3;
    

    //Map inputs to outputs or process the data
    avrgRn=(rain1+rain2+rain3)/3;
   
    //Output the transformed data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The average rainfall for "<<mnth1<<", "<<mnth2
        <<", and "<<mnth3<<" is "<<avrgRn<<" inches of rain."<<endl;
   
    
    //Exit stage right!
    return 0;
}

