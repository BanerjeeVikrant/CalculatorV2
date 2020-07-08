//
//  SwiftInterface.hpp
//  Calculator
//
//  Created by Vikrant Banerjee on 2/6/20.
//  Copyright © 2020 Vikrant Banerjee. All rights reserved.
//

#ifndef SwiftInterface_hpp
#define SwiftInterface_hpp

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

void reset();
void nextOperator(int num, const char *op);
void answer();
const char *getCurrentText();
const char *getAccumuatorText();
void bracketOpen();
void bracketClose(int num);


#ifdef __cplusplus
}
#endif
#endif /* SwiftInterface_hpp */
