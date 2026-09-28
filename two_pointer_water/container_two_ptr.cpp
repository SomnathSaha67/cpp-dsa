#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int> height){
  int start= 0, end= height.size()-1, max_area= 0;
  while(start<end){
    int w= end-start;
    int h= min(height[start], height[end]);
    int area= w*h;
    max_area= max(max_area, area);
    height[start]<height[end] ? start++ : end--; 
  }

  return max_area;
}

int main(){
  vector<int> height= {1,8,6,2,5,4,8,3,7};

  int maxarea= maxArea(height);

  cout<<"Max capacity: "<<maxarea<<"\n";

  return 0;
}