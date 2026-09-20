#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

void findMinMax(int arr[], int n, int &minVal, int &maxVal){
  for (int i=0; i<n; i++){
    maxVal= max(arr[i], maxVal);
    minVal= min(arr[i], minVal);
  }
}

int main(){
  int n;
  cout<<"Enter number of elements in the array: ";
  cin>>n;

  int arr[n];
  for (int i=0; i<n; i++){
    cin>>arr[i];
  }

  int maxVal= INT_MIN, minVal= INT_MAX;
  findMinMax(arr, n, minVal, maxVal);

  cout<<"Maximum: "<<maxVal<<"\nMinimum: "<<minVal<<"\n";

  return 0;
}