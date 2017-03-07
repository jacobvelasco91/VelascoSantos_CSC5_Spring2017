/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on March 07, 2017, 12:01 PM
 * Purpose:  Calculate BMR for candy bars
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
    char sex; // M or F
    unsigned short ht,wt,age; // height, weight, age in years
    unsigned char cdyCals=230; //Candy bar calories
    float bmr; //Basic Metabolic Rate (calories)
    int nCdyBrs; //Number of candy bars we can eat
    
  
    
    //Input data
    cout<<"This program calculates the number of ";
    cout<<"candy bars allowed per day based upon your BMR"<<endl;
    cout<<"Type in your Sex(M/F), Wt(lbs), Ht (in), Age (yrs)"<<endl;
    cout<<"Inputs are integer based"<<endl;
    cin>>sex>>wt>>ht>>age;
    
  
          
     //Map inputs to outputs or process the data
    bmr=(sex=='M')?
         66 + 6.3f*wt + 12.9f*ht - 6.8f*age:
        655 + 4.3f*wt +  4.7f*ht - 4.7f*age;
    nCdyBrs=static_cast<int>(bmr/cdyCals); // static cast make no decimal
   
    //Output the transformed data
    cout<<"Number of candy bars = "<<nCdyBrs<<endl;
   
    
    //Exit stage right!
    return 0;
}

