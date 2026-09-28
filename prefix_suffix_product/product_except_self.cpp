#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
  int n= nums.size(), suffix=1;
  vector<int> ans(n, 1);

  for (int i=1; i<n; i++){
    ans[i] = ans[i-1]*nums[i-1];
  }
        
  for (int i= n-2; i>=0; i--){
    suffix*=nums[i+1];
    ans[i]*=suffix;
  }
  
  for (int ele: ans){
    cout<<ele<<" ";
  }
  cout<<"\n";
}

int main(){
  vector<int> nums= {-1,1,0,-3,3};
  productExceptSelf(nums);

  return 0;
}