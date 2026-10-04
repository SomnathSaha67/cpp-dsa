#include <bits/stdc++.h>

using namespace std;

int SingleElement(vector<int>& v){
  int n = v.size()-1, start = 0, end = n-1;

  if (n == 1) return v[0];

  while(start <= end){
    int mid = start + (end - start) / 2;

    if (mid == 0 && v[mid] != v[mid+1]) return v[mid];
    if (mid == n-1 && v[mid] != v[mid-1]) return v[mid];
    if (v[mid] != v[mid-1] && v[mid] != v[mid+1]) return v[mid];
    if (mid %2 ==0){
      if (v[mid] == v[mid-1]) end = mid-1;
      else start = mid+1;
    }
    else{
      if (v[mid] == v[mid-1]) start = mid+1;
      else end= mid-1;
    }
  }

  return -1;
}

int main(){

  vector<int> arr = {3,3,7,7,10,11,11};
  cout<<SingleElement(arr)<<"\n";

  return 0;
}