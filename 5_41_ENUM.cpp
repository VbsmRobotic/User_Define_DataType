#include <iostream>
using namespace std;


enum days  {MON = 1, TUE, WED, THU, FRI, SAT, SUN} ;



int main () {
   // local variable declaration:

   char days ;
   cout << "Enter your number " << endl ;
   cin >> days ; 

   switch(days) {
      case '1' :
         cout << "Go to office block A" << endl; 
         break;
      case '2' :
         cout << "Go to office block B Meeting room" << endl ;
         break ;
      case '3' :
         cout << "Go to office block A " << endl ;
         break ;
      case '4' :
         cout << "Go to office block E" << endl;
         break;
      case '5' :
         cout << "Go to office block A" << endl;
         break;
      default :
         cout << "It's weekend REST REST" << endl;
   }
   cout << "Your day is " << days << endl;
 
   return 0;
}