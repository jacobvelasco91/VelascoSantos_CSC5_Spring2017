/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on MAy 4, 2017, 10:39 PM
 * Purpose:  Chapter 6 problem 4
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>    //string of charcters
#include <cstdlib>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
int getNumAccidents(string region);
void findLowest(int n,int s,int e,int w,int c);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int north,south,east,west,central;

  
    
    //Initialize variables
    
    
    //Input data
    north   = getNumAccidents("North");
    south   = getNumAccidents("South");
    east    = getNumAccidents("East");
    west    = getNumAccidents("West");
    central = getNumAccidents("Central");
    
    cout<<endl;
    
    findLowest(north,south,east,west,central);
  
  
   
   
 
    //Map inputs to outputs or process the data  
    
 
       
   
    //Output the transformed data
    
    
    //Exit stage right!
    return 0;
}

int getNumAccidents(string region){
    int acci;
    cout<<"How many accidents were in the "<<region<<" region last year? ";cin>>acci;
    if(acci<0){
        cout<<"Input invalid: number was less than 0"<<endl;
        exit(0);
    }
            
    return acci;
}
void findLowest(int n,int s,int e,int w,int c){
    if(n < s && n < e && n < w && n < c){
        cout<<"The North region has the least amount of accidents at "<<n<<endl;
    }
    else if(s < n && s < e && s < w && s < c){
        cout<<"The South region has the least amount of accidents at "<<s<<endl;
        
    }
    else if(e < n && e < s && e < w && e < c){
        cout<<"The East region has the least amount of accidents at "<<e<<endl;
        
    }
    else if(w < n && w < s && w < e && w < c){
        cout<<"The West region has the least amount of accidents at "<<w<<endl;
        
    }
    else {
        cout<<"The Central region has the least amount of accidents at "<<c<<endl;
    }
}

