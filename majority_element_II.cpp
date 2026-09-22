#include <iostream>
#include <vector>
using namespace std;

vector<int> MajorityElements(vector<int> v){
  int cand1= 0, cand2= 0;
  int freq1= 0, freq2= 0;

  for (int num: v){
    if (cand1==num) freq1++;
    else if (cand2==num) freq2++;
    else if (freq1==0){
      cand1= num;
      freq1= 1;
    }
    else if (freq2==0){
      cand2= num;
      freq2= 1;
    }
    else{
      freq1--;
      freq2--;
    }
  }

  freq1= freq2= 0;
  for (int num: v){
    if (num==cand1) freq1++;
    else if (num==cand2) freq2++;
  }

  vector<int> ans;
  int n= v.size();
  if (freq1>n/3) ans.push_back(cand1);
  if (freq2>n/3) ans.push_back(cand2);

  return ans;
}

int main() {
    vector<int> v = {1,2,2,3,2,1,1,3};
    vector<int> ans = MajorityElements(v);

    cout << "Majority elements (> n/3 times): ";
    for (int x : ans) cout << x << " ";
    cout << "\n";

    return 0;
}