//
//  main.cpp
//  Øvingsforelesning 30-01-15
//
//  Created by fredrik on 30/01/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

#include <iostream>

using namespace std;


 
 /*int main(){

    int variabel = 1;
    variabel+=5;
    variabel++;
    int i = 135;
    cout << "Variabel før for: " << variabel << endl;
    
    for(int i = 0; i < 5; i++){
    
        int variabel = 9;
        cout << "Variabel etter for; " << variabel << endl;
        cout << "i: " << i << endl;
    }
    
    cout << "Variabel etter for: " << variabel << endl;
    cout << "i etter for: " << i << endl;

    return 0;
    
}*/

/*double averageArray(int array[], int size){
    int sum = 0;
    for (int i = 0; i<size; i++){
        sum += array[i];
    }
    double result = static_cast<double>(sum)/size;
    //double result = (double(sum))/size;
    return result;

}

int main(int argC, const char * argV[]){
    int tabell[11]={1,2,3,4,5,6,7,8,9,10,11};
    
    cout << averageArray(tabell, 11) << endl;
    
    return 0;

}*/

/*void reference(int *a, int *b, int c, int d){     // Tester call-by-reference
    *a = c + d + *b;
    *b = c * d;
    cout << *a << endl;
    cout << *b << endl;
}

int main(){
    int c = 2;
    int d = 3;
    int num1, num2;
    
    cout << "num1: " << endl;
    cin >> num1;
    cout << "num2: " << endl;
    cin >> num2;
    reference(&num1, &num2, c, d);
    
    
}*/


int main(int argc, const char * argv[]){
    //char cstreng[] = {'H','e','l','l','o',};
    //char cstreng[] = "Hello";
    char cstreng[20]; // Om det er flere enn n elementer i cstreng[n] blir alle n+1 elementer = 0. {}=0, men ikke cstreng[n]

    /*for (int i = 0; i < 20; i++){
    cout << "Skriv inn tegn : ";
        cin >> cstreng[i];
    }
    cout << cstreng << endl;
     */
    /*
    int x = 0;
    while(x <= 0){
        cout << "Skriv inn et tall som ikk er negativt: " << endl;
        cin >> x;
        if (cin.fail()){
            cin.clear();
            cin >> x;
        }

     }
     */
     
}




















