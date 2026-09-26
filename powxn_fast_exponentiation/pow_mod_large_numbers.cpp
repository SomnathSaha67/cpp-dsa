#include <iostream>
using namespace std;

long long modPower(long long x, long long n, long long m){
  long long ans= 1%m;
  x%=m;

  while(n>0){
    if (n&1) ans= (ans*x)%m;
    x= (x*x) % m;
    n>>=1;
  }
  return ans;
}

int main(){
  long long x, n, m;
  cout<<"Enter base, exponent and modulus: ";
  cin>>x>>n>>m;
  cout<<"Result: "<<modPower(x, n, m)<<"\n";

  return 0;
}