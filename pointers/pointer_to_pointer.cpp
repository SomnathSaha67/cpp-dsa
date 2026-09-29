#include <iostream>
using namespace std;

int main(){
  int a= 10;
  int* ptr= &a;
  int** ptr2= &ptr;

  cout<<a<<"\n"<<*ptr2<<"\n"<<**ptr2<<"\n";

  return 0;
}