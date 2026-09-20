#include <iostream>
#include <algorithm>
using namespace std;

void ReverseArray(int arr[], int n){
  int start=0, end= n-1;
  while(start<end){
    swap(arr[start], arr[end]);
    start++;
    end--;
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

  cout<<"Array:\n";
  for (int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<"\nReversed Array:\n";
  ReverseArray(arr, n);
  for (int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<"\n";

  return 0;
}