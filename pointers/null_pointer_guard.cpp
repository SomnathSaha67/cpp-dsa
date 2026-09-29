#include <iostream>
using namespace std;

void printSafe(int* p){
  if (p==nullptr){
    cout<<"null\n";
  } else{
    cout<<*p<<"\n";
  }
}

int main(){
  int x= 25;
  int* validPtr= &x;
  int* nullPtr= nullptr;

  printSafe(validPtr);
  printSafe(nullPtr);

  return 0;
}