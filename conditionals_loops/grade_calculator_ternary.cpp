#include <iostream>
using namespace std;

int main(){

  float marks;

  cout<<"Enter marks obtained (0-100): ";
  cin>>marks;

  if (marks<0 || marks>100)
    cout<<"Error: Invalid marks";
  else{
    cout<<(marks>=90 ? 'A':
          marks>=80 ? 'B':
          marks>=70 ? 'C':
          marks>=60 ? 'D': 'F');
  }

  return 0;
}