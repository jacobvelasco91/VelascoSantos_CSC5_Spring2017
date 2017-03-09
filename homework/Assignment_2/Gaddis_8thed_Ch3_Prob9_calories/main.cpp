/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on March 09, 2017, 2:12 PM
 * Purpose:  calculate how many calories a snack holds.
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
    int bgCks=30;
    int srvng=10;
    float echsrv=300;
    long ckAte,calPck,calAte;
  
    
    //Initialize variables
    calPck=(echsrv*srvng)/bgCks;
            
    //Input data
    cout<<"How many cookies did you actually eat? ";cin>>ckAte;
   
    //Map inputs to outputs or process the data
    calAte=calPck*calAte;
    
    if (ckAte>=bgCks)
        cout<<"You ate the whole bag which is 3000 calories!!"<<endl;
   
    
   
    //Output the transformed data
    cout<<"you consumed "<<calAte<<" calories."<<endl;
   
    
    //Exit stage right!
    return 0;
}

