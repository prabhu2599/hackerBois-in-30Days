#include <iostream>
#include <vector>
#include <string>
using namespace std;

void printIt(vector<string> v) {
    for(string i: v) {
        cout<<i<<" ";
    }
    cout<<endl;
    
}

bool isPalindrome(string str) { 
    int l = 0; 
    int h = size(str) - 1; 
  
    while (h > l) 
    { 
        if (str[l++] != str[h--]) 
        { 
            return 0; 
        } 
    } 
    return 1;
} 

vector<string> createCombinations(vector<string> v1,vector<string> v2,vector<string> v3) {
    string str1;
    vector<string> v;

    for(string i: v1) {
        for( string j: v2) {
            for( string k: v3) {
                str1 += i+j+k;
                v.push_back(str1);
                str1="";
            }
        }
    }
    
    return v;
}

int checkVectorsForPallindrome(vector<string> v) {
    bool check = false;
    for(string i: v) {
        if(isPalindrome(i)) {
            check = true;
        }
    }
    if(check){
        return 1;
    } else{
        return 0;
    }
}

vector<string> subString(string str, int n) {
    string str1;
    vector<string> v;
    for (int len = 1; len <= n; len++) 
    {    
        for (int i = 0; i <= n - len; i++) 
        {
            int j = i + len - 1;            
            for (int k = i; k <= j; k++) 
                str1.push_back(str[k]);
            //cout << str1;
            v.push_back(str1);
            str1="";
            //cout << endl;
        }
    }
    return v;
}

int solve(string a, string b, string c) {
    vector<string> v1,v2,v3;
    v1 = subString(a,size(a));
    v2 = subString(b,size(b));
    v3 = subString(c,size(c));
    // printIt(v1);
    // printIt(v2);
    // printIt(v3);
    
    vector<string> vFinal = createCombinations(v1,v2,v3);
    //printIt(vFinal);
    return checkVectorsForPallindrome(vFinal);
    
}

int main() {
    string a,b,c;
    cin >> a >> b >> c;
    cout<<solve(a,b,c);
    return 0;
}

