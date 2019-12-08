//
//  main.hpp
//  Automat
//
//  Created by Björn Höfer on 05.12.19.
//  Copyright © 2019 Björn Höfer. All rights reserved.
//

#ifndef main_hpp
#define main_hpp

#include <stdio.h>
#include <iostream>
#include "Automat.h"
using namespace std;


//checks if chars of string are 0 or 1
bool validateInput(string input){
    bool isValid = true;
    
    for (char const &c: input) {
        isValid &= (c == '0' || c == '1');
    }
    
    return isValid;
}

//get input from user over string input
//uses validateInput for checking if input correct
//if not recusion
string getdigitInput(string message){
        string userInput;
    
        cout<< message <<endl;
        cin>> userInput;
        
        if (validateInput(userInput)){
            cout<< "Input valid!" <<endl <<endl;
            return userInput;
        }else{
            cout<< "Input invalid, type in 0 or 1" <<endl;
            return getdigitInput(message);
        }
}

//changes actualState with information from transitionArray
//therefor actualState is given to handover
void changeState(char userInput){
    int handover =  actualState;
    switch (handover) {
            
        case 0:
            if (userInput == '0'){
                actualState = transitionArray[0][0];
            }else{
                actualState = transitionArray[0][1];
            }
            break;
        case 1:
            if (userInput == '0'){
                actualState = transitionArray[1][0];
            }else{
                actualState = transitionArray[1][1];
            }
            break;
        case 2:
            if (userInput == '0'){
                actualState = transitionArray[2][0];
            }else{
                actualState = transitionArray[2][1];
            }
            break;
        case 3:
            if (userInput == '0'){
                actualState = transitionArray[3][0];
            }else{
                actualState = transitionArray[3][1];
            }
            break;
        case 4:
            if (userInput == '0'){
                actualState = transitionArray[4][0];
            }else{
                actualState = transitionArray[4][1];
            }
            break;
        case 5:
            if (userInput == '0'){
                actualState = transitionArray[5][0];
            }else{
                actualState = transitionArray[5][1];
            }
            break;
        case 6:
            if (userInput == '0'){
                actualState = transitionArray[6][0];
            }else{
                actualState = transitionArray[6][1];
            }
            break;
        case 7:
            if (userInput == '0'){
                actualState = transitionArray[7][0];
            }else{
                actualState = transitionArray[7][1];
            }
            break;
    }

}

//checks if automat is in final state
bool checkFinalState(int input){
    bool isFinalState = false;
    
    for(int const &p: finalState){
        isFinalState = (input == p);
        if(isFinalState == true){
            break;
        }
    }
    return isFinalState;
}

//automat
//gets valid input with getdugutInput
//for loop to run over sequence
//if condition when automat is in final state
//else set automat to start, runs it recusive again
void recusiveAutomat(){
   
    string validInput = getdigitInput("To change ruedigers state, type in sequence of 0 or 1!... ");
         
     for (const char &d: validInput){
             changeState(d);
         cout<<actualState <<" => ";
         }
     cout<< endl;
    
     if (checkFinalState(actualState)){
         cout<<"ruediger has reached final state..."<<endl;
         cout<<"ruediger is very happy...." <<endl;
     }else{
         cout<<"ruediger couldn't reach final state... " <<endl;
         actualState = startState;
         cout<<"ruediger is back in start state: " <<actualState <<endl;
         
         recusiveAutomat();
     }
}



#endif /* main_hpp */
