#include <iostream>
#include <vector>
using namespace std;

// void printVector(vector<int> v) {
//     for(int i: v) {
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }

int main() {
    int n = 0;
    cin>>n;
    //vector<int> v;
    
    for(int i=0;i<n;i++) {
        int x = 0;
        cin>>x;
        for(int j=0;j<x;j++) {
            int x2 = 0;
            cin>>x2;
            if(j == x2) {
                //v.push_back(x2);
                cout<<x2;
            } else {
                //v.push_back(0);
                cout<<0;
            }
        if((j < x-1))
            cout<<" ";
    }
    //printVector(v);
    if((i < n-1))
        cout<<endl;
    //v.clear();
    }
    return 0;
}
