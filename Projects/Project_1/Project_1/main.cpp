/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on April 10, 2017, 5:20 PM
 * Purpose:  Project 1 
 *           A game similar to Jeopardy.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   // Formatting
#include <cmath>     //math operators
#include <string>    // Required for the string class
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    char choice;    //choice of the category to be used in the game
    string level;
    string answer,answer2;
    int wins=0;
    
   
   
    
  
    
  
    
    //Welcoming text and Name of Game.
    cout<<"                     -----------------------------------"<<endl;
    cout<<"                     - Welcome to Guess the word Game! -"<<endl;
    cout<<" -------------------------------------------------------------"
        <<"--------------"<<endl;    
    
    //Explanation of the game
    cout<<" - Similar to Jeopardy, this game displays 3 columns which are "
        <<"categories. -\n";
    cout<<" - In these categories there are 3 questions which are rated easy," 
        <<" medium  -"<<endl;
    cout<<" - or hard. To play you will have to choose a category,then choose "
        <<"a level -"<<endl;
    cout<<" - of difficulty. Points will be awarded accordingly for each "
        <<"question you -"<<endl; 
    cout<<" - get correct. Have fun!                                         "
            <<"         -"<<endl;
    cout<<" -------------------------------------------------------------"
        <<"--------------"<<endl;   
    cout<<endl;
    
    //Instructions on how to play the game
    cout<<"To choose a category enter the character 'M' for movies, 'A' for "
        <<"animals, 'H' for history.\n";   
    cout<<"To choose a level of difficulty enter 'easy', 'medium', or 'hard'\n";
    cout<<endl;
    //Display Game table.
    cout<<"  ______________________________________________________________ \n";
    cout<<" |      MOVIES       |       ANIMALS       |       HISTORY      |\n";
    cout<<" |===================|=====================|====================|\n";
    cout<<" |                   |                     |                    |\n";
    cout<<" |       Easy        |        Easy         |        Easy        |\n";
    cout<<" |                   |                     |                    |\n";
    cout<<" |*******************|*********************|********************|\n";
    cout<<" |                   |                     |                    |\n";
    cout<<" |      Medium       |       Medium        |       Medium       |\n";
    cout<<" |                   |                     |                    |\n";
    cout<<" |*******************|*********************|********************|\n";
    cout<<" |                   |                     |                    |\n";
    cout<<" |       Easy        |        Easy         |        Easy        |\n";
    cout<<" |                   |                     |                    |\n";
    cout<<" |*******************|*********************|********************|\n";
    cout<<endl;
          
    
    //Have the user enter category and level of difficulty
    
    do{
        cout<<"Choose a category: ";cin>>choice;
        if (!(choice=='M'||choice=='A'||choice=='H'))
        cout<<"*Enter correct category character*\n";
    } while (!(choice=='M'||choice=='A'||choice=='H'));
    
    switch (choice){
        case 'M':
            do{
               cout<<"Difficulty level: "; cin>>level;

               if (!(level=="easy"||level=="Easy"||level=="EASY"
                    ||level=="medium"||level=="Medium"||level=="MEDIUM"
                    ||level=="hard"||level=="Hard"||level=="HARD"))
                   cout<<"*Enter correct difficulty level*"<<endl;
               
               else if (level=="medium"||level=="Medium"||level=="MEDIUM"){
                   cout<<"What movie does Luke Skywalker come out in?"<<endl;
                   cin>>answer>>answer2;
                      if(answer=="star"&&answer2=="wars")
                          wins++;
                        cout<<wins<<endl;
                      
                         
                       
                   
                       
               }
               
               else if (level=="hard"||level=="Hard"||level=="HARD")
                   cout<<"you chose a "<<endl;
               
            } while (!(level=="easy"||level=="Easy"||level=="EASY"
                    ||level=="medium"||level=="Medium"||level=="MEDIUM"
                    ||level=="hard"||level=="Hard"||level=="HARD"));
            break;
            
           
            
        case 'A':
            cout<<"This is animal"<<endl;break;
        case 'H':
            cout<<"This is history"<<endl;break;
            
           
            
    }
            
    
    
   
    
   
    
    
    
           
    
    
    
    
    //Input data
    
    
    
    
   
    
    
   
   
 
    //Map inputs to outputs or process the data   
    
       
   
    //Output the transformed data
    
    
    //Exit stage right!
    return 0;
}

