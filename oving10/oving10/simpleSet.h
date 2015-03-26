//
//  simpleSet.h
//  oving10
//
//  Created by fredrik on 26/03/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

#ifndef __oving10__simpleSet__
#define __oving10__simpleSet__
#include <iostream>
#include <stdio.h>

template <typename type>
class SimpleSet{
    
public:
    /** Construct empty set **/
    SimpleSet();
    
    /** Insert i into set, return true if the element was inserted, else false **/
    bool insert(type i);
    
    /** Returns true if i is in the set **/
    bool exists(type i);
    
    /** Removes i from the set, return true if an element was removed **/
    bool remove(type i);
    
private:
    /** Dynamic array containing set elements **/
    int *data;
    
    /** Current number of elements **/
    int currentSize;
    
    /** Max capasity of data **/
    int maxSize;
    
    /** Returns the index where i may be found, else an invalid index. **/
    int find(type i);
    
    /** Resizes data, superflous elements are dropped. **/
    void resize(type n);

};

template <typename type>
SimpleSet<type>::SimpleSet(){
    data =  nullptr;
    currentSize = 0;

    maxSize = 10; // Setter maxsize slik at det er mulig å legge til elementer.
}

template <typename type>
bool SimpleSet<type>::insert(type i){
    if(exists(i)){
        return false;
    }
    else{
        
        if( maxSize == currentSize ){
            std::cout << "Increase maxSize?" << std::endl; // Implementere dette?
            resize(maxSize+10);
            return false;
        }
        else{
        currentSize++;
        data[currentSize] = i;
        data[currentSize+1] = nullptr;
        return true;
        }
    }
}

template <typename type>
bool SimpleSet<type>::exists(type i){
    for( int j = 0; j < currentSize; j++){
        if (data[j] == i){
            return true;
        }
    }
    
    return false;
}

template <typename type>
bool SimpleSet<type>::remove(type i){
    
    if( exists(i) ){
        int pos =  find(i);
        data[pos] = data[currentSize];
        data[currentSize] = nullptr;
    }
    else{
        return false;
    }
}

template <typename type>
int SimpleSet<type>::find(type i){
    for( int j = 0; j < currentSize; j++){
        if (data[j] == i){
            return j;
        }
    }
}

template <typename type>
void SimpleSet<type>::resize(type i){
    maxSize = i;
    currentSize = min(currentSize, maxSize);
    type *temp = new type[i];
    
    for (int j = 0; j<currentSize; j++){
        temp[j] = data[j];
    }
    std::swap(temp,data);
    delete temp;
}











#endif /* defined(__oving10__simpleSet__) */
