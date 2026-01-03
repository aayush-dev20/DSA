#include<iostream>
using namespace std;

// int main(){

//     cout<< " namaste duniya :-) " <<endl  
//     // or  we can use  \n'
//     ;

// }

// What is a Compiler?
// A compiler is a program that converts the code you write (like C++ or C) into a language the computer can understand.

// Basic structure of a C++ program
// 1. Preprocessor Directives: These are lines that start with # and give instructions
//    to the compiler before actual compilation starts. Example: #include<iostream>
// 2. Namespace Declaration: This is used to avoid naming conflicts. Example: using namespace std;
// 3. Main Function: This is the entry point of any C++ program. Example
//    int main() { // code goes here return 0; }


// cout<< = to write something on the console
// cout>> = insertion operator/compilation error
// endl = to end the line
// ; = to end a statement or line of code

// datatype nd variables = int a = 123; where int is datatype, a is variable name and 123 is value assigned to variable a
// 4 bytes = size of int datatype
//  1 byte = 8 bits → so 4 bytes = 32 bits.
int main(){

    int a = 123;

    cout<< a <<endl; 
    
    char b = 'v' ;
    cout<< b <<endl;
// char ch = 'a'; 
// char → type of variable → stores 1 letter,symbol, etc
// ch → the name of the variable
// 'a' → the letter we want to store
// 1 byte = size of char datatype
// Examples of characters: 'a', 'B', '1', %, '@', etc

    bool bl = true;
    cout<< bl <<endl;
// bool bl = true;
// bool → datatype → stores only true or false values
// bl → name of the variable
// true → value assigned to the variable bl
// 1 byte = size of bool datatype

    float f = 2.3;
    cout<< f <<endl;
 // float f = 2.3;
 // float → datatype → stores decimal values
 // f → name of the variable
 // 2.3 → value assigned to the variable f
 // 4 bytes = size of float datatype

    double d = 1.22;
    cout<< d <<endl;
// double d = 1.22;
// double → datatype → stores decimal values with more precision than float
// d → name of the variable
// 1.22 → value assigned to the variable d
// 8 bytes = size of double datatype
// Examples of float and double: 2.3, 3.14, 0.001, etc

   int size = sizeof(a);
   cout<< "Size of a is :"<< size <<endl;

//  int size = sizeof(d);
//  cout << "Size of a is :" << size << endl;

//   int size = sizeof(f);
//   cout << "Size of f is :" << size << endl;

// // sizeof() = operator that returns the size of a datatype or variable in bytes
// // Example: sizeof(a) returns the size of variable a in bytes
// // We can use sizeof() to find the size of different datatypes and variables
// // Example: sizeof(int), sizeof(char), sizeof(bool), sizeof(float), sizeof(double)
// // We can also use sizeof() to find the size of arrays and other data structures
// // Example: sizeof(arr) where arr is an array

 }
