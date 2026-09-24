#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> PairsSum(vector<int> v, int target){
  sort(v.begin(), v.end());
  vector<vector<int>> result;
  int start= 0, end= v.size()-1;
  while(start<end){
    int ps= v[start]+v[end];
    if (ps<target)
      start++;
    else if (ps>target)
      end--;
    else{
      result.push_back({v[start], v[end]});
      int leftVal= v[start], rightVal= v[end];
      while(start<end && v[start]==leftVal) start++;
      while(start<end && v[end]==rightVal) end--;
    }
  }
  if (result.empty()) result.push_back({-1, -1});
  return result;
}

int main(){
  vector<int> v = {1, 7, 3, -2, 9, 10, 1, 9};
  int target = 10;
  vector<vector<int>> ans = PairsSum(v, target);

  for(auto &p : ans){
    cout << "Pair: " << p[0] << " " << p[1] << "\n";
  }
  
  return 0;
}