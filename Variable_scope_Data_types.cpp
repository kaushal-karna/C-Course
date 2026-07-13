// SYNTAX FOR DECLARING VARIABLES IN C++

// Data_type Variable_name = value;
// Ex. int a = 4, b= 6;
// Based on Scope, variable can be classified into two types:
// 1. Local Variables
// 2. Global Variables


#include <iostream>
using namespace std;

int glo = 6;
void sum(){
    int a;
    cout<<glo;
}
int main(){
    int glo = 9;
    glo = 78;
    int a= 4, b= 8;
    float pi = 3.14;
    char c = 'u';
    bool is_true = false;
    sum();
    cout<<glo<< is_true;
    // cout<<"\nThis is tutorial on variable scope and data types in C++"<<"\nHere the value of is: "<< a <<".\nThe value of b is: "<< b;
    // cout<<"\nThe value of pi is: "<<pi;
    // cout<<"\nThe value of c is: "<<c;
    return 0;
}