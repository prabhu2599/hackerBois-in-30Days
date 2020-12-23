#include <iostream>
#include <string>
#include <cstdlib>


using namespace std;

bool checkSteppedStrings(string str1, string str2, int n) {
    int pos = 0;
    for(int i = 0; i < n; i++) {
        //cout<<str1[pos] <<" : " << str2[pos]<<" : "<<int(str1[pos]) - int(str2[pos])<<" % "<<endl;
        if(!(isspace(str1[i]) || int(str1[i]) == 32)) {
            if(abs(int(str1[i]) - int(str2[i])) == pos+1) {
                //cout<<str1[pos] <<" : " << str2[pos]<<" : "<<int(str1[pos]) - int(str2[pos]);
                //cout<<abs(int(str1[pos]) - int(str2[pos]))<<" $ "<<pos<<endl;
                ++pos;
            } else {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;
    string str1,str2;
    
    getline(cin,str1);
    getline(cin,str2);
    
    n = size(str1);
    // cout << n <<" " <<str1<< endl;
    // cout << int(str1[0]) - int(str2[0]) <<endl;
    cout<<(checkSteppedStrings(str1,str2,n)?"Strings are stepped":"Strings are not stepped");
    
    return 0;
}

