#include<iostream>
using namespace std;

int main()
{
    int n;
    int num1, num2;

    while (true)  // Loop indefinitely; will break based on user input
    {
        cout << "\nFollowing are the operations in minicalculator:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Remainder\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> n;

        if (n == 0) {
            break;  // Exit the loop and end the program
        }

        if (n < 0 || n > 5) {
            cout << "Invalid choice. Please enter a number between 0 and 5." << endl;
            continue;  // Skip the rest of the loop and prompt for choice again
        }

        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        switch (n)
        {
            case 1:
                cout << "Addition of two numbers is: ";
                cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;

            case 2:
                cout << "Subtraction of two numbers is: ";
                cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;

            case 3:
                cout << "Multiplication of two numbers is: ";
                cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;

            case 4:
                if (num2 != 0) {
                    cout << "Division of two numbers is: ";
                    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;

            case 5:
                if (num2 != 0) {
                    cout << "Remainder of two numbers is: ";
                    cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
        }
    }

    return 0;  // Exit the program
}

  
