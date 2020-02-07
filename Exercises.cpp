#include <iostream>
using namespace std;
int a {0};
int b {0};
int x {0};
int y {0};
int q {0};
int r {0};
int s {0};
int sum19 {0};
int avg19 {0};
int prod19 {0};
int low19 {0};
int large19 {0};
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
    //Exercise 19
    cout << "Input three different integers: " << endl;
    cin >> q;
    cin >> r;
    cin >> s;
    sum19 = q + r + s;
    avg19 = (q + r + s)/3;
    prod19 = q * r * s;
    if (q>r){
        if(q>s){ cout << q << " is greatest.";}
    }
    if (r>q){
        if (r>s){ cout << r << " is greatest.";}
    }
    if (s>q){
        if(s>r){cout << s << " is greatest." << endl;}
    }
    cout << "The sum is " << sum19 << endl;
    cout << "The Average is " << avg19 << endl;
    cout << "The Product is " << prod19 << endl;


    




    return 0;

}