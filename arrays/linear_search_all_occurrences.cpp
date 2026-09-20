#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target){
  for (int i=0; i<n; i++){
    if (arr[i]==target){
      return i;
    }
  }
  return -1;
}

int indicesLinearSearch(int arr[], int indices[], int n, int target){
  int count= 0;
  for (int i=0; i<n; i++){
    if (arr[i]==target){
      indices[count]= i;
      count++;
    }
  }
  return count;
}

int main(){
  int n;
  cout<<"Enter number of elements in the array: ";
  cin>>n;

  int arr[n];
  for (int i=0; i<n; i++){
    cin>>arr[i];
  }

  int target;
  cout<<"Enter target element: ";
  cin>>target;

  int firstIndex= linearSearch(arr, n, target);
  if (firstIndex != -1)
     cout << "First occurrence of " << target << " is at index " << firstIndex << "\n";
  else
    cout << target << " not found in the array\n";
  
  int indices[n];
  int count = indicesLinearSearch(arr, indices, n, target);

  cout << "All occurrences of " << target << ": ";
  if (count == 0) {
    cout << "None\n";
  } 
  else {
    for (int i = 0; i < count; i++) {
      cout << indices[i] << " ";
    }
    cout << "\n";
  }

  return 0;
}