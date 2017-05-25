/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on March 09, 2017, 1:43 PM
 * Purpose:  Define how many widgets on a pallet.
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
    float widget=12.5f;               //Weight of each widget
    float plltW,tlplltW,widWght;      //pallet,totalpallet,totalwidget weight
    int numWidg;                      // number of widgets whole integers
    
    //Initialize variables
    
    //Input data
    cout<<"How much does the pallet weigh by itself in lbs? ";cin>>plltW;
    cout<<"what is the total weight in lbs of the pallet with the widgets? ";
    cin>>tlplltW;
   
          
    
    //Map inputs to outputs or process the data
    widWght=tlplltW-plltW;
    numWidg=widWght/widget;
 
   
    //Output the transformed data
    cout<<"The total number of wigets on the pallet are "<<numWidg<<endl;
   
    
    //Exit stage right!
    return 0;
}

