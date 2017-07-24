//
//  single_linked_list.cpp
//  c_plus_plus_learning
//
//  Created by Kunal Rathi on 7/13/17.
//  Copyright © 2017 Kunal Rathi. All rights reserved.
//

#include "single_linked_list.hpp"
#include <iostream>

void single_linked_list::add_node(int value)
{
    node *temp = new node;
    temp->value = value;
    temp->next = NULL;
    
    node *curr = head;
    
    if(head == NULL) {
        head = temp;
    } else {
        while(curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = temp;
    };
    return;
};

void single_linked_list::print()
{
    node *curr = head;
    while(curr != NULL) {
        std::cout << curr->value << "-->";
        curr = curr->next;
    }
    std::cout << "NULL\n";
    return;
};
