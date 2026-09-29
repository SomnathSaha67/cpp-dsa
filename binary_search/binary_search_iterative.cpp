#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& arr, int target){
  int start= 0, end= arr.size()-1;
  
  while(start<=end){
    int mid= start+(end-start)/2;
    if (target>arr[mid]) start= mid+1;
    else if (target<arr[mid]) end= mid-1;
    else return mid;
  }
  return -1;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target element: ";
    cin >> target;

    int result = binarySearch(arr, target);
    cout << result << endl;

    return 0;
}