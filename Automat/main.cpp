//
//  main.cpp
//  Automat
//
//  Created by Björn Höfer on 05.12.19.
//  Copyright © 2019 Björn Höfer. All rights reserved.
//

#include "main.hpp"
#include <stdio.h>
#include <iostream>
using namespace std;


//transitionFunc: state {state for input 0, state for input 1}
int const transitionArray[8][2] = {{1,4},{2,4},{2,3},{3,2},{4,4}};
int const startState = 0;
int actualState = 1;
int const finalState[2] = {2,4};



//checks if input is 1 o 0
//fix input of chars!!!!!!
/*bool validateInput(int input){
    bool isValid = true;
    isValid = (input == 0 || input == 1);
    return isValid;
}*/

bool validateInput(string input){
    bool isValid = true;
    
    for (char const &c: input){
    isValid &= (c == '0' || c == '1');
    }
    
    return isValid;
}

//gets input from user
/*int getdigitInput(string message){
        int userInput;
        cout<< message <<endl;
        cin>> userInput;
        
        if (validateInput(userInput)){
            cout<< "Input valid!" <<endl <<endl;
            return userInput;
        }else{
            cout<< "Input invalid, type in 0 or 1" <<endl;
            return getdigitInput(message);
        }
}*/

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


//checks if Automat is in final state
bool checkifFinal(int tobechecked){
    if (tobechecked == finalState[0]) {
        return false;
    }if (tobechecked == finalState [1]) {
        return false;
    } else {
        return true;
    }
}



//changes state with information from transitionArray
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


/*int main(){
actualState = startState;
cout<< "The machine is currently in state: " <<actualState <<endl;
cout<< "====================================" <<endl <<endl;

do{
    int validInput = getdigitInput("To change state, type in 0 or 1!... ");
    changeState(validInput);
     cout<<"The machine is now in state: " <<actualState <<endl <<endl;
} while (checkifFinal( actualState));
    cout<<"Machine is in finale state..." <<endl;*/
bool checkfinalState(int input){
    bool final = true;
    
    for(int const &p: finalState){
        final &= (actualState == p);
    }
    return final;
}


void recusiveAutomat(){
   
    string validInput = getdigitInput("To change state, type in sequence of 0 or 1!... ");
         
     for (const char &d: validInput){
             changeState(d);
         cout<<actualState <<" => ";
         }
     cout<< endl;
    
     if (){
         cout<<"ruediger has reached final state..."<<endl;
     }else{
         cout<<"ruediger couldn't reach final state... " <<endl;
         actualState = startState;
         cout<<"ruediger is back in start state: " <<actualState <<endl;
         
         recusiveAutomat();
         
     }
}
    
int main(){
    actualState = startState;
    cout<< "The machine is currently in state: " <<actualState <<endl;
    cout<< "====================================" <<endl <<endl;
    
    recusiveAutomat();
    }
    
        //cout<< validInput <<endl;
        //cout<< "===================" <<endl;
        // cout<< "Switch case test" <<endl;
   
