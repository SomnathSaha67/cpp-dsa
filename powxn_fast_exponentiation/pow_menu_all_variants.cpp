#include <iostream>
#include <cmath>
using namespace std;

double powerNaive(double x, int n){
    double ans=1.0;
    for(int i=0;i<n;i++) ans*=x;
    return ans;
}

double powerRecursive(double x,int n){
    if(n==0) return 1.0;
    if(n<0) return 1.0/powerRecursive(x,-n);
    double half=powerRecursive(x,n/2);
    if(n%2==0) return half*half;
    else return half*half*x;
}

double powerIterative(double x,int n){
    long long exp=n;
    if(exp<0){x=1/x;exp=-exp;}
    double ans=1.0;
    while(exp>0){
        if(exp&1) ans*=x;
        x*=x;
        exp>>=1;
    }
    return ans;
}

long long modPower(long long x,long long n,long long m){
    long long ans=1%m;
    x%=m;
    while(n>0){
        if(n&1) ans=(ans*x)%m;
        x=(x*x)%m;
        n>>=1;
    }
    return ans;
}

int main(){
    double x; int n; long long m;
    cout<<"Enter base, exponent, modulus: ";
    cin>>x>>n>>m;

    double naive=powerNaive(x,abs(n));
    double rec=powerRecursive(x,n);
    double iter=powerIterative(x,n);
    long long mod=modPower((long long)x,(long long)n,m);

    cout<<"Naive: "<<naive<<"\n";
    cout<<"Recursive: "<<rec<<"\n";
    cout<<"Iterative: "<<iter<<"\n";
    cout<<"Modular: "<<mod<<"\n";

    return 0;
}
