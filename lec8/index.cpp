//  #include<iostream>
//  using namespace std;

//  int main(){

//     // char ch = '1';
//     int num = 1;

//     cout << endl;
//     switch( num ) {

//         case 1: cout << "First" <<endl;
//             //    cout << " first again " <<endl;
//                break;
    
//         case 2: cout<< "Second" <<endl;
//         // case '1': cout << "character one " <<endl;
//               break;

//         // case '1': switch(num){
//         //         case 1: cout<< " Value of num is" << num <<endl;
//         //         break;
//         // }
//         // break;

//         default: cout<< " it is default case " <<endl;
//     }

//     cout << endl;

// return 0;
//  }

 #include<iostream>
 using namespace std;

 int main(){

    // char ch = '1';
    int num = 2;

    cout << endl;
    switch( 2*num ) {
        case 1: cout << "First" <<endl;
               cout << " first again " <<endl;
               break;
    
        case 2: cout<< "Second" <<endl;
        // case '1': cout << "character one " <<endl;
              break;

              
        case '1': switch(num){
                case 1: cout<< " Value of num is" << num <<endl;
                break;
        }
        break;

        default: cout<< " it is default case " <<endl;
    }

    cout << endl;

return 0;

 }