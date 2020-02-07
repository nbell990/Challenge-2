/* Write a single C++ statement or line that accomplishes each of the following: */
// Print the message "Enter two numbers".

//Assign the product of variables b and c to variable a.

/* State that a program performs a payroll calculation (i.e., use text that helps to document
a program) */

// Input three integer values from the keyboard into integer variables a, b and c.


/* Write a statement (or comment) to accomplish each of the following (assume that using
declarations have been used for cin, cout and endl):
a) Document that a program calculates the product of three integers.
b) Declare the variables x, y, z and result to be of type int (in separate statements) and
initialize each to 0.
c) Prompt the user to enter three integers.
d) Read three integers from the keyboard and store them in the variables x, y and z.
e) Compute the product of the three integers contained in variables x, y and z, and assign
the result to the variable result.
f) Print "The product is " followed by the value of the variable result.
g) Return a value from main indicating that the program terminated successfully.
*/

/* Using the statements you wrote above, write a complete program that calculates
and displays the product of three integers. Add comments to the code where appropriate.
[Note:You’ll need to write the necessary using declarations or directive.] */
#include <iostream>
using namespace std;

int a, b, c, x, y, z, result;

int main() {

    cout << "Enter Two Numbers";
    cin >> b;
    cin >> c;
    a=b*c;

    cout << "Here is your Answer: " << a << endl;
    //This section calculates payroll
    cout << "Input three integers: ";
    cin >> x;
    cin >> y;
    cin >> z;
    result=x*y*z;
    cout << "Your result is: " << result << endl;
    return 0;
}



