/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on March 20, 2017, 6:58 PM
 * Purpose:  One project that solves all 10 problems.
 *           1. Program to determine which of two numbers is greater and which
 *              is smaller, using conditional operator.
 *           2.Converts a user's input number into a Roman Numeral, using 
 *             switch statement.
 *           3. Test user input to check if it is a "magic date" by multiplying
 *              the month by date.
 *           4. Calculate which area of two rectangles is greatest or if equal.
 *           5. Calculating BMI and determining if someone is under,optimal,
 *              or overweight.
 *           6.Calculate if weight is too heavy or too light in Newtons.
 *   
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   // Formatting
#include <cmath>     // math library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const int MINUTE=60;//How many seconds in a minute
const int HOUR=60*MINUTE;//How many seconds in a hour
const int DAY=24*HOUR;//How many seconds in a day
const int WEEK=7*DAY;//How many seconds in a week
const int YEAR=52*WEEK;//How many seconds in year
const int MONTH=WEEK*13/3;//How many Seconds in an average month

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    
    //Problem 1
    int num1,num2;  // Variables for input value
    string g,g2;       //variable determine which is greater
    
    //Problem 2
    int numb1;
    string romNum;
    
    //Problem 3
    int m1,d1,y1;
    
    //Problem 4
    int l1,w1,l2,w2,area1,area2;
    
    //Problem 5
    float p1,h1,BMI;
    string condi;
    
    //Problem 6
    float mass,weight;
    
    //Problem 7
    int nSecs;//Number of seconds to convert
    int nYrs,nMnths,nWks,nDys,nHrs,nMin;
  
    
    //Problem 1
    //Ask user to enter two numbers to determine which is greater or smaller.
    cout<<"This program will determine which number is greater ";
    cout<<"and which is smaller"<<endl;        
    cout<<"Please enter two numbers"<<endl;
    cin>>num1>>num2;
    if (num1==num2){
        cout<<"They are equal numbers!"<<endl;
    }
    else {
    g= num1>num2? "greater":"less";                 //Conditional Operator
        cout<<num1<<" is "<<g<<" than "<<num2<<endl;
    }
    
        
        
        
        
    //space in between questions  
    cout<<"____________________________________________________________";
    cout<<"____________________________________________\n";
    cout<<" "<<endl;
    //space in between questions
    
    
    
    
    
    //Problem 2   
    //Ask user to enter a number from 1-10 to convert it to a Roman numeral.
    cout<<"please enter a number from 1-10 to convert to a Roman numeral.\n";
    cin>>numb1;
    if(!(numb1>=1&&numb1<=10)){
        cout<<"Invalid entry, please enter an integer 1-10."<<endl;
        return 1;//Use DeMorgans law to make clear
    }
    switch(numb1){
        case  10: romNum="X";break;
        case   9: romNum="IX";break;
        case   8: romNum="VIII";break;
        case   7: romNum="VII";break;
        case   6: romNum="VI";break;
        case   5: romNum="V";break;
        case   4: romNum="IV";break;
        case   3: romNum="III";break;
        case   2: romNum="II";break;
        case   1: romNum="I";break;
    }
    cout<<"Roman Numeral for "<<numb1<<" is "<<romNum<<endl;
    
    
   //space in between questions  
    cout<<"____________________________________________________________";
    cout<<"____________________________________________\n";
    cout<<" "<<endl;
    //space in between questions
    
    
    
    //Problem 3
    //Ask user to enter a month, day, and year
    cout<<"We are going to find out if the date you enter is a magic date!\n";
    cout<<"Enter the month, then day, then year(last two numbers)"
        <<"..all numeric form w/ a space in-between"<<endl;
    cin>>m1>>d1>>y1;
    
    //Used IF statement to check product of month and day if equaled the year.
    if(m1*d1==y1){
        cout<<"The date is magic!"<<endl;
    }
        else
        cout<<"sorry that is not a magic date."<<endl;
    
    
    
    //space in between questions  
    cout<<"____________________________________________________________";
    cout<<"____________________________________________\n";
    cout<<" "<<endl;
    //space in between questions
    
    
    
    //Problem 4
    //Ask user to enter length and width of two rectangles
    cout<<"This program will calculate which of two rectangles has the "
        <<"greater area.\n";
    cout<<"Enter the length and width for the first rectangle.\n";
    cout<<"length = ";cin>>l1;
    cout<<"width = ";cin>>w1;
    cout<<"Enter the length and width for the second rectangle.\n";
    cout<<"length = ";cin>>l2;
    cout<<"width = ";cin>>w2;
    
    area1=l1*w1;
    area2=l2*w2;
    
    if (area1==area2){
        cout<<"The areas are the same"<<endl;
    }
    else if (area1>area2)
        cout<<"Rectangle one has a greater area at "<<area1<<endl;
    else if (area2>area1)
        cout<<"Rectangle two has a greater area at "<<area2<<endl;
    
    
    
    //space in between questions  
    cout<<"____________________________________________________________";
    cout<<"____________________________________________\n";
    cout<<" "<<endl;
    //space in between questions
    
    
    
    //Problem 5
    //Ask user to enter his weight in pounds and height in inches 
    cout<<"We are going to determine if you are underweight"
        <<"overweight, or at a optimal weight."<<endl;
    cout<<"Enter your weight in pounds ";cin>>w1;
    cout<<"Enter your height in inches ";cin>>h1;
    
    BMI=(w1*703)/(pow(h1,2));
    
    condi= (BMI>=18.5&&BMI<=25)? "optimal weight":
           (BMI<18.5)?           "underweight":"overweight";
    cout<<"You have "<<condi<<" condition."<<endl;
    
    
     //space in between questions  
    cout<<"____________________________________________________________";
    cout<<"____________________________________________\n";
    cout<<" "<<endl;
    //space in between questions
    
    
    
    //Problem 6
    //Ask user to enter objects mass to see if its too heavy or light
    cout<<"Enter the objects mass"<<endl;
    cin>>mass;
    weight=mass*9.8;
    cout<<"The objects weight is "<<weight<<"newtons"<<endl;
    if (weight>1000){
        cout<<"The object is too heavy"<<endl;
    }
    else if (weight<10)
        cout<<"Object is too light"<<endl;
    
    
    
    
    //space in between questions  
    cout<<"____________________________________________________________";
    cout<<"____________________________________________\n";
    cout<<" "<<endl;
    //space in between questions
    
    
    
    //Problem 7
    cout<<"This program converts seconds to Years/Months/Weeks/Days/Hours"<<endl;
    cout<<"Input the number of seconds for the conversion/equivalence"<<endl;
    cin>>nSecs;
   
   
    nYrs=nSecs/YEAR;        //Number of Years
    cout<<nYrs<<" Years (";
    nSecs-=nYrs*YEAR;       //Subtract the yearly seconds from remaining
   
    nWks=nSecs/WEEK;        //Number of weeks
    cout<<nWks<<" Weeks ";
    
    nMnths=nWks*3/13;       //Convert number of weeks to months
    cout<<nMnths<<" Months ) ";
    nSecs-=nWks*WEEK;       //Subtract the weekly seconds from remaining
   
    nDys=nSecs/DAY;         //Number of days
    cout<<nDys<<" Days ";
    nSecs-=nDys*DAY;        //Subtract number of days remaining
    
    nHrs=nSecs/HOUR;        //Number of hours 
    cout<<nHrs<<" Hours ";
   
    nSecs-=nHrs*HOUR;       //Subtract the hourly seconds from remaining
    nMin=nSecs/MINUTE;      //Number of minutes
    cout<<nMin<<" Minutes ";
    
    nSecs-=nMin*MINUTE;     //remaining number of seconds
    cout<<nSecs<<" Seconds";
     
    
    
    
    
    
    
    
    
    //Output the transformed data
  
    
    //Exit stage right!
    return 0;
}

