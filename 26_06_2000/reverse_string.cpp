

#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    string s = str;
    int i = 0;
    int j = s.size()-1;
    while(i<j)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;j--;
    }
    return s;
    
}