//Logical Operators with Boolean Values
#include <iostream>
using namespace std;

int main(){

 bool right = true;
 bool wrong = false;

 cout <<"right AND wrong: "<<(right && wrong);
 cout <<"\nright OR wrong: "<<(right || wrong);
 cout <<"\nNOT wrong: "<<(! wrong);

return 0;
}