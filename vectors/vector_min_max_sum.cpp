#include <iostream>
#include <vector> // for vector
#include <climits> // for INT_MIN, INT_MAX
using namespace std;

void MinMaxSum(vector<int> v, int &minVal, int &maxVal, int &sum, float &avg){
  for (int num: v){
    sum+=num;
    minVal= min(num, minVal);
    maxVal= max(num, maxVal);
  }
  avg= (float)sum/v.size();
}

int main(){
  int n, minVal= INT_MAX, maxVal= INT_MIN, sum= 0, val;
  float avg;
  vector<int> v;

  cout<<"Enter number of elements: ";
  cin>>n;

  for (int i=0; i<n; i++){
    cin>>val;
    v.push_back(val);
  }

  cout<<"Array: ";
  for (int i: v){
    cout<<i<<" ";
  }
  cout<<"\n";

  MinMaxSum(v, minVal, maxVal, sum, avg);

  cout<<"Min: "<<minVal<<"\nMax: "<<maxVal<<"\nSum: "<<sum<<"\nAverage: "<<avg<<"\n";

  return 0;
}