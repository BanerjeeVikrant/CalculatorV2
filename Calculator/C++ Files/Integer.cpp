//
//  Integer.cpp
//  Calculator
//
//  Created by Vikrant Banerjee on 2/1/20.
//  Copyright © 2020 Vikrant Banerjee. All rights reserved.
//

#include "Integer.hpp"
#include "Fraction.hpp"

Value* Integer::add(const Value* other){
    const Integer *intOther = dynamic_cast<const Integer*>(other);
    if (intOther) {
        return (new Integer(i + intOther->i));
    }
    const Fraction *fracOther = dynamic_cast<const Fraction*>(other);
    if (fracOther) {
        return (new Fraction(fracOther->n + fracOther->d * i, fracOther->d));
    }
    return nullptr;
    
}

Value* Integer::subtract(const Value* other){
    const Integer *intOther = dynamic_cast<const Integer*>(other);
    if (intOther) {
        return (new Integer(i - intOther->i));
    }
    const Fraction *fracOther = dynamic_cast<const Fraction*>(other);
    if (fracOther) {
        return (new Fraction(fracOther->n + fracOther->d * i, fracOther->d));
    }
    return nullptr;
   
}

Value* Integer::multiply(const Value* other){
    const Integer *intOther = dynamic_cast<const Integer*>(other);
    if (intOther) {
        return (new Integer(i * intOther->i));
    }
    const Fraction *fracOther = dynamic_cast<const Fraction*>(other);
    if (fracOther) {
        return (new Fraction(fracOther->n * i, fracOther->d));
    }
    return nullptr;
   
}

Value* Integer::divide(const Value* other){
    const Integer *intOther = dynamic_cast<const Integer*>(other);
     if (intOther) {
         if ((i % intOther->i) == 0) {
         return (new Integer(i / intOther->i));
         } else {
             return new Fraction(i, intOther->i);
         }
     }
     const Fraction *fracOther = dynamic_cast<const Fraction*>(other);
     if (fracOther) {
         return (new Fraction(fracOther->n, fracOther->d * i));
     }
     return nullptr;
    
}
