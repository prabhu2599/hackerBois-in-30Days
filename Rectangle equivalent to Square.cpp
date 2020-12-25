#include <iostream>
#include <vector>
#include <queue>
#include <set>
using namespace std;

int checkNumberOfRectangles(int n) {
    return 0;
}

void showpq(priority_queue<pair<int,int>> gq)
{
    priority_queue<pair<int,int>> g = gq;
    while (!g.empty()) {
        pair<int, int> top = g.top();
        cout <<top.second << " " << top.first;
        g.pop();
        cout << '\n';
    }
}

void toSet(priority_queue<pair<int,int>> pq) {
    set<pair<int,int>> s;
    while(!pq.empty()) { 
        pair<int, int> top = g.top();
        cout <<top.second << " " << top.first;
        g.pop();
        cout << '\n';
    } 
}

int main() {
    int a;
    cin >> a;
    cout << a << endl;
    
    priority_queue<pair<int, int>> pq;
    while(a--) {
        int x1=0,x2=0;
        cin>>x1>>x2;
        pq.push(make_pair(x1,x2));
    }
    showpq(pq);
    
    return 0;
}
