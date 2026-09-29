#include <iostream>
#include <vector>
using namespace std;

int lowerBound(const vector<int>& arr, int target){
  int start= 0, end= arr.size();
  while (start<end){
    int mid= start+(end-start)/2;
    if (target>arr[mid]) start= mid+1;
    else end= mid;
  }
  return start;
}

int upperBound(const vector<int>& arr, int target){
  int start= 0, end= arr.size();
  while (start<end){
    int mid= start+(end-start)/2;
    if (target>=arr[mid]) start= mid+1;
    else end= mid;
  }
  return start;
}

int main(){
  vector<int> arr= {1,2,2,2,3,4,5};
  int target= 2;

  int lb= lowerBound(arr, target);
  int ub= upperBound(arr, target);

  cout<<"Lower bound index: "<<lb<<"\n";
  cout<<"Upper bound index: "<<ub<<"\n";

  return 0;
}