//Decimal to Binary converter
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string binary(long long &x){

    string represent = " ";

    while(x > 0){

      represent += ((x%2) + '0');
      x /= 2;

    }

    reverse(represent.begin() , represent.end());
    return represent;
}

int main(){

   while(true){
   long long n;
   cout << "Enter a Decimal number: " << "\n";
   cin >> n;
   cout << "It's binary: " << binary(n);
   cout << "\n";
   }
}
