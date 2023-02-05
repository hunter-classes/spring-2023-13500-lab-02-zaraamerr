//Name: Zara Amer
//Course Name: CSCI 135
//Date: 2/4/23
//Assignment: Task B for Lab 2
//Test this function by calling it from the main function which
//should be defined in main.cpp. Make sure to include sufficient tests
//to from main to show that this works.

#include <iostream>
#include "funcs.h"

int main(){
    //trial 1
    int L= 5, U = 10;
    std::cout << "The integers within the range " << L << " to " << U << " are: ";
    print_interval(L, U);

    //trial 2
    L = -5, U = 5;
    std::cout << "The integers within the range " << L << " to " << U << " are: ";
    print_interval(L, U);

    //trial 3
    L= 21, U= 39;
    std::cout << "The integers within the range " << L << " to " << U << " are: ";
    print_interval(L, U);

    return 0;
}