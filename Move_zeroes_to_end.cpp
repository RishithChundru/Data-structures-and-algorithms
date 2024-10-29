#include <iostream>
#include <vector>
using namespace std;

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

