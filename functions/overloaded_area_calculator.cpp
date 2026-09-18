#include <iostream>
#include <cmath>
using namespace std;

int area(int side){
  return side*side;
}

int area(int l, int b){
  return l*b;
}

float area(float radius){
  return M_PI*radius*radius;
}

int main(){
  int choice;
  cout<<"Choose shape:\n1. Square\n2. Rectangle\n3. Circle\n";
  cin>>choice;

  if (choice==1){
    int side;
    cout<<"Enter side length: ";
    cin>>side;
    cout<<"Area of square= "<<area(side)<<"\n";
  }
  else if (choice==2){
    int l, b;
    cout<<"Enter length and breadth: ";
    cin>>l>>b;
    cout<<"Area of rectangle= "<<area(l, b)<<"\n";
  }
  else if (choice==3){
    float r;
    cout<<"Enter radius: ";
    cin>>r;
    cout<<"Area of circle= "<<area(r)<<"\n";
  }
  else{
    cout<<"Invalid choice!\n";
  }

  return 0;
}