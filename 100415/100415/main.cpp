//
//  main.cpp
//  100415
//
//  Created by fredrik on 10/04/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

/*
 
 void foo() throw(string, int);
 
 */

#include <iostream>


double fart(int km, int minutter){
    if(km < 0){
        throw std::string("FATAL ERROR: feil verdi for km");
    }
    if(minutter <= 0){
        throw  -1; // std::string("FATAL ERROR: feil verdi for mintutter");
    }
    
    return km/minutter/60;
}

int main(){
    try{
        std::cout << "fart= " << fart(200,120) << std::endl;
        std::cout << "fart= " << fart(-200,0) << std::endl;
        std::cout << "fart= " << fart(200,-120) << std::endl;
        std::cout << "fart= " << fart(0,200) << std::endl;
        std::cout << "fart= " << fart(0,0) << std::endl;
        std::cout << "fart= " << fart(200,199) << std::endl;
    } catch(std::string &exc){ //fanger opp unntakene, etter type, referanser er hendig.
        std::cout << exc << std::endl;
    }
    catch(int exc){
        std::cout << exc << std::endl;
    }

}