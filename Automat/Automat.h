//
//  Header.h
//  Automat
//
//  Created by Björn Höfer on 05.12.19.
//  Copyright © 2019 Björn Höfer. All rights reserved.
//

#ifndef Automat_h
#define Automat_h

//transitionFunc: state {state for input 0, state for input 1}
int const transitionArray[8][2] = {{1,4},{2,4},{2,3},{3,2},{4,4}};
int const startState = 0;
int actualState = 0;
int const finalState[2] = {2,4};

#endif /* Header_h */
