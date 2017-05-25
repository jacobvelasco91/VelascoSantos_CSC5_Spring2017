/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on March 30, 2017, 10:35 AM
 * Purpose:  Display ascii characters
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    
   
    
    //Map inputs to outputs or process data
    
    //i is a number that the "for" tests if it is less or equal to 127, 
    //if it is then it produces the 'cout' to show a character through
    //the static cast. Then it goes through the next step to add
    // 1 'i++' then tests it again
  
    for (int i=0;i<=127;i++) {
        cout<<static_cast<char>(i);
        if(i%16==15)cout<<endl;
    }
 
    //Exit
    return 0;
}

