/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on March 07, 2017, 2:18 PM
 * Purpose:  Calculating test average
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   // Math inputs
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float test1,test2,test3,test4,test5,avrg;
  
    
    //Initialize variables
    
    //Input data
    cout<<"Input five test scores\n";
    cout<<"Test 1 = "; cin>>test1;
    cout<<"Test 2 = "; cin>>test2;
    cout<<"Test 3 = "; cin>>test3;
    cout<<"Test 4 = "; cin>>test4;
    cout<<"Test 5 = "; cin>>test5;

  
          
    
    //Map inputs to outputs or process the data
    avrg=(test1+test2+test3+test4+test5)/5;
   
   
    //Output the transformed data
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"Average test score = "<<avrg<<endl;
            
   
   
    
    //Exit stage right!
    return 0;
}

