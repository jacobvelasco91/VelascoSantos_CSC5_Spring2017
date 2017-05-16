/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on May 15, 2017, 10:13 PM
 * Purpose:  Chapter 8 problem 2 Lottery Winners
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
    const int SIZE=10;      //NUmber of elements in array
    int winList[SIZE]={13579,26791,26792,33445,55555,62483,77777,79422,856447,93121}; //winning lottery numbers array
    int value;      //User input to determine if he won the lottery
    bool win;       //bool variable to check if he got matched a number
    
    //Let user know what the program does
    cout<<"This program will check if you number matched a lottery number for a win"<<endl;
    
    //User enters a 5 digit number
    cout<<"Enter a 5 digit number: ";cin>>value;
    
    //For loop to do a linear search to check if the value matches with lottery numbers
    for(int i=0;i<SIZE;i++){
        if(value == winList[i]){
            win =true;
        }
    }
    
    //Using the bool, if is is true output accordingly
    if(win==true){
        cout<<"YOU JUST WON THE LOTTERY!!"<<endl;
    }
    else{
        cout<<"I'm sorry you did not win the lottery."<<endl;
    }
   
    
  
    
    //Initialize variables
    
    
    //Input data
  
 
    //Map inputs to outputs or process the data  
    
 
       
   
    //Output the transformed data
    
    
    //Exit stage right!
    return 0;
}

