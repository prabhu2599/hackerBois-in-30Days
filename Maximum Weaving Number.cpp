#include<iostream>
#include<string>
#include<vector>
#include <algorithm> 

using namespace std;

int main()
{
    int num;
    string a,b;
    cin>>a>>b;
    
    int l1 = a.length();
    int l2 = b.length();

    int n = l1<l2 ? l1:l2;
    int nl = l1<l2 ? l2:l1; //longer
    
    //cout<<n<<endl;
    
    vector<int> v;
    string sNew,sNew2;
    
    for(int i = 0; i< n; i++) {
        sNew+= (a[i]);
        sNew+= (b[i]);
        
        sNew2+= (b[i]);
        sNew2+= (a[i]);
    }
    if(l1 != l2) {
        
    for(int i=n-1;i<nl;i++) {
        if(a.length() == nl) {
            sNew+=a[i];
            sNew2+= (a[i]);
        } else {
            sNew+=b[i];
            sNew2+= (b[i]);
        }
    }
    }
    string sNewRev,sNewRev2;

    for(int n = sNew.length()-1; n >= 0; n--){
        sNewRev.push_back(sNew[n]);
        sNewRev2.push_back(sNew2[n]);

    }
    
    //cout<<sNew<<endl<<sNew2<<endl<<sNewRev<<endl<<sNewRev2<<endl;
    
    v.push_back(stoi(sNew));
    v.push_back(stoi(sNew2));
    v.push_back(stoi(sNewRev));
    v.push_back(stoi(sNewRev2));


    cout<<"- "<<endl<<*max_element(v.begin(), v.end()) ;
    return 0;
}
