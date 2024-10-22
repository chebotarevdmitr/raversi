#include<iostream>

int main(int argc, char const *argv[])
{
   int x = 4, b = 2;
   x -= b /= x * b;
   std::cout << x << " " << b << std::endl;
   std::cin.get();
   return 0;
}
