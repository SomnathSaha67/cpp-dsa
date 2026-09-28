#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int trappingWater(vector<int> container){
  int left= 0, right= container.size()-1, leftMax= 0, rightMax= 0, water= 0;
  while(left<right){
    if (container[left]<container[right]){
      if (container[left]>=leftMax){
        leftMax= container[left];
      }
      else{
        water += leftMax-container[left];
      }
      left++;
    }
    else{
      if (container[right]>=rightMax){
        rightMax= container[right];
      }
      else{
        water += rightMax-container[right];
      }
      right--;
    }
  }
  cout<<"max trapped water: "<<water<<"\n";
}

int main(){
  vector<int> height= {0,1,0,2,1,0,1,3,2,1,2,1};
  trappingWater(height);

  return 0;
}