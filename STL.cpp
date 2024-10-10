#include<bits/stdc++.h>
using namespace std;

// Pairs
/*int main(){
    pair<int, int> p={1,3};
    cout<<p.first<<" "<<p.second;
    cout<<endl;
    pair<int, pair<int, int>> a={1, {3,4}};
    cout<<a.first<<" "<<a.second.second<<" "<<a.second.first;
    cout<<endl;
    pair<int, int> arr[]={{1,2},{2,5},{5,1}};
    cout<<arr[1].second<<endl;
    cout<<arr[0].first;
}
*/

// Vectors
// it is dynamic in nature and we can addd delete elements anytime.
int main(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    cout<<v[0];
    cout<<v.back()<<" ";

    vector<pair<int,int>> vec;
    vec.push_back({3,4});
    vec.emplace_back(5,6);

    vector<int> ve(5,100);
    // size is 5 and 100 are present in 5 times in the vector

    vector<int> vect(5);

    vector<int> v1(5,20);
    vector<int> v2(v1);     // copy vecotr



    // Iterator
    vector<int>::iterator it=v.begin();
    it++;
    cout<<*it<<endl;

    it+=2;
    cout<<*it<<endl;


    // types of iterator
    vector<int>::iterator it1=v.end();
    // vector<int>::iterator ite=vec.rend();
    // vector<int>::iterator iter=vec.rbegin();

    cout<<v[0]<<" "<<v.at(0);
    cout<<v.back()<<" ";

    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*it<<" "<<endl;
    }

    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" "<<endl;
    }

    for(auto it:v){
        cout<<it<<" ";
    }

    // Erase
    v.erase(v.begin()+1);

    // Erasing multiple elements
    v.erase(v.begin()+2,v.begin()+4);


    // Insert function

    vector<int> v(2,100);
    v.insert(v.begin(),300);
    v.insert(v.begin()+1,2,10);

    vector<int> copy(2,50);
    v.insert(v.begin(),copy.begin(),copy.end());

    cout<<v.size();

    v.pop_back();

    v1.swap(v2);

    v.clear();

    cout<<v.empty();
}


// List
void explainList(){
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);

    ls.push_front(5);

    ls.emplace_front(); 


    // Rest function are same as vector
}


// Deque
void explainDeque(){
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(3);

    dq.pop_back();
    dq.pop_front();

    dq.back();

    dq.front();
}


// Stack
void explainStack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);

    cout<<st.top();
    st.pop();
    cout<<st.size();
    cout<<st.empty();

    stack<int>st1, st2;
    st1.swap(st2);
}


// Queue
void explainQueue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);

    q.back()+=5;

    cout<<q.back();
    cout<<q.front();
    q.pop();
}


// Priority Queue
void explainPQ(){
    // Maximum Heap
    priority_queue<int>pq;
    pq.push(1);
    pq.push(2);
    pq.push(8);
    pq.emplace(5);

    cout<<pq.top();
    pq.pop();
    cout<<pq.top();

    // Minimum Heap
    priority_queue<int, vector<int>,greater<int>> pq;
    pq.push(5);
    pq.emplace(10);

    cout<<pq.top();

    // push -> logn
    // top -> O(1);
    // pop -> logn
}


// Set : it stores everything in sorted order and in unique

void explainSet(){
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.emplace(3);
    st.emplace(2); // it will does not store duplicate values.

    auto it=st.find(3);

    auto it=st.find(6);

    st.erase(5);

    int cnt=st.count(1);

    auto it=st.find(3);
    st.erase(it);

    auto it1=st.find(2);
    auto it2=st.find(4);
    st.erase(it1,it2);

    auto it=st.lower_bound(2);
    auto it=st.upper_bound(3);

    // everything will be done in logn time complexity.
}


// Multiset: it stores elements in sorted order. If we erase something which is present in multiple times in set then all the numbers will be deleted of those same.
void explainMultiSet(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);

    ms.erase(1);
    int cnt=ms.count(1);

    // only a single one is erased.
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1)+2);
}


// Unordered Set: it is unique but not in sorted order.

void explainUSet(){
    unordered_set<int> st;
    // all operations are same as above ones.
}


// Map{Key, Value}: it have keys and values and it has unique key but not unique values.
// it stores unique keys in sorted order.
void explainMap(){
    map<int, int> mp;
    map<int,pair<int,int>> mpp;
    map<pair<int,int>, int> mpp;
    mpp[1]=2;
    mp.emplace({3, 1});
    mpp.insert({2,4});
    mpp[{2,3}]=10;

    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<mpp[1];
    cout<<mpp[5];

    auto it=mpp.find(3);
    cout<<*(it).second;

    auto it=mpp.find(5);

    auto it=mpp.lower_bound(2);
    auto it=mpp.upper_bound(5);
}