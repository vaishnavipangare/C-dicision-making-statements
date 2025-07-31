//EXPERIMENT-5
// Vaishnavi Pangare
// ENTC A3
// 25070123501
//Problem Statement:Make a calculator using switch case.


#include <iostream>
using namespace std;

int main() {
    char oper;
    float a, b;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (oper) {
        case '+':
            cout << a << " + " << b << " = " << a + b;
            break;
        case '-':
            cout << a << " - " << b << " = " << a - b;
            break;
        case '*':
            cout << a << " * " << b << " = " << a * b;
            break;
        case '/':
            if (b != 0)
                cout << a << " / " << b << " = " << a / b;
            else
                cout << "Error! Division by zero.";
            break;
        default:
            cout << "Error! Invalid operator.";
            break;

    return 0;
}

/*Output
Enter an operator (+, -, *, /): /
Enter two numbers: 10 2
10 / 2 = 5
*/
