#include <iostream>
#include <vector>
using namespace std;

vector<int> Pair(vector<int> v, int target){
  int start= 0, end= v.size()-1;
  vector<int> result;
  while(start<end){
    int ps= v[start]+v[end];
    if (ps<target){
      start++;
    }
    else if (ps>target){
      end--;
    }
    else{
      result.push_back(v[start]);
      result.push_back(v[end]);
      break;
    }
  }
  return result;
}

int main(){
  vector<int> v= {1, 2, 3, 5, 7, 15};
  int target= 12;
  vector<int>result= Pair(v, target);

  cout<<"Pair with the sum of target= "<<target<<": ";
  for (int ele:result) cout<<ele<<" ";
  cout<<"\n";

  return 0;
}