// Forelesning 3. februar 2015
// Klasser


#include <iostream>
#include <string>
using namespace std;

#include <vector>

int main(){
    vector<int> vec = {1, 2, 3, 4};
    vec.push_back(5);
    vec.pop_back();
    
    for (int i = 0; i < vec.size(); i++){
        vec[i] += 5;
        cout << vec[i] << " " << vec.at(i) << endl; //leser som ordinære tabeller "index" operatoren '[]' vec[i] = vec.at(i). Oppgaven bestemmer vector eller array
    }

}

// Andre tabeller. Det er også et typenavn som heter array

/*#include <array>

int main(){
    
    array<int, 4> myarr = {5, 6, 7, 8};
    
    for (int i = 0; i < myarr.size(); i++){
        
        cout << myarr[i]; //leser som ordinære tabeller "index" operatoren '[]'
        cout << myarr.at(i); // vec[i] = vec.at(i)

    }
    
}*/


