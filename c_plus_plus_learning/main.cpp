//
//  main.cpp
//  c_plus_plus_learning
//
//  Created by Kunal Rathi on 7/13/17.
//  Copyright © 2017 Kunal Rathi. All rights reserved.
//

#include <iostream>
#include "main.h"


int main(int argc, const char * argv[]) {
    single_linked_list list;
    list.add_node(1);
    list.print();
    list.add_node(2);
    list.print();
    list.add_node(45);
    list.print();
    
    doubly_linked_list double_list;
    double_list.push(1);
    double_list.print_forward();
    double_list.push(2);
    double_list.print_forward();
    double_list.push(4);
    double_list.push(20);
    double_list.print_forward();
    std::cout << double_list.pop() << "\n";
    double_list.print_forward();
    std::cout << double_list.shift() << "\n";
    double_list.print_forward();
    double_list.unshift(65);
    double_list.print_forward();
    return 0;
}
