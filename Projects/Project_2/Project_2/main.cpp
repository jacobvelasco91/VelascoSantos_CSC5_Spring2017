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
#include <fstream>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void   gmeTble();
void   intro();
void   stats(int,int);
string lvlVal(string);
void leaderB(string [],int [],string [],int );
string players(string [], int );
string rankList(string[], int);
int pScores(int [],int );
bool exPts();

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
    const  int SIZE = 7;          //Size of parallel array
    string pAry[SIZE]={};         //Array to be filled with players name
    string rnkAry[SIZE]={};
    int sAry[SIZE]={};            //Array to be filled with players scores
    char guess;                   //User response to Guess challenge
   
    

    //Function to bring paragraph explaining Game
    intro();
    
    //Let user know who has played the game already
    cout<<"These Players have already played:"<<endl;
    //Invoking the function players() with an array argument; filling pAry[]
    players(pAry,SIZE);
    //Invoking the function pScores();filling sAry[] creating a parallel array
    pScores(sAry,SIZE);
    //Filling Rank Array list
    rankList(rnkAry,SIZE);

   //displaying other players & asking user to enter name; pAry[6] initialized
   for(int i=0;i<6;i++){
        cout<<"-"<<pAry[i]<<endl;
    }
    cout<<endl;
    cout<<"You're up next, whats your name? ";cin>>pAry[6];
    cout<<"Thanks for playing "<<pAry[6]<<"!"<<endl;

    
    //Function to bring the game table to the front
    gmeTble();
    
  
    
    
    
    //do-while loop for continual game play until all  are asked
    do{
  
    //Have the user enter category choice    
    cout<<"Enter a category: ";cin>>choice;
    //while loop for input validation
    while(!(choice=='C'||choice=='M'||choice=='A'||choice=='H'||choice=='x'||choice=='X')){
        cout<<"*Invalid: enter character letter*"<<endl;
        cout<<"Enter a category: ";cin>>choice;
    }
    //If statement; check if user exited game, if so, give statistics
    if(choice=='X'||choice=='x'){
        //Function for statistics; wins and losses given as arguments
        sAry[6] = wins;
        stats(wins,losses);
        //Function for leaderboard called and displayed
        leaderB(rnkAry,sAry,pAry,SIZE);
        cout<<endl;
        cout<<"Want a chance to earn Bonus points?(Y or N) ";cin>>guess;
        if(guess=='Y'||guess=='y'){
            bool guessed;
            guessed = exPts();
            if(guessed == true){
                wins+=25;
                sAry[6] = wins;
                cout<<"*****YOU GOT 25 EXTRA POINTS!*****"<<endl;
                leaderB(rnkAry,sAry,pAry,SIZE);
            }
            else{
                cout<<endl;
                cout<<"No points awarded, your guess did not match any numbers."<<endl;
            }
        }
        else{
            cout<<"Ok, thanks for playing!"<<endl;
        }
      
        return 0;
    }
    
        

    //Users category choice will be directed by a switch case 
    switch (choice){
        
        case 'C':
            cout<<"Difficulty level: ";cin>>level;
            
            level = lvlVal(level);
            
            if(level=="easy"||level=="Easy"||level=="EASY"){
                if(c1==false){
                    cout<<"*Question answered already*"<<endl;
                }
                else if(c1==true){
                    cout<<"What primitive data type are we prohibited"
                            "from using in Dr.Lehr's C++ class? ";
                    cin>>answer1;
                    if(answer1=="Doubles"||answer1=="doubles"||answer1=="DOUBLES"){
                        cout<<"Correct, don't use if you know whats good for ya. awarded 1 point"<<endl;
                        wins++;
                        c1=false;
                    }
                    else{
                        cout<<"Sorry incorrect, you better go hide."<<endl;
                        losses++;
                        c1=false;
                    }
                }
            }
            else if(level=="medium"||level=="MEDIUM"||level=="Medium"){
                if(c2==false){
                    cout<<"*Question answered already*"<<endl;
                }
                else if(c2==true){
                    cout<<"TRUE or FALSE, according to Mark's Law it is better"
                            " to always use the longest code possible. ";
                    cin>>answer1;
                    if(answer1=="False"||answer1=="false"||answer1=="FALSE"){
                        cout<<"Correct, its best to simplify your code. awarded 2 points."<<endl;
                        wins+=2;
                        c2=false;
                    }
                    else{
                        cout<<"Sorry that is not correct"<<endl;
                        losses++;
                        c2=false;
                    }
                }
            }
            else if(level=="hard"||level=="Hard"||level=="HARD"){
                if(c3==false){
                    cout<<"*Question answered already"<<endl;
                }
                else if(c3==true){
                    cout<<"What type of variable can only be seen or accessed in";
                    cout<<" a block of code, for example inside a function? ";
                    cin>>answer1>>answer2;
                    if((answer1=="Static"||answer1=="static")&&(answer2=="Local"||answer2=="local")){
                        cout<<"Thats true. awarded 5 points"<<endl;
                        wins+=5;
                        c3=false;
                    }
                    else{
                        cout<<"No, incorrect"<<endl;
                        losses++;
                        c3=false;
                    }
                }
            }
        break;
        
        //If 'M' directed to Movie category
        case 'M':
            //Ask user what level difficulty desired
            cout<<"Difficulty level: ";cin>>level;
            level = lvlVal(level);
            
            //if level is 'easy' display the easy question.
            if (level=="easy"||level=="Easy"||level=="EASY"){
                //If m1 is false, question has been asked already
                if(m1==false){
                    
                    cout<<"*Question answered already*"<<endl;
                }
                //if m1 is true, question has not been asked, so, ask question.
                else if(m1){
                   cout<<"In the movie Toy Story, what actor plays the voice of"
                         " sheriff Woody? ";
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
                       losses++;
                       cout<<"Sorry that wasn't correct, it was Tom Hanks"<<endl;
                       //setting Movie ? 1 to false, ? wont be available
                       m1=false;
                   }   
                }
            }
            
            //if level is 'medium' display the medium question.
            else if (level=="medium"||level=="Medium"||level=="Medium"){
                //If m2 is false, question has been asked already
                if(m2==false){
                    
                    cout<<"*Question answered already*"<<endl;
                }
                //if m2 is true, question has not been asked, so, ask question.
                else if(m2){
                   cout<<"Which block buster movie ends in tragedy when a ship"
                       <<" attempts to voyage from England to New York? ";    
                   //Using a string data type, the user enters a name 
                   cin>>answer1;
                   //If statement to check answer;
                   if(answer1=="Titanic"||answer1=="titanic"){
                       //Using the increment add 2 points to wins if correct
                       wins+=2;
                       cout<<"You got it right! you get awarded 2 points"<<endl;
                       //setting Movie ? 2 to false, ? wont be available
                       m2=false;  
                   }
                   else{
                       losses++;
                       cout<<"Sorry that wasn't correct, it was Titanic"<<endl;
                       //setting Movie ? 2 to false, ? wont be available
                       m2=false;
                   }   
                }
            }
            
            //if level is 'hard' display the hard question.
            else if (level=="hard"||level=="Hard"||level=="HARD"){
                //If m3 is false, question has been asked already
                if(m3==false){
                    
                    cout<<"*already answered*"<<endl;
                }
                //if m3 is true, question has not been asked, so, ask question.
                else if(m3){
                   cout<<"In The Lord of the Rings, Aragorn, one of the main "
                          "protagonists, is also known by what name? ";    
                   //Using a string data type, the user enters a name 
                   cin>>answer1;
                   //If statement to check answer;
                   if(answer1=="Strider"||answer1=="strider"){
                       //Using the increment add 5 points to wins if correct
                       wins+=5;
                       cout<<"You got it right! you get awarded 5 points"<<endl;
                       //setting Movie ? 3 to false, ? wont be available
                       m3=false;  
                   }
                   else{
                       losses++;
                       cout<<"Sorry that wasn't it, it was Strider"<<endl;
                       //setting Movie ? 2 to false, ? wont be available
                       m3=false;
                   }   
                }
            }
            
        break;
                
                
        case 'A':
            
            cout<<"Difficulty level: "; cin>>level;
            //level uses a function to validate
            level = lvlVal(level);               
            //if level is 'easy' display the easy question.               
            if (level=="easy"||level=="Easy"||level=="EASY"){
                if(a1==false){
                    cout<<"*Question answered already"<<endl;
                }
                else if(a1==true){
               cout<<"What animal in the horse family has white "
                     "and black stripes? ";
                //Using a string data types the user enters a name
                cin>>answer1;
                //If statement; correct answer
                    if (answer1=="Zebra"||answer1=="zebra") {               
                        //Using the increment add a point
                        wins++;
                        cout<<"Thats the animal! you get awarded 1 point"<<endl;
                        a1=false;
                    }
                    //If user got the question wrong increment the losses
                    else { 
                      cout<<"It was a Zebra, got it wrong sorry!"<<endl;    
                      losses++;
                      a1=false;
                    }
                }
            }
 
            //Using else if level is 'Medium' display question             
            else if (level=="medium"||level=="Medium"||level=="MEDIUM"){
                if(a2==false){
                    cout<<"*Question answered already"<<endl;
                }
                else if(a2==true){
                cout<<"Which land animal can sprint up to 70 MPH "
                     "in under 3 seconds? ";
                cin>>answer1;             
                    if(answer1=="Cheetah"||answer1=="cheetah") {


                        //Increment by 2 if answered question correct
                        wins+=2;
                        cout<<"thats right! you get awarded 2 points"<<endl;
                        a2=false;
                    }
                    //If user got the question wrong increment the losses by 1
                    else {
                        cout<<"Sorry thats not the right movie, it was "
                                 "cheetah"<<endl;
                        losses++;
                        a2=false;
                    }
                }
            }
                         
            //Using else if level is 'Hard' display question              
            else if (level=="hard"||level=="Hard"||level=="HARD") {
                if(a3==false){
                    cout<<"*Question answered already*"<<endl;
                }
                else if(a3==true){
                    
                    cout<<"According to reputable institutions, which "
                      "creature is the most venomous on planet Earth? ";
                    
                    cin>>answer1>>answer2;

                    if ((answer1=="Box"||answer1=="box")&&(answer2=="Jellyfish"||
                         answer2=="jellyfish")){

                        //Increment by 5 if answered question correct
                        wins+=5;
                        cout<<"Correct! that one was tough, you are awarded 5"
                               " points"<<endl;
                        a3=false;
                    }
                    //If user got the question wrong increment the losses by 1
                    else {
                        cout<<"Sorry, it was a box jelly fish"<<endl;
                        losses++;
                        a3=false;
                    }
                }
            }  
            break;
                
        
        case 'H':
            cout<<"Difficulty level: "; cin>>level;
            level = lvlVal(level);
            //if statement; if level easy display easy question
            if (level=="easy"||level=="Easy"||level=="EASY"){
                if(h1==false){
                    cout<<"*Question answered already*"<<endl;
                }
                else if(h1==true){
                    cout<<"Who is commonly accredited with the invention";
                    cout<<" of the light bulb? ";
                    //Using a string data types the user enters a name              
                    cin>>answer1>>answer2;
                    if ((answer1=="thomas"||answer1=="Thomas")&&
                         (answer2=="Edison"||answer2=="edison")) {

                        wins++;
                        cout<<"Correct, thats the man! Awarded 1 point"<<endl;
                        h1=false;
                    }
                    else{
                        cout<<"Sorry that wasn't the person."<<endl;
                        losses++;
                        h1=false;
                    }
                }
            }
            
            else if (level=="medium"||level=="Medium"||level=="MEDIUM"){
                if(h2==false){
                    cout<<"*Question answered already*"<<endl;
                }
                else if(h2==true){  
                    cout<<"The Statue of Liberty was given to the United ";
                    cout<<"States by what country?"<<endl;
                    cin>>answer1;
                    if(answer1=="France"||answer1=="france") {
                        //Increment by 2 if answered question correct
                        wins+=2;
                        cout<<"Oui! you get awarded 2 points"<<endl;
                        h2=false;
                    }
 
                    //If user got the question wrong increment the losses by 1
                    else {
                        cout<<"Sorry thats not the right country"<<endl;
                        losses++;
                        h2=false;
                    }
                }
            }
            
            //Using else if level is 'Hard' display question
            else if (level=="hard"||level=="Hard"||level=="HARD"){
                if(h3==false){
                    cout<<"*Question answered already*"<<endl;
                }
                else if(h3==true){
                    cout<<"The period after the Civil War, 1865-1877, was what";
                    cout<<" Era? ";
                    cin>>answer1>>answer2;
                    if((answer1=="Reconstruction"||answer1=="reconstruction")&&
                      (answer2=="Era"||answer2=="era")){
                        wins+=5;
                        cout<<"That was the correct Era, awarded 5 points"<<endl;
                        h3=false;
                    }
                    else{
                        cout<<"Sorry incorrect Era"<<endl;
                        losses++;
                        h3=false;
                    }
                }
            }
            break;
    }
    //End of do while loop if all questions have been answered
    }while(c1==true||c2==true||c3==true||m1==true||m2==true||m3==true||
            a1==true||a2==true||a3==true||h1==true||h2==true||h3==true);
    cout<<"*You answered all questions*"<<endl<<endl;
    sAry[6] = wins;
    stats(wins,losses);
    leaderB(rnkAry,sAry,pAry,SIZE);
    //Bonus Round
    cout<<"Want a chance to earn Bonus points?(Y or N) ";cin>>guess;
    if(guess=='Y'||guess=='y'){
        bool guessed;
        guessed = exPts();
        if(guessed == true){
            wins+=25;
            sAry[6] = wins;
            cout<<"*****YOU GOT 25 EXTRA POINTS!*****"<<endl;
            leaderB(rnkAry,sAry,pAry,SIZE);
        }
          else{
            cout<<endl;
            cout<<"No points awarded, your guess did not match any numbers."<<endl;
        }
    }
    else{
        cout<<"Ok, thanks for playing!"<<endl;
    }
    
 
   
    //Exit stage right
    return 0;
}

