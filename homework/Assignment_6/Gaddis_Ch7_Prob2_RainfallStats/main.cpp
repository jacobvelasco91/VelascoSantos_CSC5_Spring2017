/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on May 15, 2017, 4:37 PM
 * Purpose:  Chapter 7 Problem 2 rainfall statistics
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes


//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const int SIZE=12;
    float rainA[SIZE];
    float rain;
    float total = 0;
    float average;
    float highest;
    float lowest;
    int loM,hiM;
   

    
    
    cout<<"This program will give the average rainfall for the year and"<<endl;
    cout<<"Month with the highest rainfall and the month with the lowest rainfall"<<endl;
    cout<<endl;
    
    
  
    for(int i=0;i<SIZE;i++){
        do{
        cout<<"For month "<<i+1<<" Enter total rainfall: ";cin>>rain;
        if(rain<0){
            cout<<"Enter a positive number"<<endl;
        }
        }while(rain<0);
        
        rainA[i] = rain;
        total = total+rain;
  
    }
    lowest = rainA[0];
    highest = rainA[0];
    
    for(int i=0;i<SIZE;i++){
        if(rainA[i]>highest){
            highest = rainA[i];
            hiM = i+1;
        }
        else if(rainA[i]<lowest){
            lowest = rainA[i];
            loM = i+1;
        }
    }
    
    
    
    average = total/12;
    
    cout<<endl;
    cout<<"The total rainfall for the year was: "<<total<<endl;
    cout<<"The average rainfall for the year was: "<<average<<endl;
    cout<<"Month "<<hiM<<" had the highest rainfall of "<<highest<<endl;
    cout<<"Month "<<loM<<" had the lowest rainfall of "<<lowest<<endl;
    
    
  
    
    
    
   
   
    
  
    
    //Initialize variables
    
    
    //Input data
  
 
    //Map inputs to outputs or process the data  
    
 
       
   
    //Output the transformed data
    
    
    //Exit stage right!
    return 0;
}

