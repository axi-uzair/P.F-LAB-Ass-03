//Comparison Operators with User Input
#include <iostream>
using namespace std;

int main(){

 int num1 = 0, num2 = 0;
 cout <<"Enter two integers: ";
 cin >>num1 >>num2;

 cout <<"num1 == num2: "<<(num1==num2);
 cout <<"\nnum1 != num2: "<<(num1!=num2);
 cout <<"\nnum1 > num2: "<<(num1>num2);
 cout <<"\nnum1 < num2: "<<(num1<num2);
 cout <<"\nnum1 >= num2: "<<(num1>=num2);
 cout <<"\nnum1 <= num2: "<<(num1<=num2);

return 0;
}