//============================================================================
// Name        : Integer Pointers
// Author      : FM
// Version     :
// Copyright   :
// Description : Gets 3 integers from user into variables, assigns pointers
//               to the variable memory addresses, and displays the values
//               and addresses. Finally deletes pointers to free up memory
//============================================================================

#include <iostream>
using namespace std;

int main() {
    int val1;
    int val2;
    int val3;

    // Ask the user to enter three integer values
    cout << "Enter integer 1: ";
    cin >> val1;
    cout << "Enter integer 2: ";
	cin >> val2;
	cout << "Enter integer 3: ";
	cin >> val3;
	cout << endl;

    // Create integer pointers and allocate dynamic memory using the new operator
    int* ptr1 = new int(val1);
    int* ptr2 = new int(val2);
    int* ptr3 = new int(val3);

    // Display the contents of the variables and the pointers
    cout << "Variable contents:" << endl;
    cout << "val1: " << val1 << endl;
    cout << "val2: " << val2 << endl;
    cout << "val3: " << val3 << endl << endl;

    cout << "Pointer addresses and values:" << endl;
    cout << "ptr1 Address: " << ptr1 << ", Value: " << *ptr1 << endl;
    cout << "ptr2 Address: " << ptr2 << ", Value: " << *ptr2 << endl;
    cout << "ptr3 Address: " << ptr3 << ", Value: " << *ptr3 << endl;

    // Use the delete operator to free the dynamically allocated memory
    // If the pointers are not deleted, it will cause memory leaks,
    // or a gradual reduction in available memory, potentially crashing the OS.
    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}
