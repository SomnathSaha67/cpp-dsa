#include <iostream>
#include <vector>
using namespace std;

int searchRotated(const vector<int>& arr, int target){
  int start= 0, end= arr.size()-1;

  while (start<=end){
    int mid= start+(end-start)/2;

    if (target==arr[mid]) return mid;

    if (arr[start]<=arr[mid]){
      if (target>=arr[start] && target<arr[mid]) end= mid-1;
      else start= mid+1;
    }
    else{
      if (target>arr[mid] && target<=arr[end]) start= mid+1;
      else end= mid-1;
    }
  }
  return -1;
}


int main() {
    vector<int> arr = {4,5,6,7,0,1,2};
    int target = 0;

    int result = searchRotated(arr, target);
    cout << "Index of target: " << result << endl;

    return 0;
}