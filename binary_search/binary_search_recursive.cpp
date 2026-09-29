#include <iostream>
#include <vector>
using namespace std;

int binarySearchRecursive(const vector<int>& arr, int target, int start, int end){

  int mid= start+(end-start)/2;
  if (target>arr[mid]) return binarySearchRecursive(arr, target, mid+1, end);
  else if (target<arr[mid]) return binarySearchRecursive(arr, target, start, mid-1);
  else return mid;
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

    int start= 0, end= n-1;

    int result = binarySearchRecursive(arr, target, start, end);
    cout << result << endl;

    return 0;
}