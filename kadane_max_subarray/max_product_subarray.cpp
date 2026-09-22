#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int maxProduct(vector<int> &nums){
  int currMax= nums[0], currMin= nums[0], result= nums[0];
  int start= 0, bestStart= 0, bestEnd= 0;

  for (int i=0; i<nums.size(); i++){
    int temp= currMax;

    if (nums[i]>max({nums[i], currMax*nums[i], currMin*nums[i]})){
      start= i;
    }

    currMax= max({nums[i], currMax*nums[i], currMin*nums[i]});
    currMin= min({nums[i], temp*nums[i], currMin*nums[i]});
    
    if (currMax>result){
      result= currMax;
      bestStart= start;
      bestEnd= i;
    }
  }

  cout<<"max product subarray: ";
  for (int i= bestStart; i<=bestEnd; i++){
    cout<<nums[i]<<" ";
  }
  cout<<"\n";

  return result;
}

int main(){
  vector<int> v= {2,3,-2,4};
  int result= maxProduct(v);
  cout<<"Maximum product: "<<result<<"\n";
  return 0;
}