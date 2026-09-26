#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

int maxProfitOne(vector<int>& prices){
  int bestbuy= prices[0], mp= 0;
  for (int i=1; i<prices.size(); i++){
    mp= max(mp, prices[i]-bestbuy);
    bestbuy= min(bestbuy, prices[i]);
  }
  return mp;
}

int maxProfitUnlimited(vector<int>& prices){
  int mp= 0;
  for (int i=1; i<prices.size(); i++){
    if (prices[i]>prices[i-1]) mp+=prices[i]-prices[i-1];
  }
  return mp;
}

int maxProfitTwo(vector<int>& prices){
  int buy1= INT_MIN, sell1= 0;
  int buy2= INT_MIN, sell2= 0;
  for (int p: prices){
    buy1= max(buy1, -p);
    sell1= max(sell1, buy1+p);
    buy2= max(buy2, sell1-p);
    sell2= max(sell2, buy2+p);
  }
  return sell2;
}

int maxProfitK(vector<int>& prices, int k){
  if (prices.empty()) return 0;
  int n= prices.size();
  if (k>=n/2) return maxProfitUnlimited(prices);

  vector<int> buy(k+1, INT_MIN), sell(k+1, 0);
  for (int p: prices){
    for (int j= 1; j<=k; j++){
      buy[j]= max(buy[j], sell[j-1]-p);
      sell[j]= max(sell[j], buy[j]+p);
    }
  }
  return sell[k];
}

int main() {
    int n, k;
    cin >> n >> k; // number of days, value of k
    vector<int> prices(n);
    for (int i = 0; i < n; i++) cin >> prices[i];

    int ans1 = maxProfitOne(prices);
    int ans2 = maxProfitUnlimited(prices);
    int ans3 = maxProfitTwo(prices);
    int ans4 = maxProfitK(prices, k);

    cout << "Results side by side:\n";
    cout << "Q1 (One transaction): " << ans1 << endl;
    cout << "Q2 (Unlimited transactions): " << ans2 << endl;
    cout << "Q3 (Two transactions): " << ans3 << endl;
    cout << "Q4 (k transactions, k=" << k << "): " << ans4 << endl;

    return 0;
}