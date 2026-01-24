// #include <iostream>
// using namespace std;

// int main() {
//     int a = 4;
//     int b = 6;

//     cout << "a & b = " << (a & b) << endl;  
//     cout << "a | b = " << (a | b) << endl;  
//     cout << "a ^ b = " << (a ^ b) << endl;  
//     // cout << " ~a = " << ~a << endl; 

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     cout << (17 >> 1) << endl;
//     cout << (17 >> 2) << endl;
//     cout << (19 << 1) << endl;
//     cout << (21 << 2) << endl;

//     int i = 7;

//     cout << (i++) << endl;
//     cout << (++i) << endl;
//     cout << (i--) << endl; 
//     cout << (--i) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {

//     int n;
//     cout<<"enter the value of n" <<endl;
//     cin >> n ; 

//     cout<<"printing count from 1 to n" << endl;
     
//     for(int i = 1; i<=n; i++ ) {
//      cout<< i <<endl;
//     }

// }

// #include <iostream>
// using namespace std;

// int main() {

//     int n;
//     cout<<"enter the value of n" <<endl;
//     cin >> n ; 

//     cout<<"printing count from 1 to n" << endl;
//      int i = 1;

//      for(; ;){

//         if (i<=n)
//         {
//             cout<< i << endl;
//         }
//             else{
//                 break;
//             }
//             i++;
//      }
// }

//  #include <iostream>
// using namespace std;

// int main() {

//     int n;
//     cout<<"enter the value of n" <<endl;
//     cin >> n ;
    
//     int sum = 0;
    
//     for (int i= 1; i<=n; i++){
//     sum += i;
// //    sum = sum + i;
// }
// cout<< sum << endl;
// }

// fibonacci series question
// #include <iostream>
// using namespace std;

// int main() {

//     int n = 10;
    
//     int a = 0;
//     int b = 1 ;

//  cout <<a <<"" <<b<<"";


// for(int i = 1; i<=n; i++){

//     int nextNumber = a+b;

//     cout<<nextNumber<<"";

//     a=b;
//     b= nextNumber;
// }
// }


// // PRIME NUMBER
//     #include <iostream>
// using namespace std;

// int main() {

//     int n;
//     cout<<"enter the value of n" <<endl;
//     cin >> n ;
   
//     bool isPrime = 1;

//     for (int i = 2; i<n; i++)
//     {
//         // rem = 0 ,NOT A PRIME NUMBER
//         if(n%i==0)   {
//             // cout<<"not a prime number" << endl;
//             isPrime = 0;
//             break;
//         }
//     }

//     if (isPrime  == 0){
//         cout<<"Not a Prime Number" <<endl;

//     }
//     if(isPrime == 0){
//      cout<<"Not a Prime Number"<<endl;
//     }
//     else{
//         cout<<"is a Prime Number" <<endl;
//     }
// }

//   #include <iostream>
// using namespace std;

// int main() {

//     for(int i = 0; i<5; i++) {
        
//         cout<< "hi" <<endl;
//         cout<< "hey" <<endl;
//         continue;
//         cout<< "reply to karo" <<endl;
//     }
// }

// VARIABLES ND SCOPE

//   #include <iostream>
// using namespace std;

// int main() {

//     int a = 5;
//     cout<< a <<endl;

//    if(true) {
//     int a = 5;
//     cout<< a <<endl;
//    }
//    int i = 8;
//    for(; i<=8; i++){
//     cout<<"hi" <<endl;
//    }

//  if(1) {
//     int b = 1;
//     if(1) {
//         int b = 2;
//         if(1) {
//             cout << b << endl; // prints 2
//         }
//     }
// }
// }

// QUESTION

// class Solution {
// public:
//     int subtractProductAndSum(int n) {
//         int prod = 1;
//         int sum = 0;

//         while (n != 0) {
//             int digit = n % 10;
//             prod = prod * digit;
//             sum = sum + digit;
//             n = n / 10;
//         }

//         int answer = prod - sum;
//         return answer;
//     }
// };

