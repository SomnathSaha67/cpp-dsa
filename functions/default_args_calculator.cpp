#include <iostream>
using namespace std;

float calculate(float a, float b, char op= '+'){
  switch(op){
    case '+': return a+b;
    case '-': return a-b;
    case '*': return a*b;
    case '/':
      if (b==0){
        cout<<"Error: Division by zero\n";
        return 0;
      }
      return a/b;
    default:
      cout<<"Error: Invalid operator '"<<op<<"'\n";
      return 0;
  }
}

int main(){
  cout<<"5 X 3 = "<<calculate(5, 3, '*')<<"\n";
  cout<<"10 + 7 = "<<calculate(10, 7)<<"\n";
  cout<<"8 ? 2 = "<<calculate(8, 2, '?')<<"\n";

  return 0;
}