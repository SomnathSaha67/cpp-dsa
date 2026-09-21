#include <iostream>
#include <vector> // for vector
#include <climits> // for INT_MAX, INT_MIN
#include <algorithm> // for max, min
using namespace std;

int KadaneMax(vector<int> v){
  int currSum= 0, maxSum= INT_MIN;
  for (int num: v){
    currSum= max(num, currSum+num);
    maxSum= max(currSum, maxSum);
  }
  return maxSum;
}

int KadaneMin(vector<int> v){
  int currSum= 0, minSum= INT_MAX;
  for (int num: v){
    currSum= min(num, currSum+num);
    minSum= min(currSum, minSum);
  }
  return minSum;
}

int TotalSum(vector<int> v){
  int totalSum= 0;
  for (int num: v) totalSum+=num;
  return totalSum;
}

int main(){
  vector <int> v= {1, 2, 3, -5, 3, 6, -7, -4, 6};

  int maxSum= KadaneMax(v);
  int minSum= KadaneMin(v);
  int totalSum= TotalSum(v);

  int maxCircularSum= max(maxSum, (totalSum- minSum));

  cout<<"Maximum Circular Subarray Sum: "<<maxCircularSum<<"\n";

  return 0;
}