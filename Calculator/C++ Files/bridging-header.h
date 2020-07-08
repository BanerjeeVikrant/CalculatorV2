//
//  bridging-header.h
//  Calculator
//
//  Created by Vikrant Banerjee on 2/8/20.
//  Copyright © 2020 Vikrant Banerjee. All rights reserved.
//

#ifndef bridging_header_h
#define bridging_header_h

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


#endif /* bridging_header_h */
