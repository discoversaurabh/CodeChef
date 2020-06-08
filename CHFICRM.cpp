#include <iostream>
using namespace std;
#define ICE_CREAM_PRICE 5
int main() {
	// your code goes here
	int T;
	cin>>T;
	bool res = false;
	int coin, coin5=0, coin10=0;
	for(int test=0; test<T; test++)
	{
	    int N;
	    cin>>N;
	    coin5 = coin10 = 0;
	    res = false;
	    for(int i=0; i<N; i++)
	    {
	        cin>>coin;
	        //cout<<coin+1;
	        
	        if(res)
	            continue;
	            
	        if(coin == 5)
	            coin5++;
	        else if(coin == 10)
	        {
	            if(coin5 <= 0)
	            {
	                res = true;
	                cout<<"NO"<<endl;
	                //break;    //cannot break as at least need to input other inputs as well
	            }
	            else
	            {
	                coin5--;
	                coin10++;
	            }
	        }
	        else if(coin == 15)
	        {
	            if(coin10 < 1 && coin5 < 2)
	            {
	                res = true;
	                cout<<"NO"<<endl;
	                //break;    //cannot break as at least need to input other inputs as well
	            }
	            else if(coin10 >= 1)
	                coin10--;
	            else if(coin5 >= 2)
	                coin5 = coin5 - 2;
	        }
	        else
	        {
	            res = true;
	            cout<<"NO"<<endl;
	            //break;    //cannot break as at least need to input other inputs as well
	        }
	    }
	    if(!res)
	        cout<<"YES"<<endl;
	}
	return 0;
}
