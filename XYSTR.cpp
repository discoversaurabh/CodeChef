#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	for(int test = 0; test < T; test++)
	{
	    int p = 0, i = 1;
	    string s;
	    //getline(cin, s);
	    cin>>s;
	    //cout<<s<<"->"<<s.length()<<endl;
	    while(i<s.length())
	    {
	        if(s[i-1] != s[i])
	        {
	            p++;
	            i+=2;
	        }
	        else
	            i++;
	    }
	    cout<<p<<endl;
	}
	return 0;
}
