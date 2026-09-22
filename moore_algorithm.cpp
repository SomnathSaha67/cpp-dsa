#include <iostream>
#include <vector>
using namespace std;

int MajorElement(vector<int> v){
  int freq= 0, ans= 0;
  for (int num: v){
    if (freq==0){
      ans= num;
    }
    if (ans==num){
      freq++;
    }
    else{
      freq--;
    }
  }
  return ans;
}

int main(){
  vector<int> v= {1, 2, 2, 1, 1};
  int ans= MajorElement(v);

  cout<<"Majority element in the array: "<<ans<<"\n";

  return 0;
}