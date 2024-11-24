#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
   double distance  = 34000000.0;  //расстояние 
   double light_speed = 186000.0;  //скорость света
   double delay;        //задержка
   double delay_in_min; // задержка в минутах

   delay = distance / light_speed;
   cout << "\tTime delay when talking to Mars : " << delay << " seconds \n";

   delay_in_min = delay / 60.0;
   cout << "This amounts to " << delay_in_min << " minutes ";

   return 0;
}
