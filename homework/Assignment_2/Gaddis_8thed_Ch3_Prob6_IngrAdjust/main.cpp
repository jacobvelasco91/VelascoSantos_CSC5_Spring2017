/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on March 07, 2017, 2:38 PM
 * Purpose:  Recipe Adjuster
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
    float newSgr,newButr,newFlr;     //New sugar,butter,flour recipe variables.
    float cookiesW;                  //Input cookies wanted
    float cookieR;                   //Cookie ratio
    float batch=48;                  //recipe batch
    float sugar=1.5f;                //original sugar recipe 
    float butter=1.00f;              //Original butter recipe
    float flour=2.75f;               //Original flour recipe
    
  
    
    //Initialize variables
    
    //Input data
    cout<<"How many cookies would you like to bake?\n";
    cin>>cookiesW;
          
    
    //Map inputs to outputs or process the data
    cookieR=cookiesW/batch;             
    newSgr=cookieR*sugar;
    newButr=cookieR*butter;
    newFlr=cookieR*flour;
    
 
   
    //Output the transformed data
    cout<<"This is the recipe for the amount of cookies you need.\n";
    cout<<"Sugar = "<<newSgr<<" cups"<<endl;
    cout<<"Butter = "<<newButr<<" cups"<<endl;
    cout<<"Flour = "<<newFlr<<" cups"<<endl;
    cout<<"Enjoy!"<<endl;
   
    
    //Exit stage right!
    return 0;
}

