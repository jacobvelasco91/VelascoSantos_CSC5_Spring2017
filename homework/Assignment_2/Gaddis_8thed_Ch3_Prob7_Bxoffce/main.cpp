/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on March 09, 2017, 12.11 AM
 * Purpose:  Calculate gross & net profit of theater.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   // Formatting
#include <string>    //Add characters (names)
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PERCENT=100.0f;

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    string mviNme;
    long adult,child;
    float gross;
    float perCntdis=.80f; //80% percent to distributor
    float net,distbtr;
  
    
    //Initialize variables
    
    //Input data
    cout<<"What was the name of the movie? ";cin>>mviNme;
    cout<<"How many Adult tickets sold? ";cin>>adult;
    cout<<"How many child tickets sold? ";cin>>child;
    
   
    //Map inputs to outputs or process the data
    gross=adult+child;
    distbtr=gross*perCntdis;
    net=gross-distbtr;
 
   
    //Output the transformed data
    cout<<"Movie name:                  '"<<mviNme<<"'"<<endl;
    cout<<"Adult tickets sold:           "<<adult<<endl;
    cout<<"Child tickets sold:           "<<child<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Gross Box Office Profit:     $"<<gross<<endl;
    cout<<"Net Box Office Profit:       $"<<net<<endl;
    cout<<"Amount paid to Distributor:  $"<<distbtr<<endl;
    
    
   
    
    //Exit stage right!
    return 0;
}

