#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  vector<int> prices= {7, 1, 5, 3, 6, 4};
  int maxProfit= 0;
  for (int i=1; i<prices.size(); i++){
    if (prices[i]>prices[i-1]) maxProfit+=prices[i]-prices[i-1];
  }
  cout<<"Max profit: "<<maxProfit<<"\n";

  return 0;
}