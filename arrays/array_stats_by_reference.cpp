#include <iostream>
#include <climits> // for INT_MIN, INT_MAX
#include <algorithm> // for min, max, swap
using namespace std;

void arrayStats(int arr[], int n, int &sum, float &avg, int &minVal, int &maxVal){
  sum= 0;
  minVal= INT_MAX;
  maxVal= INT_MIN;

  for (int i=0; i<n; i++){
    sum+=arr[i];
    maxVal= max(arr[i], maxVal);
    minVal= min(arr[i], minVal);
  }

  avg= (float)sum/n;
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

  int sum, minVal, maxVal;
  float avg;

  arrayStats(arr, n, sum, avg, minVal, maxVal);

  cout<<"Sum: "<<sum<<"\n";
  cout<<"Average: "<<avg<<"\n";
  cout<<"Minimum: "<<minVal<<"\n";
  cout<<"Maximum: "<<maxVal<<"\n";

  return 0;
}