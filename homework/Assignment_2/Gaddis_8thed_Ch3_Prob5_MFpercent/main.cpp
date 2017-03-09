/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on March 08, 2017, 5:14 PM
 * Purpose:  Calculating the percentage of male and female students in a class.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   // Math inputs
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PERCENT=100.0f;

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int male,female;  // variable inputs for male and female registered in class
    float totalR;        // Total amount of student registered in class
    float percM,percF;//Percent of male of female in class 
  
    
    //Initialize variables
    
    //Input data
    cout<<"How many Males and Females registered in the C++ class?\n";
    cout<<"Males = ";cin>>male;
    cout<<"females = ";cin>>female;
    
   
          
    
    //Map inputs to outputs or process the data
    totalR=male+female;
    percM=(male/totalR)*PERCENT;
    percF=(female/totalR)*PERCENT;
   
    //Output the transformed data
    cout<<"Total amount of students registered were "<<totalR<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<percM<<"% "<<"males"<<endl;
    cout<<percF<<"% "<<"females"<<endl;
   
 
   
    
    //Exit stage right!
    return 0;
}

