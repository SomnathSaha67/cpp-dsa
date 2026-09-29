#include <iostream>
using namespace std;

void doublePtr(int* p){
  *p*=2;
}

void doubleRef(int& r){
  r*=2;
}

int main(){
  int a= 10, b= 15;

  doublePtr(&a);
  doubleRef(b);

  cout<<a<<"\n"<<b<<"\n";

  return 0;
}