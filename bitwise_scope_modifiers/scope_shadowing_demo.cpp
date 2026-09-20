#include <iostream>
using namespace std;

int counter= 100;

void shadowCounter(){
  int counter= 50;
  counter+=10;
  cout<<"Inside shadowCounter -> local counter = "<<counter<<"\n";
}

void modifyGlobalCounter(){
  counter+=20;
  cout<<"Inside modifyGloablCounter -> global counter = "<<counter<<"\n";
}

int main(){
  cout<<"Initially -> global counter = "<<counter<<"\n";

  shadowCounter();
  cout<<"After shadowCounter -> global counter = "<<counter<<"\n";

  modifyGlobalCounter();
  cout<<"After modifyGlobalCounter -> global counter = "<<counter<<"\n";

  return 0;
}