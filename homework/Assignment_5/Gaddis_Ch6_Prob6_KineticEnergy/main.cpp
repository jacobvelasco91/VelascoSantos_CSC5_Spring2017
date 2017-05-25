/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on May 5, 2017, 4:30 PM
 * Purpose:  Chapter 6 problem 6 Kinetic Energy
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   // Formatting
#include <cmath>     //Math library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float kineticEnergy(float mass,float velo);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float m,v;      //Variables to hold users mass & velocity inputs
    float kinetic;   //Variable to hold the return value of a function
    
    
    //Let User know what program does and input data
    cout<<setw(65)<<"*Program calculates the Kinetic Energy of an Object*\n";
    cout<<endl;
    cout<<"Enter Mass (in kilograms) of object: ";cin>>m;
    cout<<"Enter velocity (in meters per second) of object: ";cin>>v;
    
    //Initializing kinetic by calling the function
    kinetic = kineticEnergy(m,v);
    
    cout<<"The amount of kinetic energy the object has is "<<kinetic<<endl;
    
   
   
 
    //Map inputs to outputs or process the data  
    
 
       
   
    //Output the transformed data
    
    
    //Exit stage right!
    return 0;
}
float kineticEnergy(float mass,float velo){
    float kE;       //Variable to hold Kinetic Energy value
    
    //entering the values of the parameters into formula
    //mass & velo received their values from the arguments
    kE = 0.5*(mass*pow(velo,2)); 
    
    return kE;      //Returning the value of the expression
}

