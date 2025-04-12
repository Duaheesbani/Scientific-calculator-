#include <iostream>
#include <cmath> // for scientific functions
using namespace std;

int main() {
    int choice;
    double num1, num2;

    cout << "===== Scientific Calculator =====\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Power (x^y)\n";
    cout << "6. Square Root\n";
    cout << "7. Logarithm (base 10)\n";
    cout << "8. Sine (degrees)\n";
    cout << "9. Cosine (degrees)\n";
    cout << "10. Tangent (degrees)\n";
    cout << "11. Exponential (e^x)\n";
    cout << "Enter your choice (1-11): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result = " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result = " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result = " << num1 * num2 << endl;
            break;
        case 4:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            if (num2 != 0)
                cout << "Result = " << num1 / num2 << endl;
            else
                cout << "Error: Cannot divide by zero.\n";
            break;
        case 5:
            cout << "Enter base and exponent: ";
            cin >> num1 >> num2;
            cout << "Result = " << pow(num1, num2) << endl;
            break;
        case 6:
            cout << "Enter number: ";
            cin >> num1;
            cout << "Square Root = " << sqrt(num1) << endl;
            break;
        case 7:
            cout << "Enter number: ";
            cin >> num1;
            cout << "Log (base 10) = " << log10(num1) << endl;
            break;
        case 8:
            cout << "Enter angle in degrees: ";
            cin >> num1;
            cout << "Sine = " << sin(num1 * M_PI / 180) << endl;
            break;
        case 9:
            cout << "Enter angle in degrees: ";
            cin >> num1;
            cout << "Cosine = " << cos(num1 * M_PI / 180) << endl;
            break;
        case 10:
            cout << "Enter angle in degrees: ";
            cin >> num1;
            cout << "Tangent = " << tan(num1 * M_PI / 180) << endl;
            break;
        case 11:
            cout << "Enter number: ";
            cin >> num1;
            cout << "Exponential = " << exp(num1) << endl;
            break;
        default:
            cout << "Invalid choice!\n";
    }

    return 0;
}

