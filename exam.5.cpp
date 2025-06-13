#include<iostream>
using namespace std;

class Calculator {
public:
   
    int add(int a, int b) 
	{
        return a + b;
    }

    
    int subtract(int a, int b) {
        return a - b;
    }

    
    int multiply(int a, int b) {
        return a * b;
    }

   
    int divide(int a, int b) {
        if (b == 0) {
            cerr << "Error: Division by zero is undefined." << endl;
           
        }
        return a / b;
    }
};

int main() {
    Calculator calc;
    int num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;

    int result = 0;
    bool validOperation = true;

    switch (operation) {
        case '+':
            result = calc.add(num1, num2);
            break;
        case '-':
            result = calc.subtract(num1, num2);
            break;
        case '*':
            result = calc.multiply(num1, num2);
            break;
        case '/':
            result = calc.divide(num1, num2);
            if (num2 == 0) {
                validOperation = false;
            }
            break;
        default:
            cerr << "Error: Invalid operator entered." << endl;
            validOperation = false;
    }

    if (validOperation) {
        cout << "Result: " << result << endl;
    }

    
}

/*
Enter first number: 25
Enter an operator (+, -, *, /): +
Enter second number: 10
Result: 35
*/