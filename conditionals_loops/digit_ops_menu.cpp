#include <iostream>
using namespace std;

int main(){
  char choice;
  do{
    cout<<"Enter operation (a) Sum of digits (b) Reverse number (c) Count digits (d) Exit: ";
    cin>>choice;

    if (choice!='a' && choice!='b' && choice!= 'c' && choice!='d'){
      cout<<"Invalid choice\n";
      continue;
    }

    if (choice=='d') break;

    int num;
    
    cout<<"Enter number: ";
    cin>>num;

    if (choice=='a'){
      int sum=0, copy=num;

      while (copy>0){
        sum+= copy%10;
        copy/=10;
      }
    cout<<"Sum of digits in '"<<num<<"': "<<sum<<"\n";
    }

    else if (choice=='b'){
      int copy= num, rev=0;

      while(copy>0){
        int temp= copy%10;
        rev= rev*10+temp;
        copy/=10;
      }

    cout<<"Reverse of '"<<num<<"': "<<rev<<"\n";
    }

    else if (choice=='c'){
      int digCount= 0, copy= num;
      
      while (copy>0){
        digCount+=1;
        copy/=10;
      }

    cout<<"Number of digits in '"<<num<<"': "<<digCount<<"\n";
    }
  }while(choice!='d');

  return 0;
}