#include <bits/stdc++.h> 
using namespace std;
int findGcd(int x, int y)
{
    while(x>0 && y>0){
        if(x>y) x=x%y;
        else y=y%x;
    }
    if(x==0) return y;
    else return x;
}
int main(){
    int n,x,y;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter x and y: ";
    for(int i=0;i<n;i++){
        cin>>x>>y;
    }
    for(int i=0;i<n;i++){
        cout<<findGcd(x,y);
    }
}