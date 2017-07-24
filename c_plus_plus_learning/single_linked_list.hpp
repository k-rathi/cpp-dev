//
//  single_linked_list.hpp
//  c_plus_plus_learning
//
//  Created by Kunal Rathi on 7/13/17.
//  Copyright © 2017 Kunal Rathi. All rights reserved.
//

#ifndef single_linked_list_hpp
#define single_linked_list_hpp

#include <stdio.h>
#include "node.hpp"

class single_linked_list {
    node *head;
    
public:
    void add_node(int);
    void print();
};


#endif /* single_linked_list_hpp */
