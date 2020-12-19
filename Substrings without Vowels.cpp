#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <regex>
using namespace std;

void printIt(vector<string> v, int n) {
    for(string i: v) {
        if(int(size(i)) == n)
            cout<<i<<" ";
    }
    cout<<endl;
}

vector<string> subsYahan(string s, int n) {
    vector<string> v;
    for(int i=1; i<=n ; i++ ) {
        for(int j=0; j <= n-i; j++) {
            int n = i + j - 1;
            string s1="";
            for(int k=j; k<n; k++) {
                s1 += s[k];
            }
            if(s1 != "")
                v.push_back(s1);
        }
    }   
    return v;
}

string removeVows(string str,int len) {
    for(int i=0; i<len; i++)
	{   
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			for(int j=i; j<len; j++)
			{
				str[j]=str[j+1];
			}
		len--;
		}
	}
	return str;
}


string remVowel(string str) { 
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 
                           'A', 'E', 'I', 'O', 'U'}; 
      
    for (int i = 0; i < str.length(); i++)  
    { 
        if (find(vowels.begin(), vowels.end(), 
                      str[i]) != vowels.end())  
        { 
            str = str.replace(i, 1, ""); 
            i -= 2; 
        } 
    } 
    return str; 
}

string remVowelregex(string str) 
{ 
    regex r("[aeiouAEIOU]");  
      
    return regex_replace(str, r, ""); 
} 

int main() {
    string s; int n;
    cin >> s >> n;
    s = remVowelregex(s);
    printIt(subsYahan(s,size(s)+1), n);
    
    return 0;
}
