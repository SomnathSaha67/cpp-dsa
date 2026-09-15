#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  float temp, tempC, tempF, tempK;
  char scale;

  cout<<"Enter temperature and scale: ";
  cin>>temp>>scale;

  if (scale=='C'){
    tempC= temp;
    tempF= ((9/5.0)*tempC)+32;
    tempK= tempC+273.15;

    cout<<"Temperature in Celsius: "<<fixed<<setprecision(2)<<tempC<<"\n";
    cout<<"Temperature in Fahrenheit: "<<fixed<<setprecision(2)<<tempF<<"\n";
    cout<<"Temperature in Kelvin: "<<fixed<<setprecision(2)<<tempK<<"\n";
  }
  else if (scale=='F'){
    tempF= temp;
    tempC= (5/9.0)*(tempF-32);
    tempK= (5/9.0)*(tempF-32)+273.15;

    cout<<"Temperature in Fahrenheit: "<<fixed<<setprecision(2)<<tempF<<"\n";
    cout<<"Temperature in Celsius: "<<fixed<<setprecision(2)<<tempC<<"\n";
    cout<<"Temperature in Kelvin: "<<fixed<<setprecision(2)<<tempK<<"\n";
  }
  else if (scale=='K'){
    tempK= temp;
    tempC= tempK- 273.15;
    tempF= (9/5.0)*(tempK-273.15)+32;

    cout<<"Temperature in Kelvin: "<<fixed<<setprecision(2)<<tempK<<"\n";
    cout<<"Temperature in Fahrenheit: "<<fixed<<setprecision(2)<<tempF<<"\n";
    cout<<"Temperature in Celsius: "<<fixed<<setprecision(2)<<tempC<<"\n";
  }
  else
    cout<<"Invalid scale";

  return 0;
}