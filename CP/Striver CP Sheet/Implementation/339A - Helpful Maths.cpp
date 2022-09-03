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

    string str;
    cin>>str;

    vector<int> arr;
    loop(i,0,str.length()){

    	if(str[i] != '+')
    		arr.pb(str[i] - '0');
    }

    sort(arr.begin(), arr.end());
    string ans;

    loop(i,0,arr.size()){

    	if(i == 0)
    		ans += arr[i] + '0';
    	else{
    		ans += "+";
    		ans += arr[i] + '0';
    	}
    	// cout<<arr[i]<<" ";
    }
    cout<<ans;
    
	return 0;
}
