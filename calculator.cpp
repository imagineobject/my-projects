// This is my first ever C++ project

#include <iostream>

    double number_one;
    double number_two; 

    void add();
    void sub();
    void mul();
    void divid();

int main() {

std::cout << "********************" << '\n';
std::cout << "** C++ Calculator **" << '\n';
std::cout << "********************" << '\n';
    
std::cout << "What do you want to do?" << '\n';
std::cout << "Type 'A' to Add, 'S' to Subtract, 'M' to Multiply and 'D' to divide: ";
char oper;
std::cin >> oper;

if (oper == 'A') {
 add(); }

if (oper == 'S') {
 sub(); }

if (oper == 'M') {
 mul(); }

if (oper == 'D') {
 divid(); }

    return 0;
}

void add() {
    std::cout << "Enter the first number: ";
    std::cin >> number_one;
std::cout << "Enter the second number: ";  
    std::cin >> number_two;
    std::cout <<  "The awnser is: " << number_one+number_two << '\n'; }

void sub() {
    std::cout << "Enter the first number: ";
    std::cin >> number_one;
std::cout << "Enter the second number: ";  
    std::cin >> number_two;
    std::cout <<  "The awnser is: " << number_one-number_two << '\n'; }

void mul() {
    std::cout << "Enter the first number: ";
    std::cin >> number_one;
std::cout << "Enter the second number: ";  
    std::cin >> number_two;
    std::cout <<  "The awnser is: " << number_one*number_two << '\n'; }

void divid() {
    std::cout << "Enter the first number: ";
    std::cin >> number_one;
std::cout << "Enter the second number: ";  
    std::cin >> number_two;
    std::cout <<  "The awnser is: " << number_one/number_two << '\n'; }
