//
//  stack.hpp
//  c_plus_plus_learning
//
//  Created by Kunal Rathi on 7/13/17.
//  Copyright © 2017 Kunal Rathi. All rights reserved.
//

#ifndef stack_hpp
#define stack_hpp
#include <stdio.h>
#include "single_linked_list.hpp"

class Stack {
    single_linked_list list_1;
    single_linked_list list_2;
    
public:
    void push(int);
    int pop();
};



#endif /* stack_hpp */
