//
//  Fraction.hpp
//  Calculator
//
//  Created by Vikrant Banerjee on 2/2/20.
//  Copyright © 2020 Vikrant Banerjee. All rights reserved.
//

#ifndef Fraction_hpp
#define Fraction_hpp

#include <stdio.h>
#include <string>
#include <math.h>
#include "Integer.hpp"
#include "Value.hpp"

using namespace std;

class Fraction : public Value {
    
public:
    int n;
    int d;
    
    Fraction(int numerator, int denominator){
        n = numerator;
        d = denominator;
        
        if(n < d){
            for(int i = n; i > 1; i--){
                if(n % i == 0 && d % i == 0){
                    n /= i;
                    d /= i;
                }
            }
        }else{
            for(int i = d; i > 1; i--){
                if(n % i == 0 && d % i == 0){
                    n /= i;
                    d /= i;
                }
            }
        }
    }
    
    double toDecimal();
    string toText();
    string toMixedFraction();

    Value* add(const Value* other);
    Value* subtract(const Value* other);
    Value* multiply(const Value* other);
    Value* divide(const Value* other);
    
    
};



#endif /* Fraction_hpp */
