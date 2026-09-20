#include <iostream>
#include <bitset>
using namespace std;

void printBinary(int n){
  cout<<bitset<16>(n); // 16-bit binary representation
}

int main(){

  int num1, num2;
  cout<<"Enter value of num1 and num2: ";
  cin>>num1>>num2;

  cout<<"\nResults:\n";

  cout<<"num1 & num2 = "<<(num1 & num2)<<" (";
  printBinary(num1 & num2);
  cout<<")\n";

  cout<<"num1 | num2 = "<<(num1 | num2)<<" (";
  printBinary(num1 | num2);
  cout<<")\n";

  cout<<"num1 ^ num2 = "<<(num1 ^ num2)<<" (";
  printBinary(num1 ^ num2);
  cout<<")\n";

  cout<<"num1 << 1 = "<<(num1 << 1)<<" (";
  printBinary(num1 <<1);
  cout<<")\n";

  cout<<"num1 >> 1 = "<<(num1>>1)<<" (";
  printBinary(num1>>1);
  cout<<")\n";

  cout<<"~num1 = "<<(~num1)<<" (";
  printBinary(~num1);
  cout<<")\n";

  return 0;
}