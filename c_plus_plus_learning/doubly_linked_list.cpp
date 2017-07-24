//
//  doubly_linked_list.cpp
//  c_plus_plus_learning
//
//  Created by Kunal Rathi on 7/13/17.
//  Copyright © 2017 Kunal Rathi. All rights reserved.
//

#include "doubly_linked_list.hpp"
#include "node.cpp"
#include <iostream>

void doubly_linked_list::push(int value)
{
    node *temp = new node;
    temp->value = value;
    if(head == NULL) {
        temp->next = NULL;
        temp->prev = NULL;
        head = tail = temp;
    } else {
        tail->next = temp;
        temp->prev = tail;
        temp->next = NULL;
        tail = temp;
    };
    return;
};

int doubly_linked_list::pop()
{
    int val = tail->value;
    tail = tail->prev;
    tail->next = NULL;
    return val;
}

int doubly_linked_list::shift()
{
    int val = head->value;
    head = head->next;
    head->prev = NULL;
    return val;
}

void doubly_linked_list::unshift(int value) {
    node *temp = new node;
    temp->value = value;
    if(head == NULL) {
        temp->next = NULL;
        temp->prev = NULL;
        head = tail = temp;
    } else {
        temp->next = head;
        temp->prev = NULL;
        head->prev = temp;
        head = temp;
    };
    return;
    
}

void doubly_linked_list::print_backward() {
    node *curr = tail;
    while(curr != NULL) {
        std::cout << curr->value << "-->";
        curr = curr->prev;
    }
    std::cout << "NULL\n";
    return;
}

void doubly_linked_list::print_forward() {
    node *curr = head;
    while(curr != NULL) {
        std::cout << curr->value << "-->";
        curr = curr->next;
    }
    std::cout << "NULL\n";
    return;
}
