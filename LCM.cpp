#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    while(a>0 && b>0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) return b;
    else return a;
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
int main(){
    int a,b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    cout<<lcm(a,b);
}