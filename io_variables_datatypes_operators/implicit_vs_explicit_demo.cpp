#include <iostream> 
#include <iomanip>
using namespace std;

int main(){

  int a= 56;
  float b= 56;
  double c= 56;
  char d= 56;

  cout<<"Implicit conversions:\n";
  cout<<"int + float= "<<a+b<<"\n";
  cout<<"char + int= "<<d+a<<"\n";
  cout<<"double + char= "<<c+d<<"\n";

  cout<<"\nExplicit conversions:\n";
  cout<<"int to float= "<<static_cast<float>(a)<<"\n";
  cout<<"char to int= "<<static_cast<int>(d)<<"\n";
  cout<<"int to char= "<<static_cast<char>(a)<<"\n";

  return 0;
}