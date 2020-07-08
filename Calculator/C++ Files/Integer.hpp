//
//  Integer.hpp
//  Calculator
//
//  Created by Vikrant Banerjee on 2/1/20.
//  Copyright © 2020 Vikrant Banerjee. All rights reserved.
//

#ifndef Integer_hpp
#define Integer_hpp

#include <stdio.h>
#include <string>
#include "Value.hpp"

class Integer : public Value  {
    
public:
    int i;
    
    Integer(int integer) {
        i = integer;
    }
    string toText(){
        return std::to_string(i);
    }
    
    Value* add(const Value* other);
    Value* subtract(const Value* other);
    Value* multiply(const Value* other);
    Value* divide(const Value* other);
    
    
};

#endif /* Integer_hpp */
