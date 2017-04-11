/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on March 07, 2017, 1:38 PM
 * Purpose:  Calculate total income from Class A, B, C. 
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   // Math inputs
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PERCENT=100.00;

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float classA,classB,classC;//Ticket price per class A=15 , B=12 , C=9 in $'s
  
  
    
    //Initialize variables
    
    //Input data
    cout<<"Cost of tickets per Class, A=$15 , B=$12, C=$9\n";
    cout<<"How many tickets were sold for each class ?\n";
    cout<<"Class A = ";cin>>classA;  // Input on same line, Because no "endl;"
    cout<<"Class B = ";cin>>classB;  // --
    cout<<"Class C = ";cin>>classC;  // --
  
          
    
    //Map inputs to outputs or process the data
    classA=classA*15.00f;
    classB=classB*12.00f;
    classC=classC*9.00f;
   
    
   //Output the transformed data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Income generated according to their Class\n";
    cout<<"Class A = $"<<classA<<endl;
    cout<<"Class B = $"<<classB<<endl;
    cout<<"Class C = $"<<classC<<endl;
  
    //Exit stage right!
    return 0;
}

