#include <iostream>
using namespace std;
int a {0};
int b {0};
int x {0};
int y {0};
int sum {0};
int product {0};
int difference {0};
int quotient {0};


int main() {
    // Exercise 2.5 and 2.16 ** This calculates the sum of two integers.
    cout << "Enter two Numbers";
    cin >> a;
    cin >> b;
    sum = a + b;
    product = a * b;
    difference = a - b;
    quotient = a / b;
    cout << "The sum is: " << sum << endl;
    cout << "The product is: " << product << endl;
    cout << "The difference is: " << difference << endl;
    cout << "The Quotient is: " << quotient << endl;

    //Exercise 17.
    cout << "Welcome to C++ programming!" << endl;
    cout << "Welcome to " << "C++ " << "Programing" << endl;
    cout << "Welcome to ";
    cout << "C++ Programming!";

    //Exercise 18
    cout << "Enter two numbers:" << endl;
    cin >> x;
    cin >> y;
    if(x==y){
        cout << "They're Equal!" << endl;
    }
    if(x>y){
        cout << "These aren't equal." << endl;
        cout << y << " is smaller.";
    }
    if(y>x){
        cout << "These numbers aren't equal." << endl;
        cout << x << " is smaller";
    }
    




    return 0;

}