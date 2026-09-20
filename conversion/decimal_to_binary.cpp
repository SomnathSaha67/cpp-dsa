#include <iostream>
using namespace std;

int main(){

  int decNum, pow= 1, binNum=0;
  cout<<"Enter a decimal number: ";
  cin>>decNum;
  int orgNum= decNum;

  while(decNum>0){
    int rem= decNum%2;
    decNum= decNum/2;
    binNum+= (rem*pow);
    pow= pow*10;
  }

  cout<<"Decimal number: "<<orgNum<<"\nBinary: "<<binNum<<"\n";

  return 0;
}