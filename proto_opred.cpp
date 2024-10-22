#include<iostream>

int add(int x, int y); // <-прототип функции предварительное
                       //  объяление функции  add()

int main(int argc, const char** argv) {
   std::cout << " The sum 3 and 4 is :" << add(3, 4)<<std::endl;
   return 0;
}

int add(int x,int y){   //<-определение функции add()
   return x + y;        // находится ниже её вызова
}