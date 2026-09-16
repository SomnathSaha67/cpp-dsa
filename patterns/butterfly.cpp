#include <iostream>
using namespace std;

int main(){

  int n;

  cout<<"Enter value of n: ";
  cin>>n;

  //Upper half
  for (int i=1; i<=n; i++){
    //Left wing
    for (int j=1; j<=i; j++){
      cout<<"*";
    }
    //Spaces in the middle
    for (int j=1; j<=2*(n-i); j++){
      cout<<" ";
    }
    //Right wing;
    for (int j=1; j<=i; j++){
      cout<<"*";
    }
    cout<<"\n";
  }

  //Lower half
  for (int i=n; i>=1; i--){
    //Left wing
    for (int j=1; j<=i; j++){
      cout<<"*";
    }
    //Spaces in middle
    for (int j=1; j<=2*(n-i); j++){
      cout<<" ";
    }
    //Right wing
    for (int j=1; j<=i; j++){
      cout<<"*";
    }
    cout<<"\n";
  }

  return 0;
}