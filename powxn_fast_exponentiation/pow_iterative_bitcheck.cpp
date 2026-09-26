#include <iostream>
#include <cmath>
using namespace std;

double powerIterative(double x, int n){
  long long exp= n;
  if (exp<0){
    x= 1/x;
    exp= -exp;
  }

  double ans= 1.0;
  while(exp>0){
    if (exp & 1) ans*=x;
    x*=x;
    exp>>=1;
  }
  return ans;
}

int main(){
  double x; int n;
  cout<<"Enter base and exponent: ";
  cin>>x>>n;

  double result= powerIterative(x, n);
  cout<<"Result: "<<result<<"\n";

  return 0;
}