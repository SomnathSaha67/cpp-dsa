#include <iostream>
using namespace std;

int main(){

  int n=6, num=1; char ch= 'A';

  for (int i=1; i<=n; i++){
    for (int j=1; j<=n; j++){
      cout<<ch<<" ";
      ch++;
    }
    cout<<"\n";
  }

  return 0;
}