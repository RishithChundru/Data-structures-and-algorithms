#include<bits/stdc++.h>
using namespace std;

// Largest element in an array
/*int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max<<endl;
}
*/

// Second Largest and second smallest element in array
// better approach
/*int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=0;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    int slargest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>slargest && arr[i]!=largest){
            slargest=arr[i];
        }
    }
    cout<<slargest<<endl;
}*/

// Optimal approach
/*int secondLargest(vector<int> &a,int n){
    int largest=a[0];
    int slargest=-1;
    for(int i=0;i<n;i++){
        if(a[i]>largest){
            slargest=largest;
            largest=a[i];
        }
        else if(a[i]<largest && a[i]>slargest){
            slargest=a[i];
        }
    }
    return slargest;
}
int secondSmallest(vector<int> &a,int n){
    int smallest=a[0];
    int ssmallest=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<smallest){
            ssmallest=smallest;
            smallest=a[i];
        }
        else if(a[i]!=smallest && a[i]<ssmallest){
            ssmallest=a[i];
        }
    }
    return ssmallest;
}
vector<int> getSecondOrderElements(int n, vector<int> a) {
    int slargest=secondLargest(a,n);
    int ssmallest=secondSmallest(a,n);
    return {slargest, ssmallest};
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> result=getSecondOrderElements(n,arr);
    cout << "Second Largest: " << result[0] << endl;
    cout << "Second Smallest: " << result[1] << endl;
}
*/

// is Array Sorted
/*int isSorted(int n,vector<int> &arr){
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){

        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int res=isSorted(n,a);
    if(res){
        cout<<"1";
    }
    else{
        cout<<"0";
    }
}
*/

// Remove duplicates from the sorted array

// brute force
/*int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    for(auto it=st.begin();it!=st.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}*/

// leetcode
/*int removeDuplicates(vector<int>& nums) {
        int index=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[index]=nums[i];
                index++;
            }
        }
        return index;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=removeDuplicates(arr);
    cout<<res;
}
*/


// Optimal Solution
int removeDuplicates(vector<int> &arr, int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=removeDuplicates(arr,n);
    cout<<res;
}