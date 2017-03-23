/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on March 23, 2017, 11:46 AM
 * Purpose:  Sum 1 to N
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
    //Declare variables and initialize 
    //Make sure 0<=n<=40000
    int n=10000,sum=0;
   
  
  

 
    //Map inputs to outputs or process the data
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    
       
   
    //Output the transformed data
    cout<<"The sum of 1 to "<<n<<" = "<<sum<<endl;
    cout<<"and "<<n<<" *("<<n<<"+1)/2= "<<n*(n+1)/2<<endl;
    
    
    //Exit stage right!
    return 0;
}

