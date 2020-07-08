//
//  SwiftInterface.cpp
//  Calculator
//
//  Created by Vikrant Banerjee on 2/6/20.
//  Copyright © 2020 Vikrant Banerjee. All rights reserved.
//

#include "SwiftInterface.hpp"
#include "Value.hpp"
#include "Integer.hpp"
#include <iostream>
#include "Stack.h"
#include "C.h"

Value* accumulator;
char oper;
Value* current;

bool answerCalled = false;

Stack<C, 10> stack;

void reset(){
    oper = '+';
    accumulator = new Integer(0);
}

void nextOperator(int num, const char *op){
    if(answerCalled == false){
        current = new Integer(num);
    }
    answerCalled = false;
        switch (oper) {
        case '+':
            accumulator = accumulator->add(current);
            break;
        case '-':
            accumulator = accumulator->subtract(current);
            break;
        case '*':
            accumulator = accumulator->multiply(current);
            break;
        case '/':
            accumulator = accumulator->divide(current);
            break;
        
        default:
            break;
    }
    oper = op[0];
    
    current = new Integer(0);
}

void bracketOpen(){
    C item;
    item.v = accumulator;
    item.op = oper;
    
    stack.push(item);
    reset();
}

void bracketClose(int num){
    current = new Integer(num);
    answer();
    C item = stack.pop();
    accumulator = item.v;
    oper = item.op;
}



void answer(){
    cout << "inside" << endl;
    switch (oper) {
        case '+':
            current = accumulator->add(current);
            
            break;
        case '-':
            current = accumulator->subtract(current);
            break;
        case '*':
            current = accumulator->multiply(current);
            break;
        case '/':
            current = accumulator->divide(current);
            break;
        default:
            break;
    }
    reset();
    answerCalled = true;
}

const char *getCurrentText(){
    char *s= strdup(current->toText().c_str());
    cout << s << endl;
    return s;
}

const char *getAccumuatorText(){
    char *s = strdup(accumulator->toText().c_str());
    cout <<  s << endl;
    return s;
    
}

