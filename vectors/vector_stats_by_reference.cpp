#include <iostream>
#include <vector>
using namespace std;

void doubleEvens(vector<int> &v){
  for (int &num: v){
    if (num%2==0){
      num= num* 2;
    }
  }
}

int main(){
  int n, val;
  cout<<"Enter number of elements: ";
  cin>>n;

  vector<int>v;
  for (int i=0; i<n; i++){
    cin>>val;
    v.push_back(val);
  }

  cout<<"Array before doubling: ";
  for (int num: v){
    cout<<num<<" ";
  }

  doubleEvens(v);
  cout<<"\nArray after doubling: ";
  for (int num: v){
    cout<<num<<" ";
  }
  cout<<"\n";

  return 0;
}