#include<bits/stdc++.h>
using namespace std;
/*
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // precompute
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }

    int q;
    cin>>q;
   while(q--){
    int number;
    cin>>number;
    // fetch
    cout<<hash[number]<<endl;
   }
    return 0;
}
*/

// Character
/*int main(){
    string s;
    getline(cin,s);

    // pre compute
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        // fetch
        cout<<hash[c-'a']<<endl;
    }
    return 0;
}*/

/*int main(){
    string s;
    getline(cin,s);

    // pre compute
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        // fetch
        cout<<hash[c]<<endl;
    }
    return 0;
}
*/

// STL -> Map

/*int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //pre-compute
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    // iterate in the map
    // for(auto it:mpp){
    //     cout<<it.first<<" -> "<<it.second<<endl;
    // }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<mpp[number]<<endl;
    }
}
*/


// time complexity in map in all cases is O(log n)
// time complexity in unordered map in average case and best case is O(1) and worst case is O(N)


// Unordered map

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //pre-compute
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    // iterate in the map
    for(auto it:mpp){
        cout<<it.first<<" -> "<<it.second<<endl;
    }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<mpp[number]<<endl;
    }
}


/* Hashing-> 1. Division method
            2. Folding method
            3. Mid square method

Division method:
            */