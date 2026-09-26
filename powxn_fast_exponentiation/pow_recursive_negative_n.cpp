#include <iostream>
#include <cmath>
using namespace std;

double powerRecursive(double x, int n){
  if (n==0) return 1.0;
  if (n<0) return 1.0/powerRecursive(x, -n);

  double half= powerRecursive(x, n/2);
  if (n%2==0)
    return half*half;
  else
    return half*half*x;
}

int main(){
  double x; int n;
  cout<<"Enter base and exponent: ";
  cin>>x>>n;

  double result= powerRecursive(x, n);
  cout<<"Result: "<<result<<"\n";

  return 0;
}