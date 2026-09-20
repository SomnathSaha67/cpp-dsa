#include <iostream>
#include <algorithm> // for swap
using namespace std;

void reverseArray(int arr[], int start, int end){
  while(start<end){
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

void leftRotateArray(int arr[], int n, int k){
  k= k%n; // handle k>n

  reverseArray(arr, 0, k-1);

  reverseArray(arr, k, n-1);

  reverseArray(arr, 0, n-1);
}

void rightRotateArray(int arr[], int n, int k){
  k= k%n;

  reverseArray(arr, 0, n-1);

  reverseArray(arr, 0, k-1);

  reverseArray(arr, k, n-1);
}

int main(){
  int n;
  cout<<"Enter number of elements in the array: ";
  cin>>n;

  int arr[n];
  cout<<"Enter elements: ";
  for (int i=0; i<n; i++){
    cin>>arr[i];
  }

  int k;
  cout<<"Enter rotation count k: ";
  cin>>k;

  cout<<"Array before rotation: ";
  for (int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<"\n";

  /*
  leftRotateArray(arr, n, k);

  cout<<"Array after left rotation: ";
  for (int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<"\n";
  */
  rightRotateArray(arr, n, k);

  cout<<"Array after right rotation: ";
  for (int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<"\n";

  return 0;
}