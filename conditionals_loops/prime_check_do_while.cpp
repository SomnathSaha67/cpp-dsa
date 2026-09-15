#include <iostream>
using namespace std;

int main(){

  int num;
  bool isPrime= true;

  do{
    cout<<"Enter a postive integer: ";
    cin>>num;
    
    if (num<0)
      continue;

    if (num==0 || num==1){
      isPrime= false;
      break;
    }

    for (int i= 2; i*i<=num; i++){
      if (num%i==0){
        isPrime= false;
        break;
      }
    }

    if (isPrime){
      break;
    }
  }while(num<0);

  cout<<((isPrime) ? "Prime\n":"Not Prime\n");

  return 0;
}