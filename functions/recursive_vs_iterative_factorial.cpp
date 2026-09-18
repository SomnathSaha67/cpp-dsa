#include <iostream>
using namespace std;

long long factorialRecursive(int n){
  if (n==0 || n==1)
    return 1;
  return n*factorialRecursive(n-1);
}

long long factorialIterative(int n){
  long long result= 1;
  for (int i=1; i<=n; i++){
    result*=i;
  }
  return result;
}

int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;

  long long rec= factorialRecursive(n);
  long long iter= factorialIterative(n);

  cout<<"Recursive factorial of "<<n<<" = "<<rec<<"\n";
  cout<<"Iterative factorial of "<<n<<" = "<<iter<<"\n";

  cout << (rec == iter ? "Both methods match!\n" : "Mismatch detected!\n");

  return 0;
}