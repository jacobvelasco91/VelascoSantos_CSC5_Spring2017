/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on May 5, 2017, 10:58 PM
 * Purpose:  Chapter 7 problem 3 Lottery Winners Modification
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
    int first = 0;
    int last = SIZE-1;
    int middle;
    
    //Let user know what the program does
    cout<<"This program will check if you number matched a lottery number for a win"<<endl;
    
    //User enters a 5 digit number
    cout<<"Enter a 5 digit number: ";cin>>value;
    
    for(int i=0;i<SIZE;i++){
        middle = (first+last)/2;
        if(value == winList[middle]){
            win = true;
        }
        else if(array[middle]>value){
            last = middle-1;
        }
        else{
            first = middle+1;
        }
    }
    
 
       
   
    //Output the transformed data
    
    
    //Exit stage right!
    return 0;
}

