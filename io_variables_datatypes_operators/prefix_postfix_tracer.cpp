#include <iostream>
using namespace std;

int main(){

  int n;

  cout<<"Enter an integer value of n: ";
  cin>>n;
  
  cout<<"n= "<<n<<"\n";
  cout << "++n + n++ = " << (++n + n++) << ", n = " << n << "\n";
  cout << "n++ + --n = " << (n++ + --n) << ", n = " << n << "\n";
  cout << "--n + n-- = " << (--n + n--) << ", n = " << n << "\n";
  cout << "n-- + ++n = " << (n-- + ++n) << ", n = " << n << "\n";
  
  return 0;
}