#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> v;
  int n, val;

  cout<<"Enter number of elements: ";
  cin>>n;

  for (int i=0; i<n; i++){
    cin>>val;
    v.push_back(val);

    if ((i+1)%2==0){
      cout<<"After "<<i+1<<" insertions: ";
      cout<<"size = "<<v.size()<<", capacity = "<<v.capacity()<<"\n";
    }
  }

  if (v.size()>=2){
    v.pop_back();
    v.pop_back();
  }

  cout<<"Vector after popping last two elements: ";
  for (int x: v)
    cout<<x<<" ";
  cout<<"\n";

  return 0;
}