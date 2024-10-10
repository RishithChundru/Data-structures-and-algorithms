#include<bits/stdc++.h>
using namespace std;
            // Pattern 1
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

/*
void nStarTriangle(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
*/