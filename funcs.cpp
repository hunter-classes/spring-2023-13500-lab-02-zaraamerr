// Name: Zara Amer
// Course Name: CSCI 135
// Date: February 4, 2023
// Assignment: Task B for Lab 2
//In funcs.cpp write a void function named print_interval(int L,int U)
//that will accept two integer parameters and will print the output as
//specified in the main lab. 

//Main Lab directions for task b: Take two integers L and U 
//(representing the lower and upper limits of the interval), and print
//out all integers in the range L ≤ i < U separated by spaces. 
//Notice that we include the lower limit, but exclude the upper limit.

//The program for this task should not ask 
//for any keyboard input. The input test values should be hard coded in
//the program.

#include <iostream>

void print_interval (int L, int U){
    for (int i= L; i < U; i++){ //for every int in the range btwn U and L, starting at L
        std::cout << i << " "; //output the ints within the range
    }
    std::cout << std::endl;
}