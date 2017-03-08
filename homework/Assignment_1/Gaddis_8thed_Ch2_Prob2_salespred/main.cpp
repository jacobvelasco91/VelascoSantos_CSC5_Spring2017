/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on February 27, 2017, 11:43 pM
 * Purpose:  Predict how much the East Coast division will generate
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PERCENT=100.0f; //100%
const float MILLION=1.0e6; // 1 million

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float eastDivp=0.58; //58% of total sales
    float salYr=8600000; // 8.6 mil $'s
    float eastYr;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
     eastYr=salYr*eastDivp/MILLION;
    
    //Output the transformed data
     cout<<"With the East division generating "<<eastDivp*PERCENT
             <<"% of yearly sales"<<endl;
     cout<<"and a total yearly sales of $"<<salYr/MILLION<<" million"<<endl;
     cout<<"The east division would generate $"<<
             eastYr<<" million in yearly sales"<<endl;    
    
    //Exit stage right!
    return 0;
}

