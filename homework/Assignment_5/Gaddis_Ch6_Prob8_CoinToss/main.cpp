/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on May 5, 2017, 5:55 PM
 * Purpose:  Chapter 6 problem 8 Coin toss
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   // For rand or srand
#include <ctime>    //Seed for time
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
int coinToss();
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int toss;
    int facev;

    
  
    
    //Initialize variables
    
    
    //Input data
    cout<<"How many times do you want to toss the coin? ";cin>>toss;
    
    for(int i=1;i<=toss;i++){
    facev = coinToss();
    }
    
     if (facev == 1){
        cout<<"Heads"<<endl;
    }
    else {
        cout<<"Tails"<<endl;
    }
 
    //Map inputs to outputs or process the data  
    
 
       
   
    //Output the transformed data
    
    
    //Exit stage right!
    return 0;
}
int coinToss(){
    int face;
    srand(time(0));
    face = 1+rand()%2;
    
    return face;
}

