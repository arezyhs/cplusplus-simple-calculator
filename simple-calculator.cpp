#include <iostream>
using namespace std;

// Functions here!
// Addition
double add(double num1, double num2) {
    return num1 + num2;
}
// Subtraction
double subtract(double num1, double num2) {
    return num1 - num2;
}
// Multiplication
double multiply(double num1, double num2) {
    return num1 * num2;
}
// Division
double divide(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        cout << "Can't divide by zero (0)" << endl;
        return 0;
    }
}

// Main code here!
int main() {
    cout << "============================" << endl;
    cout << "SIMPLE ARITHMETIC CALCULATOR" << endl;
    cout << "============================" << endl;
    cout << "Instructions for use:" << endl;
    cout << "1. Input the first number" << endl;
    cout << "2. Input the second number" << endl;
    cout << "3. Choose your operation" << endl;
    cout << "4. Enjoy!" << endl;
    cout << "============================" << endl;

    // Declaration of variable here.
    double num1, num2, result;
    char userChoice;

    // User input the number.
    cout << "Input your first number: ";
    cin >> num1;
    cout << "Input your second number: ";
    cin >> num2;

    // User input their operation.
    cout << "============================" << endl;
    cout << "Now, choose your operation:" << endl;
    cout << "1 = Addition (+)" << endl;
    cout << "2 = Subtraction (-)" << endl;
    cout << "3 = Multiplication (*)" << endl;
    cout << "4 = Division (/)" << endl;
    cout << "0 = Exit" << endl;
    cout << "Your choice? ";
    cin >> userChoice;

    // Result here, taken from function above.
    cout << "========== RESULT ==========" << endl;
    switch (userChoice) {
        case '0':
            cout << "GOOD BYE!" << endl;
            break;
        case '1':
            result = add(num1, num2);
            cout << "The result of " << num1 << " + " << num2 << " is " << result << endl;
            break;
        case '2':
            result = subtract(num1, num2);
            cout << "The result of " << num1 << " - " << num2 << " is " << result << endl;
            break;
        case '3':
            result = multiply(num1, num2);
            cout << "The result of " << num1 << " * " << num2 << " is " << result << endl;
            break;
        case '4':
            result = divide(num1, num2);
            cout << "The result of " << num1 << " / " << num2 << " is " << result << endl;
            break;
        default:
            cout << "Please choose a valid option (1/2/3/4/0)" << endl;
            break;
    }
}