// This is my first ever C++ project

#include <iostream>

namespace clutter1 {
    double number;
}

namespace clutter2 {
    double number; 
}

char oper;

void add() {
    std::cout << "Enter the first number: ";
    std::cin >> clutter1::number;
std::cout << "Enter the second number: ";  
    std::cin >> clutter2::number;
    std::cout <<  "The awnser is: " << clutter1::number+clutter2::number << '\n'; }

void sub() {
    std::cout << "Enter the first number: ";
    std::cin >> clutter1::number;
std::cout << "Enter the second number: ";  
    std::cin >> clutter2::number; 
    std::cout <<  "The awnser is: " << clutter1::number-clutter2::number << '\n'; }

void mul() {
    std::cout << "Enter the first number: ";
    std::cin >> clutter1::number;
std::cout << "Enter the second number: ";  
    std::cin >> clutter2::number;
    std::cout <<  "The awnser is: " << clutter1::number*clutter2::number << '\n'; }

void divid() {
    std::cout << "Enter the first number: ";
    std::cin >> clutter1::number;
std::cout << "Enter the second number: ";  
    std::cin >> clutter2::number;
    std::cout << "The awnser is: " << clutter1::number/clutter2::number << '\n'; }

void oper_handle() {

std::cout << "What do you want to do?" << '\n';
std::cout << "Type 'A' to Add, 'S' to Subtract, 'M' to Multiply and 'D' to divide: ";
std::cin >> oper;

if (oper == 'A') {
 add(); }

if (oper == 'S') {
 sub(); }

if (oper == 'M') {
 mul(); }

if (oper == 'D') {
 divid(); }

}

int main() {

if (oper == 'A' || 'S' || 'M' || 'D') {
  oper_handle();  
} 

    return 0; }