bool exPts(){
    int ranNum[20]={};  //Array to hold random numbers
    int g;              //Integer variable to hold number guess
    //user guesses a random number
    cout<<"Ok! Computer will generate 20 random numbers from 1-50";
    cout<<" You must guess one of them, whats your guess? ";cin>>g;
    //Filling Array with random numbers 1-100
    for(int i=0;i<20;i++){
        ranNum[i]=(rand()%50+1);
    }
    //Linear Search
    for(int i=0;i<20;i++){
        if(g==ranNum[i]){
            return true; //return a true statement if found a correct match
        }
    }
}


void leaderB(string rankA[],int scoreA[],string playerA[], int size){
    //bubble sort
    bool swap;
    int temp;
    string temp1;
    
    do{
        swap = false;
        for(int i = 0; i<(size-1); i ++){
            if(scoreA[i]<scoreA[i+1]){
                temp = scoreA[i];
                scoreA[i] = scoreA[i+1];
                scoreA[i+1] = temp;
                temp1 = playerA[i];
                playerA[i] = playerA[i+1];
                playerA[i+1] = temp1;
                swap = true;
            }
        }
    }while(swap);
    
    //outputting a file of leaderBoard results
    ofstream output;
    output.open("results.txt");
    for(int i=0;i<size;i++){
        output<<rankA[i]<<" "<<scoreA[i]<<" "<<playerA[i]<<endl;
    }
    
    //Displaying Leader board
    cout<<setw(5)<<"RANK"<<setw(10)<<"POINTS"<<setw(12)<<"NAME"<<endl;
    cout<<"_____________________________"<<endl;
    for(int i=0;i<size;i++){
   
        cout<<setw(4)<<rankA[i]<<setw(9)<<scoreA[i]<<setw(14)<<playerA[i]<<endl;
    }
}

