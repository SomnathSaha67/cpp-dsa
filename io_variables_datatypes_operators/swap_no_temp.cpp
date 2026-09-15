#include <iostream>
using namespace std;

int main(){
  
  int a, b;

  cout<<"Enter values of a and b: ";
  cin>>a>>b;

  cout<<"Before swapping, a= "<<a<<", b= "<<b<<"\n";

  a= a+b;
  b= a-b;
  a= a-b;

  cout<<"After swapping, a= "<<a<<", b= "<<b<<"\n";

  return 0;
}