//
//  vector.h
//  oving9
//
//  Created by fredrik on 17/03/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

#ifndef __oving9__vector__
#define __oving9__vector__

#include <stdio.h>

#include "Matrix.h"

/*
 Oppretter en ny klasse vektor som arver Matrix klassen
 */

class Vector : public Matrix{

private:
    int width = 1;
    int height;
    
};


#endif /* defined(__oving9__vector__) */
