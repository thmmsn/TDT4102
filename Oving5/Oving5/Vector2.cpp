//
//  Vector2.cpp
//  Oving5
//
//  Created by fredrik on 19/02/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

#include "Vector2.h"
#include <cmath>
using namespace std;

Vector2::Vector2(){
    for (int i = 0; i < 2; i++){
        this->vec[i] = 0;
    }

}
Vector2::Vector2(double a, double b){
    this->vec[0] = a;
    this->vec[1] = b;
    
}
double Vector2::dot(const Vector2 &rhs) const{
    double result = 0;
    
    for(int i = 0; i<2; i++){
        
        result += this->vec[i] * rhs.vec[i];
    }
    return result;
}
double Vector2::lengthSquared() const{
    double result;
    
    result = this->dot(*this);
    
    return result;
}
double Vector2::length() const{
    double result;
    
    result = sqrt(this->lengthSquared());
    
    return result;
}
double Vector2::get(int i) const{
    return this->vec[i];
}
void Vector2::set(int i, double j){
    this->vec[i] = j;
}
std::ostream &operator<<(std::ostream &out, const Vector2 &vec){
    out << "[";
    for (int i = 0; i<2; i++) {
        out << vec.vec[i];
        if(i<1){
            out << ", ";
        }
        else{
            
        }
        
        }
    out << "]";

    return out;
}
Vector2 Vector2::operator+( const Vector2& rhs){
    Vector2 result(0,0);
    
    for (int i = 0; i<2; i++) {
        result.vec[i] += rhs.vec[i];
    }
    
    return result;
}
Vector2 Vector2::operator-( const Vector2& rhs){
    Vector2 result(0,0);
    
    for (int i = 0; i<2; i++) {
        result.vec[i] -= rhs.vec[i];
    }
    
    return result;
}
Vector2& Vector2::operator+=( const Vector2& rhs){
    return *this = *this + rhs;
}
Vector2& Vector2::operator-=( const Vector2& rhs){
    return *this = *this - rhs;
}
