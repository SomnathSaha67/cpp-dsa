#include <bits/stdc++.h>

using namespace std;

bool isPairIntact(const vector<int>& arr, int mid){
  if (mid % 2 != 0) mid--;

  return arr[mid] == arr[mid + 1];
}

int singleElement(const vector<int>& arr){
  int start = 0, end = arr.size() -1;

  while (start < end){
    int mid = start + (end - start) / 2;

    if (isPairIntact(arr, mid)){
      start = ((mid % 2 == 0) ? mid : mid -1) + 2;
    } else{
      end = (mid % 2 == 0) ? mid : mid - 1;
    }
  }

  return arr[end];
}

int main(){

  vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 8, 8};

  int ele = singleElement(arr);
  cout<<"Single element: "<<ele<<"\n";

  return 0;
}