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
    int hrsWrkd;   //Integer hours worked
    int payRate=10;           // Pay rate in $'s
    int payChck;            //Paycheck in $'s
    
    
     
    
    //Input data
    cout<<"This program produces your paycheck from Hours worked. \n";
    cout<<"The data type used is an integer\n";
    cout<<"Type in the Hours worked\n";
    cin>>hrsWrkd;
    
 
    //Map inputs to outputs or process the data
  
    if(hrsWrkd<=40)payChck=payRate*hrsWrkd;
    if(hrsWrkd>40) payChck=payRate*hrsWrkd+payRate*(hrsWrkd-40);
    
    
    
   
    /*if(score>=90&&score<=100)grade='A';
    if(score>=80&&score<90)  grade='B';
    if(score>=70&&score<80)  grade='C';
    if(score>=60&&score<70)  grade='D';
    if(score<60)             grade='F';
     */
    
        //Output the transformed data
    cout<<"For working = "<<hrsWrkd<<"hrs "<<"Your paycheck will be $"<<
            payChck<<endl;
   
    
    //Exit stage right!
    return 0;
}

