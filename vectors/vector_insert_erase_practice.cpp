#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n, val;
  cout<<"Enter number of elements: ";
  cin>>n;

  vector<int> v;
  for (int i=0; i<n; i++){
    cin>>val;
    v.push_back(val);
  }

  cout<<"\nOriginal vector: ";
  for (int num: v) cout<<num<<" ";
  cout<<"\n";

  // Insertion operation
  int insertIndex, insertVal;
  cout<<"Enter index and value to insert: ";
  cin>>insertIndex>>insertVal;

  v.insert(v.begin()+insertIndex, insertVal);

  cout<<"After insertion: ";
  for (int num: v) cout<<num<<" ";
  cout<<"\n";

  // Erase operation
  int eraseIndex;
  cout<<"Enter index to erase: ";
  cin>>eraseIndex;

  v.erase(v.begin()+eraseIndex);

  cout<<"After erasure: ";
  for (int num: v) cout<<num<<" ";
  cout<<"\n";

  return 0;
}