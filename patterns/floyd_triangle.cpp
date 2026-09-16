#include <iostream>
using namespace std;

int main(){

  int n, num= 1; char ch= 'A';

  cout<<"Enter value of n: ";
  cin>>n;

  for (int i=0; i<n; i++){
    for (int j=0; j<i+1; j++){
      cout<<ch<<" ";
      ch++;
    }
    cout<<"\n";
  }

  return 0;
}