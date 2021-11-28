#include "std_lib_facilities.h"

int stringToNum(string num) {
    int numDouble;

    if (num == "one" || num == "1") {
        numDouble = 1;
    }
    else if (num == "two" || num == "2") {
        numDouble = 2;
    }
    else if (num == "three" || num == "3") {
        numDouble = 3;
    }
    else if (num == "four" || num == "4") {
        numDouble = 4;
    }
    else if (num == "five" || num == "5") {
        numDouble = 5;
    }
    else if (num == "six" || num == "6") {
        numDouble = 6;
    }
    else if (num == "seven" || num == "7") {
        numDouble = 7;
    }
    else if (num == "eight" || num == "8") {
        numDouble = 8;
    }
    else if (num == "nine" || num == "9") {
        numDouble = 9;
    }
    else if (num == "zero" || num == "0") {
        numDouble = 0;
    }
    else {
        cout << "Invalid number, defaulting to 0\n";
    }

    return numDouble;
}

int main() {
    char operation;
    string number1Str, number2Str;
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> number1Str;
    num1 = stringToNum(number1Str);

    cout << "Enter the second number: ";
    cin >> number2Str;
    num2 = stringToNum(number2Str);

    cout << "Enter the type of operation (+, -, *, /, %): ";
    cin >> operation;

    if (operation == '+') {
        cout << "The sum of " << num1 << " and " << num2 << " is " << (num1 + num2);
    }
    else if (operation == '-') {
        cout << "The result of subtracting " << num1 << " and " << num2 << " is " << (num1 - num2);
    }
    else if (operation == '*') {
        cout << "The result of multiplying " << num1 << " and " << num2 << " is " << (num1 * num2);       
    }
    else if (operation == '/') {
        cout << "The result of dividing " << num1 << " and " << num2 << " is " << ((1.0 * num1) / (1.0 * num2));      
    }
    else if (operation == '%') {
        cout << "The remainder from dividing " << num1 << " and " << num2 << " is " << (num1 % num2);      
    }
    else {
        cout << "Invalid operation";
    }
}