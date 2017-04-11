/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on March 16, 2017, 11:54 AM
 * Purpose:  Grade Branching Exercise 
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
    unsigned short score; //Integer scores valid from 0-100
    char grade;           // Grade received
     
    
    //Input data
    cout<<"This program produces a grade from a score input\n";
    cout<<"The data type used is an integer [0-100]\n";
    cout<<"Type in the score\n";
    cin>>score;
    if(!(score>=0&&score<=100)){
        cout<<"you failed to type an integer between 0 and 100"<<endl;
        return 1;//Use DeMorgans law to make clear
    }
   
          
    //Map inputs to outputs or process the data
    if(score>=90)        grade='A';
    else if(score>=80)  grade='B';
    else if(score>=70)  grade='C';
    else if(score>=60)  grade='D';
    else                grade='F';
    
        //Output the transformed data
    cout<<"For a score = "<<score<<" your grade is an "<<grade<<endl;
   
    
    //Exit stage right!
    return 0;
}

