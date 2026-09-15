#include <iostream>
using namespace std;

int main(){

  int start, end;

  cout<<"Enter start and end: ";
  cin>>start>>end;

  int maxSteps= 0;
  int numberWithMaxSteps= start;

  for (int i= start; i<=end; i++){
    int steps=0;
    long long copy= i;

    while (copy!=1){
      if (copy%2==0) copy/=2;
      else copy= 3*copy+1;
      steps++;
    }

    if (steps>maxSteps){
      maxSteps= steps;
      numberWithMaxSteps= i;
    }

    cout<<"Number "<<i<<" took "<<steps<<" steps\n";
  }
  
  cout<<"Number with most steps: "<<numberWithMaxSteps<<" ("<<maxSteps<<" steps)\n";

  return 0;
}