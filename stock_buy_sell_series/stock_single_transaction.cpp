#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  int n;
  cin>>n; // number of days
  vector<int> prices(n);
  for (int i= 0; i<n; i++) cin>>prices[i];

  int bestbuy= prices[0], maxProfit= 0;

  for (int i= 1; i<n; i++){
    if (prices[i]>bestbuy) maxProfit= max(maxProfit, prices[i]-bestbuy);
    bestbuy= min(bestbuy, prices[i]);
  }

  cout<<maxProfit<<"\n";

  return 0;
}