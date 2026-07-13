// There are two types of header files in C++:
// 1. System header files: These are the header files that come with the compiler. For example, <iostream>, <vector>, <string>, etc.
#include<iostream>
// 2. User-defined header files: These are the header files that are created by the user.
// #include"this.h" // --> This will produce an error if this.h is not present in the current directory.
using namespace std;

int main() {
    int a=4, b=5;
    cout << "Operators in C++:" << endl;
    cout <<"Following are the types of operators in C++:" << endl;
    // Arithmetic Operators

    cout<< "The value of a + b is: "<<a+b<<endl;
    cout<< "The value of a - b is: "<<a-b<<endl;
    cout<< "The value of a * b is: "<<a*b<<endl;
    cout<< "The value of a / b is: "<<a/b<<endl;
    cout<< "The value of a % b is: "<<a%b<<endl;//4
    cout<< "The value of a++ is: "<<a++<<endl;//5
    cout<< "The value of a-- is: "<<a--<<endl;//4
    cout<< "The value of ++a is: "<<++a<<endl;//5
    cout<< "The value of --a is: "<<--a<<endl<<endl<<endl;//4

    // Assignment Operators --> used to assign values to variables
    // int a=3, b=9;
    // char d='d';

    // Comparison Operators --> used to compare two values
    cout <<"Following are the comparison operators in C++:" << endl;
    cout<< "The value of a == b is: "<<(a == b)<<endl;
    cout<< "The value of a != b is: "<<(a != b)<<endl;
    cout<< "The value of a > b is: "<<(a > b)<<endl;
    cout<< "The value of a < b is: "<<(a < b)<<endl;
    cout<< "The value of a >= b is: "<<(a >= b)<<endl;
    cout<< "The value of a <= b is: "<<(a <= b)<<endl<<endl<<endl;

    // Logical Operators --> used to combine conditional statements
    cout <<"Following are the logical operators in C++:" << endl;
    cout<< "The value of this logical 'AND' operator ((a == b) && (a < b)) is: "<<((a == b) && (a < b))<<endl;
    cout<< "The value of this logical 'OR' operator ((a == b) || (a < b)) is: "<<((a == b) || (a < b))<<endl;
    cout<< "The value of this logical 'NOT' operator (!(a == b)) is: "<<(!(a == b))<<endl;
    return 0;
}