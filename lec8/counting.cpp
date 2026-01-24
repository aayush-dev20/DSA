#include<iostream>
using namespace std;

//functionn signature

void printCounting(int n){

    // function body
    for(int i=1; i<=n; i++){
        cout<< i <<" "; 
    }
         cout<<endl;
}

int main(){

  int n;
  cin >> n;
  
  //function call
  printCounting(n);



 return 0;
}