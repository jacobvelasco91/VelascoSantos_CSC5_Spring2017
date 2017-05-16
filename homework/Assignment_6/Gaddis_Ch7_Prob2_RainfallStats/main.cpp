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
    const int SIZE=12; //The amount of elements in both arrays
    float rainA[SIZE]; //rain array given a size of 12
    float rain;        //variable to hold amount of rain input from user
    float total = 0;   //variable for total amount of rain
    float average;      //Variable to hold the average amount of rain
    float highest;      //Variable to hold the highest amount of rain in month
    float lowest;       //Variable to hold the lowest amount of rain in month
    int loM,hiM;        //variables to hold number of month
   

    
    //Let user know how the program works
    cout<<"This program will give the average rainfall for the year and"<<endl;
    cout<<"Month with the highest rainfall and the month with the lowest rainfall"<<endl;
    cout<<endl;
    
    
    //for loop to ask user to enter amount of rain given month
    //the for loop will initialize the array as it loops through
    for(int i=0;i<SIZE;i++){
        do{                     //validation
        cout<<"For month "<<i+1<<" Enter total rainfall: ";cin>>rain;
        if(rain<0){
            cout<<"Enter a positive number"<<endl;
        }
        }while(rain<0);
        
        //after validation passes the array index for rain is set
        //total amount of rain is being added up
        rainA[i] = rain;
        total = total+rain;
  
    }
    //lowest and highest rain set to index 0 of rainA
    lowest = rainA[0];
    highest = rainA[0];
    
    //For loop to check which months had the highest and lowest rainfall
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

