/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on April 4, 2017, 9:51 AM
 * Purpose:  Chapter 6 Problem 6 Calculate retail with a function
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //Formatting Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float calRetail (float price, float markup);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int cost;
    float markUp;
 
    
  
    
    //Initialize variables
    
    
    
    //Input data
    cout<<"This Program will determine a wholesale items retail cost."<<endl;
    cout<<"Enter an items wholesale cost: $";cin>>cost;
    cout<<"What is its markup percentage?: ";cin>>markUp;
    
   

    calRetail(cost,markUp);
       
   
    //Output the transformed data
    
    
    //Exit stage right!
    return 0;
}
float calRetail (float price, float percent){
    float retailPrc; 
    
    if (price <= 0) {
        cout<<"Input Invalid"<<endl;
        return 1;
    }
    else {
        percent = percent/100;
        retailPrc = price + price * percent;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Retail cost for $"<<price<<" with a markup of "<<percent*100<<
                "% is $"<<retailPrc<<endl;
    }
}

