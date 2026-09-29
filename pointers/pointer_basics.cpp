#include <iostream>
using namespace std;

int main(){
  int a= 42;
  int* p= &a;

  cout<<a<<"\n";
  cout<<&a<<"\n";
  cout<<p<<"\n";
  cout<<*p<<"\n";

  *p= 99;
  cout<<a<<"\n";

  return 0;
}