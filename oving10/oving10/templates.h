//
//  templates.h
//  oving10
//
//  Created by fredrik on 26/03/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

#ifndef oving10_templates_h
#define oving10_templates_h

template <class type>
void shuffle(type a[], int n){
    
    for (int j = 0; j<n; j++){
        type temp1 = a[j];
        int r = rand() % n;
        type temp2 = a[r];
        a[j] = temp2;
        a[r] = temp1;
    }
    
}

template <class type>
type maximum(type a, type b){
    
    if(a > b){
        return a;
    }
    else if (b > a){
        return b;
    }
    else{
        return a;
    }
    
}

#endif

