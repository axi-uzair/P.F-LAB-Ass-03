//Using Ternary Operator
#include <iostream>
using namespace std;

int main(){

int num = 0;
cout <<"Enter an integer: ";
cin>>num;

string result =(num % 2 == 0) ? "Even" : "Odd";
cout <<"The number us: "<<result;

return 0;
}