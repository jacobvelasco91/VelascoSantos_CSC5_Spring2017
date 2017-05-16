/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on May 15, 2017, 8:57 PM
 * Purpose:  Chapter 7 problem 5 Monkey Business
 */

//System Libraries
#include <iostream>  //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes


//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const int SIZE=5; //Number of elements in all 3 arrays;
    float monk1[SIZE];  //Row 1 of monkey 1 for days of the week
    float monk2[SIZE];  //Row 1 of monkey 1 for days of the week
    float monk3[SIZE];  //Row 1 of monkey 1 for days of the week
    float f;          //Number of pounds of food
    float total;
    float average;
    float lowest1,highest1,lowest2,highest2,lowest3,highest3;
    
    
    cout<<"This program will calculate how much 3 monkeys eat during a given week"<<endl;
    
    
    cout<<"Enter the amount of food in lbs for monkey 1"<<endl;
    for(int i=0;i<SIZE;i++){
        do{
            cout<<"Pounds of food for day "<<i+1<<": ";cin>>f;
            if(f<0){
                cout<<"Enter positive number of pounds"<<endl;
            }
        } while(f<0);
        monk1[i] = f;
    }
    
    cout<<"Enter the amount of food in lbs for monkey 2"<<endl;
    for(int i=0;i<SIZE;i++){
        do{
            cout<<"Pounds of food for day "<<i+1<<": ";cin>>f;
            if(f<0){
                cout<<"Enter positive number of pounds"<<endl;
            }
        } while(f<0);
        monk2[i] = f;
    }
    
    cout<<"Enter the amount of food in lbs for monkey 3"<<endl;
    for(int i=0;i<SIZE;i++){
        do{
            cout<<"Pounds of food for day "<<i+1<<": ";cin>>f;
            if(f<0){
                cout<<"Enter positive number of pounds"<<endl;
            }
        } while(f<0);
        monk3[i] = f;
    }
    
    for(int i=0;i<SIZE;i++){
        total+=monk1[i]+monk2[i]+monk3[i];
    }
    
    lowest1 = monk1[0];
    highest1 = monk1[0];
    
    for(int i=0;i<SIZE;i++){
        if(monk1[i]>highest1){
            highest1 = monk1[i];
        }
        else if(monk1[i]<lowest1){
            lowest1 = monk1[i];
        }
    }
    
    lowest2 = monk2[0];
    highest2 = monk2[0];
    
    for(int i=0;i<SIZE;i++){
        if(monk2[i]>highest2){
            highest2 = monk2[i];
        }
        else if(monk2[i]<lowest2){
            lowest2 = monk2[i];
        }
    }
    
    lowest3= monk3[0];
    highest3 = monk3[0];
    
    for(int i=0;i<SIZE;i++){
        if(monk3[i]>highest3){
            highest3 = monk3[i];
        }
        else if(monk3[i]<lowest3){
            lowest3 = monk3[i];
        }
    }
    
    average = total/SIZE;
    
    cout<<"The average amount eaten per day by family of monkeys was: "<<average<<"lbs"<<endl;
    cout<<"The highest amount of food eaten during the week by monkey 1,2, and 3 was: "<<highest1<<" "<<highest2<<" "<<highest3<<endl;
    cout<<"The lowest amount of food eaten during the week by monkey 1, 2, and 3 was: "<<lowest1<<" "<<lowest2<<" "<<lowest3<<endl;
    
    
    
    
    

    
    
    
   
    
  
    
    //Initialize variables
    
    
    //Input data
  
 
    //Map inputs to outputs or process the data  
    
 
       
   
    //Output the transformed data
    
    
    //Exit stage right!
    return 0;
}

