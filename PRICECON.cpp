#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T, N, K;
	cin>>T;
	for(int test = 0; test < T; test++)
	{
	    cin>>N>>K;
	    int num, sum = 0;
	    for(int i=0; i<N; i++)
	    {
	        cin>>num;
	        if(num > K)
	            sum += num - K; 
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
