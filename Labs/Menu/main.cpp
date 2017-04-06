/* 
 * File:   main.cpp
 * Author: Santos Velasco
 * Created on March 20, 2017, 12:05 pM
 * Purpose:  Menu to be utilized on homework.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   // Formatting
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void menu(void);
void prob1(void);
void prob1(void);
void prob1(void);
void prob1(void);
void prob1(void);
void prob1(void);
void prob1(void);
void prob1(void);
void prob


//Execution begins here

int main(int argc, char** argv) {
    //Declare variables
    char choice;


    //Show menu and loop
    do {
        //Display Menu
        cout << endl << endl << "Type 0 to exit" << endl;
        cout << "Type 1 for sum 1 to n Problem" << endl;
        cout << "Type 2 for Sum 0.1 error Problem" << endl;
        cout << "Type 3 for Problem 3" << endl;
        cout << "Type 4 for Problem 4" << endl;
        cout << "Type 5 for Problem 5" << endl;
        cout << "Type 6 for Problem 6" << endl;
        cout << "Type 7 for Problem 7" << endl;
        cout << "Type 8 for Problem 8" << endl;
        cout << "Type 9 for Problem 9" << endl;
        cout << "Enter problem of choice" << endl << endl;

        //Input choice
        cin>>choice;

        //Place solutions to problems in switch statement
        switch (choice) {
                cout << "In Problem solution 1" << endl;
            case '1':
            {
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
                break;
            }
            case '3':
            {
                cout << "In problem solution 3" << endl;
                break;
            }
            case '4':
            {
                cout << "In problem solution 4" << endl;
                break;
            }
            case '5':
            {
                cout << "In problem solution 5" << endl;
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
                cout << "exit program" << endl;
            }
        }

    } while (choice >= '1' && choice <= '9');






    //Exit stage right!
    return 0;
}

