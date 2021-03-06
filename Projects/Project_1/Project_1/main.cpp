/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on April 10, 2017, 5:20 PM
 * Purpose:  AskAbout 
 *           A game similar to Jeopardy.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //formatting
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
    string answer1,answer2;
    int wins=0, losses=0; 
    string grade;
    float total=24.0f;
    const float PERCENT=100.0f;
    
    
    
   
   
    
  
    
  
    
    //Welcoming text and Name of Game.
    cout<<"                     -----------------------------------"<<endl;
    cout<<"                     -       Welcome to AskAbout!      -"<<endl;
    cout<<" -------------------------------------------------------------"
        <<"--------------"<<endl;    
    
    //Explanation of the game
    cout<<" - Similar to Jeopardy, AskAbout displays 3 columns which are "
        <<"categories.  -\n";
    cout<<" - In these categories there are 3 questions which are rated easy," 
        <<" medium  -"<<endl;
    cout<<" - or hard. To play you will have to choose a category,then choose "
        <<"a level -"<<endl;
    cout<<" - of difficulty. Points will be awarded accordingly for each "
        <<"question you -"<<endl; 
    cout<<" - answer  correctly. Have fun!                                     "
            <<"       -"<<endl;
    cout<<" -------------------------------------------------------------"
        <<"--------------"<<endl;   
    cout<<endl;
    
    //Instructions on how to play the game
    cout<<"To choose a category enter the character 'M' for movies, 'A' for "
        <<"animals, 'H' for history.\n";   
    cout<<"To choose a level of difficulty enter 'easy', 'medium', or 'hard'\n";
    cout<<endl;
    //Display Game table.
    cout<<"      ## When all categories are answered press X ##"<<endl;
    cout<<"      ##    for statistics and to end the game    ##"<<endl;
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
    cout<<" |       Hard        |        Hard         |        Hard        |\n";
    cout<<" |                   |                     |                    |\n";
    cout<<" |*******************|*********************|********************|\n";
    cout<<endl;
    
          
    
    //Have the user enter category and level of difficulty
    
    //using a Do While loop, make sure user enters correct data
    do{
        // A do while loop to make sure user enters correct data
        do{
        cout<<"Choose a category: ";cin>>choice;
        if (!(choice=='M'||choice=='A'||choice=='H'||choice=='X'))
        cout<<"*Enter correct category character*\n";
        } while (!(choice=='M'||choice=='A'||choice=='H'||choice=='X'));
       
    
            
           
               
        //Statistics to show score and percentages
        if (choice=='X'||choice=='x'){
            cout<<fixed<<setprecision(0);
            cout<<endl;
            cout<<"  Statistics"<<endl;
            cout<<"---------------"<<endl;
            cout<<"Points: "<<wins<<endl;
            cout<<"Losses: "<<losses<<endl;
            cout<<"Total points: "<<total<<endl;
            cout<<fixed<<setprecision(1)<<showpoint;
            cout<<"Percentage out of total possible: "
                <<static_cast<float>(wins/total)*PERCENT<<"%"<<endl;
            grade=(wins>=24)? "Excellent you got all correct!!":
            (wins>=14)? "Great job, you know some things.":
            (wins<14)? "You need to start reading some books!":"Did you even try?";
            cout<<grade<<endl;
            
            return 0;
        }
    
    //Users category choice will be directed by a switch case 
    switch (choice){
        
        //Movie category
        case 'M':
            
            //Using a 'do, while' loop Have user enter difficulty level
            
            //if difficulty level does not match the correct 'level' data, keep
            //looping while it is not correct, until it is correct.
            
            do{
                
                cout<<"Difficulty level: "; cin>>level; 
               
                if (!(level=="easy"||level=="Easy"||level=="EASY"
                    ||level=="medium"||level=="Medium"||level=="MEDIUM"
                    ||level=="hard"||level=="Hard"||level=="HARD"))
                   cout<<"*Enter correct difficulty level*"<<endl;
                   
                //Else if level is 'easy' display the easy question.               
                               
                else if (level=="easy"||level=="Easy"||level=="EASY"){
                   cout<<"In the movie Toy Story, what actor plays the voice of"
                           " sheriff Woody?"<<endl;
                   
                   //Using a two string data types the user enters a name
                   
                   cin>>answer1>>answer2;
                      if((answer1=="Tom"||answer1=="tom")&&(answer2=="Hanks"
                        ||answer2=="hanks")) {
                          
                          //Using the increment add a point
                          wins++;
                        cout<<"You got it right! you get awarded 1 point"<<endl;
                      }
                      
                      //If user got the question wrong increment the losses
                      else { 
                        cout<<"You got it wrong sorry!"<<endl;    
                        losses++;}
                }
                      
                  
                //Using else if level is 'Medium' display question
                
                else if (level=="medium"||level=="Medium"||level=="MEDIUM"){
                   cout<<"Which block buster movie ends in tragedy when a ship "
                       <<"attempts to voyage from England to New York?"<<endl;
                   cin>>answer1;
                      if(answer1=="Titanic"||answer1=="titanic") {
                          
                          //Increment by 2 if answered question correct
                          wins+=2;
                        cout<<"Thats it! you get awarded 2 points"<<endl;
                      }
                      //If user got the question wrong increment the losses by 1
                      else {
                          cout<<"Sorry thats not the right movie, it was "
                                 "Titanic"<<endl;
                          losses++;
                      }
                }
                
                
                
                //Using else if level is 'Hard' display question
                
                else if (level=="hard"||level=="Hard"||level=="HARD") {
                    
                    cout<<"In The Lord of the Rings, Aragorn, one of the main "
                          "protagonists, is also known by what name?"<<endl;
                    cin>>answer1;
                    
                    if (answer1=="Strider"||answer1=="strider"){
                        
                        //Increment by 5 if answered question correct
                        wins+=5;
                        cout<<"Correct! that one was tough, you are awarded 5"
                               " points"<<endl;
                    }
                    
                    //If user got the question wrong increment the losses by 1
                    else {
                        cout<<"Sorry, the correct answer was 'Strider'"<<endl;
                        losses++;
                    }
                }
                    
                    
            } while (!(level=="easy"||level=="Easy"||level=="EASY"
                    ||level=="medium"||level=="Medium"||level=="MEDIUM"
                    ||level=="hard"||level=="Hard"||level=="HARD"));   
            break;
                
                
        case 'A':
            do{
                
                cout<<"Difficulty level: "; cin>>level; 
               
                if (!(level=="easy"||level=="Easy"||level=="EASY"
                    ||level=="medium"||level=="Medium"||level=="MEDIUM"
                    ||level=="hard"||level=="Hard"||level=="HARD"))
                   cout<<"*Enter correct difficulty level*"<<endl;
                   
                //Else if level is 'easy' display the easy question.               
                               
                else if (level=="easy"||level=="Easy"||level=="EASY"){
                   cout<<"What animal in the horse family has white "
                         "and black stripes?"<<endl;

                   
                   //Using a string data types the user enters a name
                   
                   cin>>answer1;
                      if (answer1=="Zebra"||answer1=="zebra") {
                          
                          //Using the increment add a point
                          wins++;
                        cout<<"Thats the animal! you get awarded 1 point"<<endl;
                      }
                      
                      //If user got the question wrong increment the losses
                      else { 
                        cout<<"You got it wrong sorry!"<<endl;    
                        losses++;}
                }
                      
                  
                //Using else if level is 'Medium' display question
                
                else if (level=="medium"||level=="Medium"||level=="MEDIUM"){
                   cout<<"Which land animal can sprint up to 70 MPH "
                         "in under 3 seconds?"<<endl;

                   cin>>answer1;
                      if(answer1=="Cheetah"||answer1=="cheetah") {
                          
                          //Increment by 2 if answered question correct
                          wins+=2;
                        cout<<"thats right! you get awarded 2 points"<<endl;
                      }
                      //If user got the question wrong increment the losses by 1
                      else {
                          cout<<"Sorry thats not the right movie, it was "
                                 "cheetah"<<endl;
                          losses++;
                      }
                }
                
                
                
                //Using else if level is 'Hard' display question
                
                else if (level=="hard"||level=="Hard"||level=="HARD") {
                    
                    cout<<"According to reputable institutions, which "
                          "creature is the most venomous on planet Earth?"<<endl;

                    cin>>answer1>>answer2;
                    
                    if ((answer1=="Box"||answer1=="box")&&(answer2=="Jellyfish"||
                         answer2=="jellyfish")){
                        
                        //Increment by 5 if answered question correct
                        wins+=5;
                        cout<<"Correct! that one was tough, you are awarded 5"
                               " points"<<endl;
                    }
                    
                    //If user got the question wrong increment the losses by 1
                    else {
                        cout<<"Sorry, it was a box jelly fish"<<endl;
                        losses++;
                    }
                }
                    
                    
            } while (!(level=="easy"||level=="Easy"||level=="EASY"
                    ||level=="medium"||level=="Medium"||level=="MEDIUM"
                    ||level=="hard"||level=="Hard"||level=="HARD"));   
            break;
                
        
        case 'H':
            do{
                
                cout<<"Difficulty level: "; cin>>level; 
               
                if (!(level=="easy"||level=="Easy"||level=="EASY"
                    ||level=="medium"||level=="Medium"||level=="MEDIUM"
                    ||level=="hard"||level=="Hard"||level=="HARD"))
                   cout<<"*Enter correct difficulty level*"<<endl;
                   
                //Else if level is 'easy' display the easy question.               
                               
                else if (level=="easy"||level=="Easy"||level=="EASY"){
                   cout<<"Who is commonly accredited with the invention "
                         "of the light bulb?"<<endl;

                   
                   //Using a string data types the user enters a name
                   
                   cin>>answer1>>answer2;
                      if ((answer1=="thomas"||answer1=="Thomas")&&
                         (answer2=="Edison"||answer2=="edison")) {
                          
                          //Using the increment add a point
                          wins++;
                        cout<<"Correct, thats the man! Awarded 1 point"<<endl;
                      }
                      
                      //If user got the question wrong increment the losses
                      else { 
                        cout<<"You got it wrong sorry!"<<endl;    
                        losses++;}
                }
                      
                  
                //Using else if level is 'Medium' display question
                
                else if (level=="medium"||level=="Medium"||level=="MEDIUM"){
                   cout<<"The Statue of Liberty was given to the United "
                         "States by what country?"<<endl;

                   cin>>answer1;
                      if(answer1=="France"||answer1=="france") {
                          
                          //Increment by 2 if answered question correct
                          wins+=2;
                        cout<<"Oui! you get awarded 2 points"<<endl;
                      }
                      //If user got the question wrong increment the losses by 1
                      else {
                          cout<<"Sorry thats not the right country"<<endl;
                          losses++;
                      }
                }
                
                
                
                //Using else if level is 'Hard' display question
                
                else if (level=="hard"||level=="Hard"||level=="HARD") {
                    
                    cout<<"The period after the Civil War, 1865-1877, "
                          "was what Era"<<endl;

                    cin>>answer1>>answer2;
                    
                    if ((answer1=="Reconstruction"||answer1=="reconstruction")
                      &&(answer2=="Era"||answer2=="era")){
                        
                        //Increment by 5 if answered question correct
                        wins+=5;
                        cout<<"Correct! that one was tough, you are awarded 5"
                               " points"<<endl;
                    }
                    
                    //If user got the question wrong increment the losses by 1
                    else {
                        cout<<"Sorry, not the era"<<endl;
                        losses++;
                    }
                }
                    
                    
            } while (!(level=="easy"||level=="Easy"||level=="EASY"
                    ||level=="medium"||level=="Medium"||level=="MEDIUM"
                    ||level=="hard"||level=="Hard"||level=="HARD"));   
            break;
            
                
            
            
                
                
   }
    
    
   } while (choice=='M'||choice=='A'||choice=='H');                      
                       
                   
                     
    
    
    //Exit stage right!
    return 0;
}

