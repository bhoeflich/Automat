//
//  main.cpp
//  Automat
//
//  Created by Björn Höfer on 05.12.19.
//  Copyright © 2019 Björn Höfer. All rights reserved.
//

#include "main.hpp"
#include "Automat.h"
#include <stdio.h>
#include <iostream>
using namespace std;



    
int main(){
    actualState = startState;
    cout<< "The machine is currently in state: " <<actualState <<endl;
    cout<< "====================================" <<endl <<endl;
    
    recusiveAutomat();
    }
  








//checks if Automat is in final state
//old version....
/* checkifFinal(int tobechecked){
    if (tobechecked == finalState[0]) {
        return false;
    }if (tobechecked == finalState [1]) {
        return false;
    } else {
        return true;
    }
}*/

//was for int not strings
//checks if input is 1 or 0
//fix input of chars!!!!!!
/*bool validateInput(int input){
    bool isValid = true;
    isValid = (input == 0 || input == 1);
    return isValid;
}*/

//gets input from user
//for digits not strings
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

//old main for digit input etc
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
