/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on March 20, 2017, 12:05 pM
 * Purpose:  Menu to be utilized on homework.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   // Formatting
#include <cstdlib>   //Random number generator
#include <ctime>     //set random number seed
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here

int main(int argc, char** argv) {
    //Declare variables
    char choice;


    //Show menu and loop
    do {
        //Display Menu
        cout<<"_____________________________________________________________\n";
        cout << endl << endl << "Type 0 to exit" << endl;
        cout << "Type 1 for Problem 1" << endl;
        cout << "Type 2 for Problem 2" << endl;
        cout << "Type 3 for Problem 3" << endl;
        cout << "Type 4 for Problem 4" << endl;
        cout << "Type 5 for Problem 5" << endl;
        cout << "Type 6 for Problem 6" << endl;
        cout << "Type 7 for Problem 7" << endl;
        cout << "Type 8 for Problem 8" << endl;
        cout << "Type 9 for Problem 9" << endl;
        cout<<endl;
        cout << "Enter problem of choice ";

        //Input choice
        cin>>choice;
        cout<<endl;

        //Place solutions to problems in switch statement
        switch (choice) {
               
            case '1':
            { 
                cout << "In Problem solution 1" << endl;
                //Declare variables and initialize 
                //Make sure 0<=n<=40000
                int n = 10000, sum = 0;

                //Map inputs to outputs or process the data
                for (int i = 1; i <= n; i++) {
                    sum += i;
                }

                //Output the transformed data
                cout << "The sum of 1 to " << n << " = " << sum << endl;
                cout << "and " << n << " *(" << n << "+1)/2= " << n * (n + 1) / 2 << endl;
                break;
            }


            case '2':
            {
                            //Set the random number seed
                srand(static_cast<unsigned int>(time(0)));

                //Declare variables
                int op1,op2,result,answer;
                char choice;



                //Input data
                do{

                    cout<<"Math Tutor"<<endl;
                    cout<<"choose the operation * / + - Press anything else to exit"<<endl;
                    cin>>choice;
                    cout<<endl;
                    if (!(choice=='*'||choice=='/'||choice=='+'||choice=='-')){
                        cout<<"Program exit"<<endl;
                        break;
                    }


                    //Map inputs to outputs or process the data
                    switch(choice){
                        case '+':{
                            op1=rand()%900+100;//[100-999]
                            op2=rand()%900+100;//[100-999]
                            answer=op1+op2;//[3 to 4 digit result]
                            break;
                        }
                        case '-':{
                            op1=rand()%900+100;//[100-999]
                            op2=rand()%900+100;//[100-999]
                            answer=op1-op2;//[0 to 3 digit result]
                            break;
                        }
                        case '*':{
                            op1=rand()%90+10;//[10-99]
                            op2=rand()%90+10;//[10-99]
                            answer=op1*op2;//[2 to 4 digit result]
                            break;
                        }
                        case '/':{
                            answer=rand()%900+100;//[100-999]
                            op2=rand()%90+10;//[10-99]
                            op1=answer*op2;//[2 to 3 digit result]
                            break;
                        }
                        defult:{
                            cout<<"Bad operator"<<endl;
                            return 1;
                        }
                    }



                    //Output the transformed data
                    cout<<setw(8)<<op1<<endl;
                    cout<<choice<<setw(7)<<op2<<endl;
                    cout<<"----------"<<endl;
                    cin>>result;


                    //Compare the answer
                    cout<<endl;
                    cout<<((result==answer)?"correct":"incorrect")<<endl;
                    cout<<"The answer is = "<<answer<<endl;
                    cout<<endl;
                }while(choice=='*'||choice=='/'||choice=='+'||choice=='-');    

                
                
                
                
                
                
                break;
            }
            case '3':
            {
               cout << "In problem solution 3" << endl;
                              //Declare variables
                float calBrnd=3.6f; //Calories Burned per minute




                //Let user know what the program does.
                cout<<"This Program will calculate how many calories were burned"<<endl;
                cout<<"after 5, 10, 15, 20, 25, and 30 minutes, each minute 3.6 "<<endl;
                cout<<"calories are burned."<<endl; 
                cout<<endl;

                //Using For loop to count minutes till it reaches 30
                for (int min=1;min<=30;min++){

                //Nested if else statement to process the calories burned per minutes.
                if (min==5) 
                    cout<<"In 5 minutes "<<min*calBrnd<<" calories were burned"<<endl;
                else if (min==10)
                    cout<<"In 10 minutes "<<min*calBrnd<<" calories were burned"<<endl;
                else if (min==15)
                    cout<<"In 15 minutes "<<min*calBrnd<<" calories were burned"<<endl;
                else if (min==20)
                    cout<<"In 20 minutes "<<min*calBrnd<<" calories were burned"<<endl;
                else if (min==25)
                    cout<<"In 25 minutes "<<min*calBrnd<<" calories were burned"<<endl;
                else if (min==30)
                    cout<<"In 30 minutes "<<min*calBrnd<<" calories were burned"<<endl;
                }
                
                break;
            }
                
           
            case '4':
            {
                cout << "In problem solution 4" << endl;
                            //Declare variables
                int number;          //Variable for number to be entered
                int sum=0;           //variable to add all numbers together







                //Map inputs to outputs or process the data.
                //Ask User to enter a positive number
                cout<<"This program will calculate the sum from 1 to a number entered"<<endl;
                cout<<endl;
                cout<<"Please enter a positive integer ";cin>>number;

                //If number entered is negative end the program.
                if (number<=0){
                    cout<<endl;
                    cout<<"Invalid entry"<<endl;
                    return 1;
                }
                //Loop to add numbers together till entered number is reached.
                for(int srtNum=1;srtNum<=number;srtNum++){
                    sum=sum+srtNum;
                    }



                //Output the transformed data
                cout<<endl;
                cout<<"The total sum of 1 to your number entered is "<<sum<<endl;
                break;
            }
            case '5':
            {
                cout << "In problem solution 5" << endl;
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
                break;
            }
            case '6':
            {
                cout << "In problem solution 6" << endl;
                break;
            }
            case '7':
            {
                cout << "In problem solution 7" << endl;
                break;
            }
            case '8':
            {
                cout << "In problem solution 8" << endl;
                break;
            }
            case '9':
            {
                cout << "In problem solution 9" << endl;
                break;
            }
            default:
            {
                cout << "Program Finished" << endl;
            }
        }

    } while (choice >= '1' && choice <= '9');






    //Exit stage right!
    return 0;
}

