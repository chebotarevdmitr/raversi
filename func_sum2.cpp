#include<iostream>

void print0(){
   std::cout << "0" << std::endl;
}

void printK(){
   std::cout << "K" << std::endl;
}
// функция printOK() вызывает как printO() так и printK()
void printOK(){
   print0();
   printK();
}
//объявление main
int main(){
   std::cout << "\tStarting main()" << std::endl;
   printOK();
   std::cout << "\tEnding main()" << std::endl;
   return 0;
}