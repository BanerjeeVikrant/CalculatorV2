//
//  Stack.h
//  Calculator
//
//  Created by Vikrant Banerjee on 3/25/20.
//  Copyright © 2020 Vikrant Banerjee. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

template <typename T, int N>
class Stack {
    int top;
    T values[N];
    
public:
    Stack(){
        top = 0;
    }
    void push(T item){
        if(top < N){
            values[top++] = item;
        }
    }
    T pop(){
        if(top > 0){
            return values[--top];
            
        } else {
            return T();
        }
    }
};



#endif /* Stack_h */
