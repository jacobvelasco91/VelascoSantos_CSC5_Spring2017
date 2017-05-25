/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on March 16, 2017, 11:23 AM
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
    if(!(score>=0&&score<=100)){      //Add braces to only execute whats inside
        cout<<"you failed to yep an integer between 0 and 100"<<endl;
        return 1;//Use DeMorgans law to make clear
    }
   
          
    //Map inputs to outputs or process the data
   
    if(score>=90&&score<=100)grade='A';
    if(score>=80&&score<90)  grade='B';
    if(score>=70&&score<80)  grade='C';
    if(score>=60&&score<70)  grade='D';
    if(score<60)             grade='F';
    
        //Output the transformed data
    cout<<"For a score = "<<score<<" your grade is an "<<grade<<endl;
   
    
    //Exit stage right!
    return 0;
}

