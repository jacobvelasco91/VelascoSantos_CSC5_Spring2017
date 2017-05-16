/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on May 15, 2017, 9:58 PM
 * Purpose:  Chapter 8 problem 1 Charge Account Validation
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
    const int SIZE=18;      //Number of elements in the array
    //Array to hold the charge accounts
    int valida[SIZE]={5658845,4520125,7895122,8777541,8451277,1302850,
                      8080152,4562555,5552012,5050552,7825877,1250255,
                      1005231,6545231,3852085,7576651,7881200,4581002};
    int value;      //variable to hold users input of a value account
    bool valid;     //A bool variable to change when it is valid
    
    //Let user know what the program does
    cout<<"This program will determine if your 7 digit number is valid"<<endl;
    cout<<"Enter your 7 digits charge account number: ";cin>>value;
    
   
    //For loop to run through the whole array as a linear search to see if one matches
    for(int i=0;i<SIZE;i++){
        if(value == valida[i]){  //if statement to check if value is equal to one of the charge accounts let is respond
            valid=true;
        }    
    }
    
    //if statement to check if valid is true or false and responds accordingly
    if(valid==true){
        cout<<"You're number is valid"<<endl;
    }
    else{
        cout<<"You're number is invalid"<<endl;
    }
   
    
  
    
    //Initialize variables
    
    
    //Input data
  
 
    //Map inputs to outputs or process the data  
    
 
       
   
    //Output the transformed data
    
    
    //Exit stage right!
    return 0;
}

