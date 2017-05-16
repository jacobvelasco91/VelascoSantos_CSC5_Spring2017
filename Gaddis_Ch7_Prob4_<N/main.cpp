/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on May 15, 2017, 8:04 PM
 * Purpose:  Chapter  problem 4 Larger than N
 */

//System Libraries
#include <iostream>  //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
int lrgerN (int[],int,int); //function prototype


//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const int SIZE=10;      //The amount of elements in the array
    int aryList[SIZE]={9,8,3,5,6,4,7,2,1,5};        //array given numbers in the index
    int num = 5;        //A random number to use to display numbers in array greater than
    
    
    //function call and sending three arguments
    lrgerN(aryList,SIZE,num);
    
   
    
    
    //Exit stage right!
    return 0;
}
//function to check which numbers in the array are bigger than n
int lrgerN (int arry[],int sze, int n){
    for(int i=0;i<sze;i++){
        if(arry[i]>n){
            cout<<arry[i]<<endl;
        }
    }
}

