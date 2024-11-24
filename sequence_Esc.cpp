#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
   cout << "Demonstration Esc sequence " << endl;
   cout << "one \t two \t three \t four" << endl;
   cout << "123\b\b45" << endl; //\b\b выполнит два шага назад и затирание 2и3
   return 0;
}
