//
//  main.cpp
//  ;
//
//  Created by Fredrik on 19/02/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

#include <iostream>
#include <thread>
//#include <stdlib.h>
#include "fibonacci.h"
#include "Matrix.h"

using namespace std;

int main(){
    
    Matrix A(2);
    A.set(0, 0, 1.0);
    A.set(0, 1, 2.0);
    A.set(1, 0, 3.0);
    A.set(1, 1, 4.0);
    
    Matrix B(2);
    B.set(0,0, 4.0);
    B.set(0,1, 3.0);
    B.set(1,0, 2.0);
    B.set(1,1, 1.0);
    
    Matrix C(2);
    C.set(0, 0, 1.0);
    C.set(0, 1, 3.0);
    C.set(1, 0, 1.5);
    C.set(1, 1, 2.0);
    
    Matrix D(2);
    
    A += B + C;

    
    cout << A;
    

    return 0;
}



