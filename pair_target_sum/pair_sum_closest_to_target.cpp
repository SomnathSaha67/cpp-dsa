#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

vector<int> PairSum(vector<int> v, int target){
  int minDiff= INT_MAX, start= 0, end= v.size()-1;
  vector<int> bestPair(2, -1);
  while (start<end){
    int ps= v[start]+v[end];
    int diff= abs(ps-target);

    if (diff<minDiff){
      minDiff= diff;
      bestPair= {v[start], v[end]};
    }

    if (ps<target) start++;
    else end--;

    int leftVal= v[start], rightVal= v[end];
    while(start<end && v[start]==leftVal) start++;
    while(start<end && v[end]==rightVal) end--;
  }

  return bestPair;
}

int main(){
  vector<int> v = {1, 7, 3, -2, 9, 10, 1, 9};
  int target = 20;
  vector<int> ans = PairSum(v, target);

  cout << "Best Pair: " << ans[0] << " " << ans[1] << " | Sum = " << ans[0] + ans[1] << "\n";

  return 0;
}