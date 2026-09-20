#include <iostream>
#include <climits>
using namespace std;

int main(){
  short s= SHRT_MAX;
  int i= INT_MAX;
  long l= LONG_MAX;
  long long ll= LLONG_MAX;

  cout<<"Type sizes (bytes):\n";
  cout<<"short: "<<sizeof(short)<<"\n";
  cout<<"int: "<<sizeof(int)<<"\n";
  cout<<"long: "<<sizeof(long)<<"\n";
  cout<<"long long: "<<sizeof(long long)<<"\n\n";

  cout<<"Initial max values:\n";
  cout<<"short: "<<s<<"\n";
  cout<<"int: "<<i<<"\n";
  cout<<"long: "<<l<<"\n";
  cout<<"long long: "<<ll<<"\n\n";

  cout<<"After adding 1 (overflow behavior):\n";
  cout<<"short: "<<(short)(s+1)<<"\n";
  cout<<"int: "<<(int)(i+1)<<"\n";
  cout<<"long: "<<(long)(l+1)<<"\n";
  cout<<"long long: "<<(long long)(ll+1)<<"\n";
  
  return 0;
}