#include<iostream>
using namespace std;

int get_value_from_user(){
   int x = 0;
   cout << "\tEnter or integer number :" << endl;
   cin >> x;
   return x;
}

int main(){
   cout << "HELLO Dimcasic " << endl;
   int a = get_value_from_user();
   int b = get_value_from_user();

   cout << "\t The sum of the functions called " << a << " + "<< b << " = " << a + b << endl;
   return 0;
}