#include <iostream>
#include <vector>
using namespace std;

int PivotIndex(vector<int>& nums){
  int n= nums.size();
  int total= 0;
  for (int x: nums) total+=x;

  int leftSum= 0;
  for (int i=0; i<n; i++){
    int rightSum= total-leftSum-nums[i];
    if (leftSum==rightSum) return i;
    leftSum+=nums[i];
  }
  return -1;
}

int main(){
  vector<int> nums= {2,1,-1};
  cout<<PivotIndex(nums)<<"\n";

  return 0;
}