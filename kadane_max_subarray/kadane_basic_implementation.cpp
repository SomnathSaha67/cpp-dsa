#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

void MaxSubarraySum(vector<int> v, int currentSum, int &maxSum){
  for (int i=0; i<v.size(); i++){
    currentSum+=v[i];
    maxSum= max(currentSum, maxSum);
    if (currentSum<0){
      currentSum=0;
    }
  }
}

void MinSubarraySum(vector<int> v, int currentSum, int &minSum){
  for (int i=0; i<v.size(); i++){
    currentSum+=v[i];
    minSum= min(currentSum, minSum);
    if (currentSum>0){
      currentSum= 0;
    }
  }
}

int main(){
  vector<int> v= {-3, 6, 7, -2, 8, -4};

  int currentSum= 0, maxSum= INT_MIN, minSum= INT_MAX;

  MaxSubarraySum(v, currentSum, maxSum);
  cout<<"Max subarray sum: "<<maxSum<<"\n";

  MinSubarraySum(v, currentSum, minSum);
  cout<<"Min subarray sum: "<<minSum<<"\n";

  return 0;
}