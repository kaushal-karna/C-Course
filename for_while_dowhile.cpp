#include<iostream>
using namespace std;

int main(){

    /*Loops in C++:
    There are three types of loops in C++:
    1. For loop
    2. While loop
    3. Do-while loop
    */

    /*For loop in C++*/
    // int i=1;
    // cout<<i;
    // i++;
    // Syntax of for Loop:
    // for(initialization; condition; increment/decrement){
    //     // code to be executed
    // }

    // for(int i = 0; i <= 40; i++){
    //     cout<<i<<endl;
    // }

    // // Example of infinite loop
    // for (int i = 1; 34 <= 40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }
    

    // While loop in C++ */
    // Syntax:
    // while(condition):
    // {
    //     C++ statements;
    // }

    // // printing 1 to 40 using while loop
    // int i = 1;
    // while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    // }

    // Example of infinite while loop
    // int i = 1;
    // while(true)
    // {
    //  cout<<i<<endl;
    //  i++;
    // }

     // Do While loop in C++ */
    // Syntax:
    // do(condition):
    // {
    //     C++ statements;
    // }while(condition);

    //  int i = 1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(i<=40);


    /*Exercise: Multiplication table using do while loop*/
    int i = 1, n = 6;
    cout<<"Multiplication table of 6"<<endl;
    do{
        cout<<n<<" * "<<i<< " = "<<(n*i)<<endl;
        i++;
    }while(i<=10);
    return 0;
}