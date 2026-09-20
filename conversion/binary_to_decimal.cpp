#include <iostream>
using namespace std;

int main(){
  
  int binNum, pow= 1, decNum=0;
  cout<<"Enter binary number: ";
  cin>>binNum;

  int orgNum= binNum;
  while(binNum>0){
    int lastDig= binNum%10;
    decNum+= (lastDig*pow);
    pow*=2;
    binNum/=10;
  }

  cout<<"Binary number: "<<orgNum<<"\nDecimal: "<<decNum<<"\n";

  return 0;
}