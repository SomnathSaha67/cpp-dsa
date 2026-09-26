#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  vector<int> prices= {3, 3, 5, 0, 0, 3, 1, 4};
  int buy1= INT_MIN, sell1= 0;
  int buy2= INT_MIN, sell2= 0;
  for (int p: prices){
    buy1= max(buy1, -p);
    sell1= max(sell1, p+buy1);
    buy2= max(buy2, sell1-p);
    sell2= max(sell2, p+buy2);
  }

  cout<<"Max Profit: "<<sell2<<"\n";

  return 0;
}