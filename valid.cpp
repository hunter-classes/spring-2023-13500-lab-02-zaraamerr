//Name: Zara Amer
//Course Name: CSCI 135
//Date: February 1
//Assignment: Task A of Lab 2
//Write a program valid.cpp, which asks the user to input an integer
//in the range 0 < n < 100. If the number is out of range, the program
//should keep asking to re-enter until a valid number is input.
//After a valid value is obtained, print this number n squared.

#include <iostream>

int main (){
    int num; //creates a var that will store user's integer input
    int num_squared; //creates a var that will store the calculation to square the int
    std::cout << "Enter an integer from 0-100: " << std::endl; //asks user to input an int within the 0-100 range
    std::cin >> num; //stores user's input into var num
    while (num <= 0 || num >= 100) { //checks if the num is outside of the 0-100 range
    std::cout << "Invalid input. Enter an integer within the 0-100 range: "; //if the num is outside of the range, ask user to re-enter another int within the range
    std::cin >> num; //store their input into the var num
    }
    num_squared= num * num; //square the num
    std::cout << num << " squared is " << num_squared << std::endl; //output the squared num
}