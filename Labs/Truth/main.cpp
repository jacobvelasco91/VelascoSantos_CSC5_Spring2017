/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on March 14, 2017, 12:19 AM
 * Purpose:  Truth Table
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
    bool x,y;
    
    //Output the table Header
    cout<<"X Y !X !Y  X||Y X&&Y X^Y X^Y^Y X^Y^X !(X||Y) !X&&!Y !(X&&Y) !X||!Y"<<endl;
    
    //Determine first row in the table
    x=true;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x&&y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<((x^y)^y?'T':'F')<<"    ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"          ";
    cout<<endl;
    
    //Determine Second row
     x=true;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x&&y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<((x^y)^y?'T':'F')<<"    ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"          ";
    cout<<endl;
   
    
    //Determine third row
    x=false;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x&&y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<((x^y)^y?'T':'F')<<"    ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"          ";
    cout<<endl;
    
    //Determine fourth row
    x=false;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x&&y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<((x^y)^y?'T':'F')<<"    ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"          ";
    cout<<endl;
    
    
    
    
    //Map inputs to outputs or process the data
   
    
   
    //Output the transformed data
   
   
    
    //Exit stage right!
    return 0;
}

