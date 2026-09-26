#include <iostream>
#include <cmath>
using namespace std;

double powerNaive(double x, int n){
  double ans= 1.0;
  for (int i= 0; i<n; i++) ans*=x;
  return ans;
}

double powerFast(double x, int n){
  long long binForm= n;
  if (binForm<0){
    x= 1/x;
    binForm= -binForm;
  }

  double ans= 1.0;
  while(binForm>0){
    if (binForm%2==1) ans*=x;
    x*=x;
    binForm/=2;
  }
  return ans;
}

int main(){
  double x; int n;
  cout<<"Enter base and exponent: ";
  cin>>x>>n;

  double naive= powerNaive(x, abs(n));
  double fast= powerFast(x, n);

  cout<<"Naive result: "<<naive<<"\n";
  cout<<"Fast result: "<<fast<<"\n";

  if (fabs(naive-fast)<1e-9)
    cout<<"Both match"<<"\n";
  else
    cout<<"Results differ"<<"\n";

  return 0;
}