// //  C++ CONTROL STRUCTURES
// Basic Structures in C++ are essential for controlling the flow of a program. They allow developers to create complex logic and behavior by combining these structures in various ways. Understanding how to effectively use sequence, selection, and iteration structures is fundamental to becoming proficient in C++ programming.
// {

// 1. Sequence Structure: The sequence structure is the simplest control structure in C++. It consists of a series of statements that are executed in the order they appear. Each statement is executed one after the other, and there are no branches or loops involved.
// 2. Selection Structure: The selection structure allows the program to make decisions based on certain conditions. The most common selection structures in C++ are the if statement, if-else statement, and switch statement. These structures enable the program to execute different blocks of code depending on whether a condition is true or false.
// 3. Iteration Structure/ Loop Structure: The iteration structure allows the program to repeat a block of code multiple times based on a condition. The most common iteration structures in C++ are the for loop, while loop, and do-while loop. These structures enable the program to execute a block of code repeatedly until a specified condition is no longer true.

// } 

// Sequence Structure
// Entry --> Action1 --> Action2 --> Action3 --> Exit

// Selection Structure
// Entry --> Condition? --> True --> Action1 --> False --> Action2 --> Exit
// Loop Structure
// Entry --> Condition? --> True --> Action1 --> Condition? --> True --> Action1 --> ... --> False --> Exit 

// To module this in programming, we can implement these control structures in C++ code as follows:

// 1. if-else statement:
// syntax: 
// int i = 0;
// if(i<3){
//     cout<<"i is less than 3"<<i<<endl;
//     i++;
// }
// 3. if-else ladder statement:
// syntax:
// int i = 0;
// if(i<3){
//     cout<<"i is less than 3"<<i<<endl;
//     i++;
// }
// else if(i==3){
//     cout<<"i is equal to 3"<<i<<endl;
//     i++;
// }
// else{
//     cout<<"i is greater than 3"<<i<<endl;
//     i++;
// }

// 3. switch statement: 
// syntax:
// int i = 2;
// switch(i){
//     case 1:
//         cout<<"i is equal to 1"<<endl;
//         break;
//     case 2:
//         cout<<"i is equal to 2"<<endl;
//         break;
//     case 3:
//         cout<<"i is equal to 3"<<endl;
//         break;
//     default:
//         cout<<"i is not equal to 1, 2, or 3"<<endl;
// }

#include<iostream>
using namespace std;

int main(){
    cout<<"C++ CONTROL STRUCTURES"<<endl;
    int age;
    cout<< "Tell me your age: "<<endl;
    cin>>age;

    // Selection control Structure: If else-if else ladder
    // if((age<18) && (age>0)){
    //     cout<<"You can not come to my party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    // }
    // else if(age<1){
    //     cout<<"You are not yet born"<<endl;
    // }
    // else{
    //     cout<<"You can come to the party"<<endl;
    // }

    // Selection control Structure: Switch Case statements
    switch(age){
        case 18:
            cout<<"You are 18"<<endl;
            break;

        case 22:
            cout<<"You are 22"<<endl;
            break;

            case 2:
            cout<<"You are 2"<<endl;
            break;
        
        default:
            cout<<"No special cases"<<endl;
            break;

    }

cout<<"Done with the selection control structure"<<endl;
    return 0;
}