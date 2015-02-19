//
//  Vector2.h
//  Oving5
//
//  Created by fredrik on 19/02/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

#ifndef __Oving5__Vector2__
#define __Oving5__Vector2__ // erstatter #pragma once
#include <iostream>
#include <stdio.h>

class Vector2{
private:
    double vec[2];
public:
    Vector2();
    Vector2(double a, double b);
    double dot(const Vector2 &rhs) const;
    double lengthSquared() const;
    double length() const;
    double get(int i) const;
    void set(int i, double j);
    friend std::ostream &operator<<(std::ostream &out, const Vector2 &vec);
    Vector2& operator+=( const Vector2& rhs);
    Vector2& operator-=( const Vector2& rhs);
    Vector2 operator+( const Vector2& rhs);
    Vector2 operator-( const Vector2& rhs);
};

#include <stdio.h>

#endif /* defined(__Oving5__Vector2__) */
