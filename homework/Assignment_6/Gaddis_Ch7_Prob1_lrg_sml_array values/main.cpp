/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on May 15, 2017, 2:53 PM
 * Purpose:  Chapter 7 problem 1 Largest/Smallest Array Values
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
    const int SIZE = 10;        //number of index for a given array
    int array[SIZE];            //Initializing the size of the array w/SIZE /10
    int value;                  //Variable to store value entered by user
    int highest,lowest;         //Variables to store lowest and highest values
    
    //Describe what the program does
    cout<<"This program will receive 10 values and determine the lowest\n";
    cout<<"And highest value. Please enter 10 values."<<endl;
    //For loop to initialize the array[0-10]
    for(int i=0;i<SIZE;i++){
        cout<<"Enter an integer: ";cin>>value;   //User enters value
      
        array[i]=value;              // value gets stored in the array index
    }
    //highest and lowest variables are set to the the value of array[0]
    highest = array[0];
    lowest = array[0];
    //For loop to count through the array and check which value is the highest
    //and which value is the lowest.
    for(int i=0;i<SIZE;i++){
        if(array[i]>highest){
            highest = array[i];
        }
        else if(array[i]<lowest){
            lowest = array[i];
        }
    }
    //output the highest and lowest values
    cout<<"Greatest value: "<<highest<<endl;
    cout<<"Lowest value: "<<lowest<<endl;
    
    

    
  

    
  
    
   
    
   

    
    //Exit stage right!
    return 0;
}

