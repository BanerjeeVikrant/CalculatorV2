//
//  Fraction.cpp
//  Calculator
//
//  Created by Vikrant Banerjee on 2/2/20.
//  Copyright © 2020 Vikrant Banerjee. All rights reserved.
//

#include "Fraction.hpp"
#include "Integer.hpp"

double Fraction::toDecimal(){
    return n / d;
}
string Fraction::toText(){
    return to_string(n)+"/"+to_string(d);
}
string Fraction::toMixedFraction(){
    int whole = n / d;
    int N = n % d;
    if(whole == 0){
        return toText();
    }

    return to_string(whole) + " "+ to_string(N) + "/" + to_string(d);
}

Value* Fraction::add(const Value* other){
    const Integer *intOther = dynamic_cast<const Integer*>(other);
    if (intOther) {
        return (new Fraction(n + d * intOther->i, d));
    }
    const Fraction *fracOther = dynamic_cast<const Fraction*>(other);
    if (fracOther) {
        return (new Fraction(n * fracOther->d + d * fracOther->n , d * fracOther->d));
    }
    return nullptr;
};
Value* Fraction::subtract(const Value* other) {
    const Integer *intOther = dynamic_cast<const Integer*>(other);
    if (intOther) {
        return (new Fraction(n - d * intOther->i, d));
    }
    const Fraction *fracOther = dynamic_cast<const Fraction*>(other);
    if (fracOther) {
        return (new Fraction(n * fracOther->d - d * fracOther->n , d * fracOther->d));
    }
    return nullptr;
};

Value* Fraction::multiply(const Value* other) {
    const Integer *intOther = dynamic_cast<const Integer*>(other);
    if (intOther) {
        return (new Fraction(n * intOther->i, d));
    }
    const Fraction *fracOther = dynamic_cast<const Fraction*>(other);
    if (fracOther) {
        return (new Fraction(n * fracOther->n , d * fracOther->d));
    }
    return nullptr;
};
Value* Fraction::divide(const Value* other) {
    
    const Integer *intOther = dynamic_cast<const Integer*>(other);
    if (intOther) {
        return (new Fraction(n, d * intOther->i));
    }
    const Fraction *fracOther = dynamic_cast<const Fraction*>(other);
    if (fracOther) {
        return (new Fraction(n * fracOther->d , d * fracOther->n));
    }
    return nullptr;
};


