#include <iostream>
using namespace std;

double calculate(double a, double b, char op)
{
    switch (op)
    {
        case '+':
            return a + b;

        case '-':
            return a - b;

        case '*':
            return a * b;

        case '/':
            if (b != 0)
                return a / b;
            else
            {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }

        default:
            cout << "Invalid operator!" << endl;
            return 0;
    }
}

int main()
{
    double a, b, result;
    char op;

    cout << "Enter an expression like (5 + 3): ";
    cin >> a >> op >> b;

    result = calculate(a, b, op);

    cout << "RESULT: " << result << endl;

    return 0;
}

