/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on February 28, 2017, 12:26 PM
 * Purpose:  calculate distance a car can drive in one full gas tank
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    short crHold=15;   //cars holds 15 Gal in tank
    float drTwn=23.5f; //23.5 miles per gallon when driving in town
    float drHwy=28.9f; //28.9 miles per gallon when driving on the highway
    short tlMiltwn,tlMilhwy;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    tlMiltwn=crHold*drTwn;
    tlMilhwy=crHold*drHwy;
    
    //Output the transformed data
    //Map inputs to outputs or process the data
    cout<<"The car can travel "<<tlMiltwn<<" miles on a full tank in town"<<endl;
    cout<<"The car can travel "<<tlMilhwy<<" miles on a full tank on the highway"<<endl;
 
    
    //Exit stage right!
    return 0;
}

