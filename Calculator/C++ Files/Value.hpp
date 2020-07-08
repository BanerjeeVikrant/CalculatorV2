//
//  Value.hpp
//  Calculator
//
//  Created by Vikrant Banerjee on 2/1/20.
//  Copyright © 2020 Vikrant Banerjee. All rights reserved.
//

#ifndef Value_hpp
#define Value_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Value {
    
public:
    virtual string toText() = 0;
    virtual Value* add(const Value* other) = 0;
    virtual Value* subtract(const Value* other) = 0;
    virtual Value* multiply(const Value* other) = 0;
    virtual Value* divide(const Value* other) = 0;
};

#endif /* Value_hpp */
