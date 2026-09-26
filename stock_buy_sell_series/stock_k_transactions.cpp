#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

int main(){
  int n, k;
  cin>>n>>k; // number of days and max transactions
  vector<int> prices(n);
  for (int i=0; i<n; i++) cin>>prices[i];

  if (n==0){
    cout<<0<<"\n";
    return 0;
  }

  if (k>=n/2){                                 // same as unlimited transactions
    int mp= 0;
    for (int i=1; i<n; i++){
      if (prices[i]>prices[i-1]) mp+=prices[i]-prices[i-1];
    }
    cout<<mp<<"\n";
    return 0;
  }     

  vector<int> buy(k+1, INT_MIN), sell(k+1, 0);

  for (int p: prices){
    for (int j= 1; j<=k; j++){
      buy[j]= max(buy[j], sell[j-1]-p);
      sell[j]= max(sell[j], buy[j]+p);
    }
  }

  cout<<sell[k]<<"\n";

  return 0;
}