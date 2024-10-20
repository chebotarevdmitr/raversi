#include<iostream>
// эта функция имеет два параметра типа int a и b
// значения переменных a и b определяет caller
void print_values (int a,int b){
   std::cout << a << std::endl;
   std::cout << b << std::endl;
}
int main(){
   print_values(8, 9); // здесь два аргумента 8,9
   return 0;
}