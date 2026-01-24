// #include <iostream>
// using namespace std;

// int main() {

//     int a = 9;
//     if(a ==9) {

//           cout<< "NINEY";

//     }

//     if ( a > 0 )

//     {

//          cout<< " POSITIVE " ;

//     }
//     else{

//         cout<< " NEGATIVE " ;

//     }
// }

// QUESTION 2

// #include <iostream>
// using namespace std;

// int main() {

//     int a = 9;
//     int b = a +  1;

//     if(( a = 3) ==b ) {

//           cout<< a;

//     }
//     else if(b){
//      cout<< b <<endl; ;
//      cout<<" a + 1 = "<< a + 1 <<endl; 
//     }
//     // else{
//     // // cout<< " a+1 " ; 
//     // }
// } 

// QUESTION 3

#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int i = 1;

    while(i<=n) {
        
        int j = 1;
        while(j<=n) {
            cout<< "*";
            j = j+1; 
        }
        cout<<endl;

        i = i+1;
    } 
}

// // QUESTION 4

// #include<iostream>
// using namespace std;

// int main() {

//     int n;
//     cin >> n;

//     int i = 1;

//     while(i<=n) {

//         int j = 1;
//         while(j<=n) {
//             cout << i;
//             j = j + 1;
//         }
//         cout<<endl;
//         i = i+1;
//     }
// }