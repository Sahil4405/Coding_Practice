#include<bits/stdc++.h>
#define ll                 long long int
#define vi                 vector<int>
#define pll                pair<ll,ll>
#define ump                unordered_map
#define mp                 make_pair
#define pb                 push_back
#define ff                 first
#define ss                 second 
#define all(n)             n.begin(),n.end()
#define loop(i,a,b)        for(int i = a;i < b; i++)
#define looprev(i,a,b)     for(i = a; i > b; i--)
#define ps(x,y)            fixed<<setprecision(y)<<x 
#define FIO                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main()
{
    FIO; 

    ll testCases;
    cin>>testCases;

    while(testCases--)
    {
    	string str;
    	cin>>str;

        int cnt = 0;
        vector<int> arr;  
        int zeroes = 1;
        int len = str.length() - 1;
        while(len--)
        	zeroes *= 10;
    	loop(i,0,str.length()){
    		if(i != 0 && str[i] != '0')
    			cnt++;

    		if(str[i] - '0' != 0){
    			arr.pb((str[i] - '0') * zeroes);
    			// cout<<(str[i] - '0') * zeroes<<" ";
    		}

    		zeroes /= 10;
    	}

        cout<<arr.size()<<"\n";
    	loop(i,0,arr.size()){
    		if(arr[i] != 0)
    			cout<<arr[i]<<" ";
    	}
    	cout<<"\n";

    }
    return 0;
}
