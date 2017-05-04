/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on May 4, 2017, 2:00 PM
 * Purpose:  Chapter 6 problem 2 Rectangle Area
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   // Formatting
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
int displayData(float len,float wid,float a);
float getArea(float l, float w);
float getWidth();
float getLength();

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float length1;  //Variable to hold return value of the getLength function
    float width1;   //Variable to hold return value of the getWidth function
    float area1;    //Variable to hold return value of the getArea function
    
    //Let user know what the program does
    cout<<"This program will calculate the area of a Rectangle"<<endl;
   
   
 
    //Initialize the variables by calling the functions
    length1 = getLength();
    width1 = getWidth();
    area1 = getArea(length1,width1);
    
    //Function to display length, width and area
    //the return values from other functions initialized length1,width1,area1
    displayData(length1,width1,area1);
    
       
   
    
    
    //Exit stage right!
    return 0;
}
//Function to get the length
float getLength(){
    float a;            //Variable to hold the user's input
    cout<<"Enter the length: ";cin>>a;
    return a;           //Returning the user's length input as a float
}
float getWidth(){
    float b;            //Variable to hold the user's input
    cout<<"Enter the width: ";cin>>b;
    return b;           //Returning the user's length input as a float       
}
float getArea(float l, float w){
    float area;         //Variable to hold the area 
    area = l * w;       //computation of the area
    return area;        //returning the value of the area as a float
    
}
int displayData(float len,float wid,float a){
    cout<<"length("<<len<<") x "<<"Width("<<wid<<") = Area("<<a<<")"<<endl;
}

