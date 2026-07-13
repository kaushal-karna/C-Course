// Constants, Manipulators, Operator Precedence

#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    // int a = 34;
    // cout<<"The value of a was: "<<a<<endl;
    // a = 45;
    // cout<<"The value of a is now: "<<a<<endl;

    // Constants --> Constants in C++ are fixed values that cannot be altered by the program during its execution. They are also called literals. Constants can be of any data type, including integer, floating-point, character, and string.
    
    // const int a = 3;
    // cout<<"The value of a was: "<<a<<endl;
    // a = 45.6;  // you will get an error here because a is a constant and cannot be changed
    // cout<<"The value of a is now: "<<a<<endl;

    // Manipulators in C++
    // Manipulators --> Manipulators are used to format the output in C++. They are used to manipulate the output of the data. Some of the commonly used manipulators are endl, setw, setprecision, etc.

    // int a = 3, b = 78, c = 1233;
    // cout<< "The value of a without setw is: "<<a<<endl;
    // cout<< "The value of b without setw is: "<<b<<endl;
    // cout<< "The value of c without setw is: "<<c<<endl;

    // cout<< "The value of a is: "<<setw(4)<<a<<endl;
    // cout<< "The value of b is: "<<setw(4)<<b<<endl;
    // cout<< "The value of c is: "<<setw(4)<<c<<endl;


    // Operator Precedence in C++
    // Operator Precedence --> Operator precedence determines the order in which operators are evaluated in expressions. Operators with higher precedence are evaluated before operators with lower precedence. If operators have the same precedence, their associativity determines the order of evaluation.

    // click this link for more information on operator precedence: 
    // https://en.cppreference.com/w/cpp/language/operator_precedence 
    cout<<"\33]8;;https://en.cppreference.com/cpp/language/operator_precedence\33\\Click here to get operator precedence information\33]8"<<endl;
    int a = 3, b = 4;
    // int c = (a*5) + b; // here * has higher precedence than + so it will be evaluated first
    int c = ((((a*5)+b)-45)+87);
    cout<<c;
    
    return 0;    
}