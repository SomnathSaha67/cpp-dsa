#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(const vector<int>& arr, int target){
  int start= 0, end= arr.size()-1, ans= -1;
  while (start<=end){
    int mid= start+(end-start)/2;
    if (arr[mid]==target){
      ans= mid;
      end= mid-1;
    } else if (target>arr[mid]) start= mid+1;
    else end= mid-1;
  }
  return ans;
}

int lastOccurrence(const vector<int>& arr, int target){
  int start= 0, end= arr.size()-1, ans= -1;
  while(start<=end){
    int mid= start+(end-start)/2;
    if (target>arr[mid]) start= mid+1;
    else if (target<arr[mid]) end= mid-1;
    else{
      ans= mid;
      start= mid+1;
    }
  }
  return ans;
}

int main() {
    vector<int> arr= {1,2,2,2,3,4,5};

    int target= 2;

    int first = firstOccurrence(arr, target);
    int last = lastOccurrence(arr, target);

    cout << "First occurrence index: " << first << endl;
    cout << "Last occurrence index: " << last << endl;

    return 0;
}