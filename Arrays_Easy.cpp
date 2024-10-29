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
/*int removeDuplicates(vector<int> &arr, int n){
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
}*/


// Move zeros to end
// Brute force 
/*vector<int> moveZeros(int n, vector<int> a) {
    vector<int> temp;
    for(int i = 0; i < n; i++) {
        if(a[i] != 0) {
            temp.push_back(a[i]);
        }
    }
    int nz = temp.size();
    for(int i = 0; i < nz; i++) {
        a[i] = temp[i];
    }
    for(int i = nz; i < n; i++) {
        a[i] = 0;
    }
    return a;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> a(n);
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> result = moveZeros(n, a);
    cout << "Array after moving zeros to the end: ";
    for(int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}
*/

// optimal
/*
    void moveZeroes(vector<int>& nums) {
        int j = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                j = i;
                break;
            } else {
                cout << nums[i] << " " << endl;
            }
        }
        if (j == -1) {
            return;
        }
        for (int i = j + 1; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
moveZeroes(nums);
    cout << "Array after moving zeroes: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
*/


// Union of two sorted arrays
// Brute force approach
/*
class Solution {
public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        unordered_set<int> st;
        for (int i = 0; i < a.size(); i++) {
            st.insert(a[i]);
        }
        for (int i = 0; i < b.size(); i++) {
            st.insert(b[i]);
        }
        vector<int> res(st.begin(), st.end());
        sort(res.begin(), res.end());
        return res;
    }
};

int main() {
    Solution solution;
    int n, m;

    // Input first array
    cout << "Enter the number of elements in the first array: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Input second array
    cout << "Enter the number of elements in the second array: ";
    cin >> m;
    vector<int> b(m);
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    // Find union and print result
    vector<int> unionResult = solution.findUnion(a, b);
    cout << "Union of the two arrays: ";
    for (int num : unionResult) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
*/


// optimal
/*vector<int> sortedarray(vector<int> a,vector<int> b){
    int n1=a.size();
    int n2=b.size();
    int i=0,j=0;
    vector<int> arr;
    while(i<n1 && j<n2){
        if(a[i]<b[i]){
            if(arr.size()==0 || arr.back()!=a[i]){
                arr.push_back(a[i]);
            }
            i++;
        }
        else{
            if(arr.size()==0 || arr.back()!=b[j]){
                arr.push_back(b[j]);
            }
            j++;
        }
    }
    while(j<n2){
        if(arr.size()==0 || arr.back()!=b[j]){
                arr.push_back(b[j]);
            }
            j++;
    }
    while(i<n1){
        if(arr.size()==0 || arr.back()!=a[i]){
                arr.push_back(a[i]);
            }
            i++;
    }
    return arr;
}
int main() {
    int n, m;
    cout << "Enter the number of elements in the first array: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter the number of elements in the second array: ";
    cin >> m;
    vector<int> b(m);
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    vector<int> result = sortedarray(a, b);
    cout << "Sorted array with unique elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
*/


// Intersection of two sorted arrays

// brute force approach 
/*vector<int> Intersection(vector<int> &a, int n,vector<int> &b,int m){
    vector<int> res;
    int vis[m]={0};
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j] && vis[j] == 0) {
                res.push_back(a[i]);
                vis[j] = 1;
                break;
            }
            if (b[j] > a[i]) break;
        }
    }
    
    return res;
}
int main(){
    int n, m;
    cout << "Enter the number of elements in the first array: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter the number of elements in the second array: ";
    cin >> m;
    vector<int> b(m);
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    vector<int> result = Intersection(a,n,b,m);
    cout << "Sorted array with unique elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}*/


// optimal approach
vector<int> Intersection(vector<int> &a,int n,vector<int> &b,int m){
    int i=0,j=0;
    vector<int> ans;
    while(i<n && j<m){
        if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<a[i]){
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;
}
int main(){
    int n, m;
    cout << "Enter the number of elements in the first array: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter the number of elements in the second array: ";
    cin >> m;
    vector<int> b(m);
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    vector<int> result = Intersection(a,n,b,m);
    cout << "Sorted array with unique elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}