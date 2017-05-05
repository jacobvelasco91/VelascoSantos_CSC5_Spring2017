/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on May 4, 2017, 9:37 PM
 * Purpose:  Chapter 6 Problem 3 Winning Divisions
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   // Formatting

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float getSales(float division);
void findHighest(float a,float b,float c,float d);



//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float nEast,sEast,nWest,sWest; // Variables to hold sales & validates
   
    
  
    
  
    

    
    
    //Input data
    cout<<"North east"<<endl;
    nEast = getSales(nEast); //Variable calls function getsales() & initializes
    cout<<"South east"<<endl;
    sEast = getSales(sEast); //Variable calls function getsales() & initializes
    cout<<"North west"<<endl;
    nWest = getSales(nWest); //Variable calls function getsales() & initializes
    cout<<"South west"<<endl;
    sWest = getSales(sWest); //Variable calls function getsales() & initializes
    
    //Line breaks
    cout<<endl<<endl;
  
    
    //Function call to find highest sales, variables with values 
    //are inputed in findHighest parameters
    findHighest(nEast,sEast,nWest,sWest);
 
  
    
    
    //Exit stage right!
    return 0;
}

//Function that asks user to input sales & validates & returns the amount
float getSales(float division){
    float amount;
    cout<<"What was the division's sales for the quarter? ";cin>>amount;
    if (amount< 0) {
        cout<<"Input invalid: enter amount greater than 0"<<endl;
        return 1;
    }
    else{
        return amount;
    }
   
}
//Function to find which of the 4 divisions is greater using if statements
void findHighest(float a,float b,float c,float d){
    cout<<fixed<<setprecision(2)<<showpoint;
      if (a > b && a > c && a > d) {
        cout<<"North east was the highest grossing division at $"<<a<<endl;
    }
    else if (b > a && b > c && b > d) {
        cout<<"South east was the highest grossing division at $"<<b<<endl;
    }
     else if (c > a && c > b && c > d) {
        cout<<"North west was the highest grossing division at $"<<c<<endl;
    }
     else{
         cout<<"South west was the highest grossing division at $"<<d<<endl;
     }
}








