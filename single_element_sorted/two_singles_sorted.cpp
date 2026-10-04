#include <bits/stdc++.h>

using namespace std;

int findSingleIndex(vector<int>& arr, int start, int end, int offset){
  while (start < end){
    int mid = start + (end - start) / 2;
    int evenMid = mid - ((mid - offset) % 2 != 0 ? 1 : 0);

    if (evenMid + 1 < arr.size() && arr[evenMid] == arr[evenMid + 1]) start = evenMid + 2;
    else end = evenMid;
  }

  return start;
}

int main() {
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 6, 7, 7, 8, 8};

    int idx1 = findSingleIndex(arr, 0, arr.size() - 1, 0);
    int idx2 = findSingleIndex(arr, idx1 + 1, arr.size() - 1, 1);

    cout << "First single element: " << arr[idx1] << "\n";
    cout << "Second single element: " << arr[idx2] << "\n";
    
    return 0;
}