#include <iostream>
#include <vector>
using namespace std;

void pairSum(vector<int> v, int target){
  int start= 0, end= v.size()-1;

  while(start<end){
    int ps= v[start]+v[end];
    if (ps<target)
      start++;
    else if (ps>target)
      end--;
    else{
      cout<<"Pairs: "<<v[start]<<" "<<v[end]<<"\n";
      return;
    }
  }
  cout<<"Pairs not found\n";
}

int main(){
  vector<int> v= {1, 7, 3, -2, 9, 10};
  int target= 20;
  pairSum(v, target);

  return 0;
}