string lvlVal(string level){
    while(!(level=="easy"||level=="Easy"||level=="EASY"||
          level=="medium"||level=="Medium"||level=="MEDIUM"||
          level=="hard"||level=="Hard"||level=="HARD"||level=="X"||level=="x")){
        cout<<"*INVALID:Enter correct text*"<<endl;
        cout<<"Difficulty level: ";cin>>level;
    }
    return level;
}
                    
void intro(){
    //Welcoming introduction and Name of Game.
    cout<<setw(16)<<" "<<"-       Welcome to AskAbout!      -"<<endl;
    cout<<" ----------------------------------------------------------------\n";
    //Explanation of the game
    cout<<" Similar to Jeopardy, AskAbout displays a category in each column.\n";
    cout<<" In each category there are 3 questions which are rated easy, \n";
    cout<<" Medium, or hard. Object of game is to answer as many questions\n";
    cout<<" correct.Points will be added accordingly, for each question you\n";
    cout<<" answer correctly and for each question you get wrong. have fun!\n";
    cout<<" ----------------------------------------------------------------\n";
    cout<<endl;
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
    float totalQ=32.0f;           //Total points available
    const float PERCENT=100.0f;   //Constant float percent 
    cout<<fixed<<setprecision(0);
            cout<<endl;
            cout<<"Your Statistics"<<endl;
            cout<<"---------------"<<endl;
            cout<<"Points: "<<w<<endl;
            cout<<"Losses: "<<l<<endl;
            cout<<"Total points possible: "<<totalQ<<endl;
            cout<<fixed<<setprecision(1)<<showpoint;
            cout<<"Percentage out of total possible: "
                <<static_cast<float>(w/totalQ)*PERCENT<<"%"<<endl;
            crtq= (w>=24)? "Excellent you got all correct!!":
                  (w>=14)? "Great job, you know some things.":
                  (w<14)? "You need to start reading some books!":"Did you even try?";
            cout<<crtq<<endl;
            cout<<endl;
            
}
string players(string list[],int size){
    ifstream inputFile1;
    inputFile1.open("players.txt");
    for(int i = 0 ; i<size;i++){
        inputFile1>>list[i];
    }
}

int pScores(int scores[],int size){
    ifstream inputFile2;
    inputFile2.open("pScore.txt");
    for(int i=0;i<size;i++){
        inputFile2>>scores[i];
    }
}

string rankList(string rAry[],int size){
      ifstream inputFile3;
    inputFile3.open("rank.txt");
    for(int i=0;i<size;i++){
        inputFile3>>rAry[i];
    }
}
