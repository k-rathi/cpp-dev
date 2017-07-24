//
//  doubly_linked_list.hpp
//  c_plus_plus_learning
//
//  Created by Kunal Rathi on 7/13/17.
//  Copyright © 2017 Kunal Rathi. All rights reserved.
//

#ifndef doubly_linked_list_hpp
#define doubly_linked_list_hpp
#include <stdio.h>
#include "node.hpp"

class doubly_linked_list {
    node *head;
    node *tail;
    
public:
    void push(int);
    void unshift(int);
    int pop();
    int shift();
    void print_forward();
    void print_backward();
};


#endif /* doubly_linked_list_hpp */
