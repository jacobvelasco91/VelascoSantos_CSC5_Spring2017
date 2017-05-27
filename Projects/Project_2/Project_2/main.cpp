/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on May 25th, 2017, 11:38 AM
 * Purpose:  Project 2- AskAbout (A game similar to jeopardy)
 */

//System Libraries
#include <iostream>  // Input - Output Library
#include <iomanip>   //formatting
#include <cmath>     //math operators
#include <string>    // Required for the string class
#include <ctime>     //Seed time for random number generator
#include <cstdlib>   //Library for random number
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
string fnlSpin();
void   gmeTble();
void   intro();
void   stats(int,int);

//Execution begins here
int main(int argc, char** argv) {
    //Set Seed Time
    srand(time(0));
    //Declare variables
    char choice;                  //User's choice for category as a character
    string level;                 //User's level choice as an input string
    string answer1,answer2;       //Variables to hold answers; then compare
    int wins=0, losses=0;         //Integer Variables;to increment wins & losses
    bool m1=true,m2=true,m3=true; //for M ?'s; if true it makes ? available
    bool a1=true,a2=true,a3=true; //for A ?'s; if true it makes ? available
    bool c1=true,c2=true,c3=true; //for C ?'s; if true it makes ? available
    bool h1=true,h2=true,h3=true; //for H ?'s; if true it makes ? available
    
    
    //Function to bring paragraph explaining Game
    intro();
    
    //Function to bring the game table to the front
    gmeTble();
    
    
    //do-while loop for continual game play until all questions asked
    do{
  
    //Have the user enter category choice
    cout<<"Enter a category: ";cin>>choice;
    //while loop for input validation
    while(!(choice=='C'||choice=='M'||choice=='A'||choice=='H'||choice=='x'||choice=='X')){
        cout<<"*Invalid: enter character letter*"<<endl;
        cout<<"Enter a category: ";cin>>choice;
    }
    //If statement to check if user exited game, if so, give statistics
    if(choice=='X'||choice=='x'){
        //Function for statistics, wins and losses given as arguments
        stats(wins,losses);
        return 0;
    }
    
        

    //Users category choice will be directed by a switch case 
    switch (choice){
        
        //If 'M' directed to Movie category
        case 'M':
            //Ask user what level difficulty desired
            cout<<"Difficulty level: ";cin>>level;
            //while loop for input validation
            while(!(level=="easy"||level=="Easy"||level=="EASY"||
                    level=="medium"||level=="Medium"||level=="MEDIUM"||
                    level=="hard"||level=="Hard"||level=="HARD")){
                cout<<"*INVALID* enter correct input"<<endl;
                cout<<"Difficulty level: ";cin>>level;
            }
            //if level is 'easy' display the easy question.
            if (level=="easy"||level=="Easy"||level=="EASY"){
                //If m1 is false, question has been asked already
                if(m1==false){
                    
                    cout<<"*Question answered already*"<<endl;
                }
                //if m1 is true, question has not been asked, so, ask question.
                else if(m1){
                   cout<<"In the movie Toy Story, what actor plays the voice of"
                         " sheriff Woody?";
                   //Using a two string data type, the user enters a name 
                   cin>>answer1>>answer2;
                   //If statement to check answer;
                   if((answer1=="Tom"||answer1=="tom")&&(answer2=="Hanks"
                        ||answer2=="hanks")){
                       //Using the increment add a point to wins if correct
                       wins++;
                       cout<<"You got it right! you get awarded 1 point"<<endl;
                       //setting Movie ? 1 to false, ? wont be available
                       m1=false;  
                   }
                   else{
                       cout<<"Sorry that wasnt it, it was tom hanks"<<endl;
                       //setting Movie ? 1 to false, ? wont be available
                       m1=false;
                   }   
                }
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
    }
    //End of do while loop if all questions have been answered
    }while(m1==false);
   
    //Exit stage right
    return 0;
}
                    
void intro(){
    //Welcoming introduction and Name of Game.
    cout<<setw(16)<<" "<<"-       Welcome to AskAbout!      -"<<endl;
    cout<<" ----------------------------------------------------------------\n";
    //Explanation of the game
    cout<<" Similar to Jeopardy, AskAbout displays a category in each column\n";
    cout<<" In each category there are 3 questions which are rated easy, \n";
    cout<<" Medium, and hard.Object of game is to answer as many questions\n";
    cout<<" correct.Points will be added accordingly, for each question you\n";
    cout<<" answer correctly and for each question you get wrong. have fun!\n";
    cout<<" ----------------------------------------------------------------\n";
    cout<<endl;
}
//Function to "spin a wheel" of questions
string fnlSpin(){
    const int SIZE = 10;
    string wheel[SIZE] ={"hey","you","there","go","home","heyaaa","another number","This is the second question","okay","ten"};
    int rnNum= (rand()%10);
    int answer = rnNum;
    string value = wheel[rnNum];
    cout<<answer<<endl;
    
    return value;
}
void gmeTble(){
     //Instructions on how to play the game
    cout<<setw(28)<<" "<<"How to play:"<<endl;
    cout<<setw(28)<<" "<<"------------"<<endl;
    cout<<"To choose a category, enter the character according to the column\n";
    cout<<"For level of difficulty enter  'easy', 'medium', or 'hard'\n";
    cout<<endl;
    cout<<"      (C)            (M)             (A)             (H)  \n";
    
    //Display Game table.
    cout<<"  ____________________________________________________________\n";
    cout<<" |     C++     |    MOVIES    |    ANIMALS    |    HISTORY    |\n";
    cout<<" |=============|==============|===============|===============|\n";
    cout<<" |             |              |               |               |\n";
    cout<<" |    Easy     |     Easy     |      Easy     |      Easy     |\n";
    cout<<" |             |              |               |               |\n";
    cout<<" |============================================================|\n";
    cout<<" |             |              |               |               |\n";
    cout<<" |   Medium    |    Medium    |     Medium    |     Medium    |\n";
    cout<<" |             |              |               |               |\n";
    cout<<" |============================================================|\n";
    cout<<" |             |              |               |               |\n";
    cout<<" |    Hard     |     Hard     |      Hard     |      Hard     |\n";
    cout<<" |             |              |               |               |\n";
    cout<<"  ============================================================ \n";
    cout<<" *Enter X to exit game"<<endl;
    cout<<endl;
    
}
void stats(int w,int l){
    string crtq;                  //String that will generate critique response 
    float totalQ=24.0f;           //Total points available
    const float PERCENT=100.0f;   //Constant float percent 
    cout<<fixed<<setprecision(0);
            cout<<endl;
            cout<<"  Statistics"<<endl;
            cout<<"---------------"<<endl;
            cout<<"Points: "<<w<<endl;
            cout<<"Losses: "<<l<<endl;
            cout<<"Total points possible: "<<totalQ<<endl;
            cout<<fixed<<setprecision(1)<<showpoint;
            cout<<"Percentage out of total possible: "
                <<static_cast<float>(w/totalQ)*PERCENT<<"%"<<endl;
            crtq=(w>=24)? "Excellent you got all correct!!":
                  (w>=14)? "Great job, you know some things.":
                  (w<14)? "You need to start reading some books!":"Did you even try?";
            cout<<crtq<<endl;
            
}