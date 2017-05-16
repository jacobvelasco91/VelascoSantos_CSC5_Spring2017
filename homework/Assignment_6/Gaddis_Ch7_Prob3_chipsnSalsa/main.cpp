/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on May 5, 2017, 10:58 PM
 * Purpose:  Chapter 6 problem 10 future value
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>   //string library
#include <iomanip> //formatting library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes


//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const int SIZE = 5;         //NUmber of elements in the array
    string salsa[SIZE] = {"Mild","Medium","Sweet","Hot","Zesty"}; //names of salsa's
    int jars[SIZE];     //jars array with a size of 5
    
    //variables to hold jars sold (j) total jars sold, lowest and highest selling jars
    int j,total,low,high;   
    string typeL,typeH;     //String variable to hold name of highest and lowest sold jars
    
    
    
    
    //Let user know what to do
    cout<<"This program will calculate the amount of jars sold for each salsa type"<<endl;
    
    //for loop to fill jars array
    for(int i = 0;i<SIZE;i++){
        do{                                             //do while for validation
        cout<<"How many sold for "<<salsa[i]<<": ";cin>>j;
        if(j<0){
            cout<<"Cannot receive negative numbers"<<endl;
        }
        }while(j<0);
        jars[i] = j;
        total+=jars[i];         //adding up the jars
    }
    //setting high and low to the first value in the jars array
    high = jars[0];
    low =jars[0];
    
    //for loop to check the lowest and highest 
    for(int i=0;i<SIZE;i++){
        if(jars[i]>high){
            high = jars[i];
            typeH = salsa[i];       //initializing typeH with the salsa array
        }
        else if(jars[i]<low){
            low = jars[i];
            typeL = salsa[i];       //initializing typeH with the salsa array
        }
    }
    
    //Displaying gathered data
    cout<<endl;
    cout<<"The sales for each type of salsa are as follows:"<<endl<<endl;
    
    //for loop to run through each parallel array
    for(int i=0;i<SIZE;i++){
        
        cout<<setw(6)<<salsa[i]<<setw(10)<<" salsa sold "<<jars[i]<<" jars."<<endl;
    }
    cout<<endl;
    cout<<"Total jars sold were "<<total<<endl;
    cout<<"Highest selling was "<<typeH<<endl;
    cout<<"Lowest selling was "<<typeL<<endl;
    
    
    

    
    
    
   
    
  
    
    //Initialize variables
    
    
    //Input data
  
 
    //Map inputs to outputs or process the data  
    
 
       
   
    //Output the transformed data
    
    
    //Exit stage right!
    return 0;
}

