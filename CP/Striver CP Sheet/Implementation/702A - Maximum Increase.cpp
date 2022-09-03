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

    ll sz;
    cin>>sz;

    vi arr(sz);

    loop(i,0,sz){
    	cin>>arr[i];
    }

    ll cnt = 1, maxi = INT_MIN;

    loop(i,1,sz){
    	if(arr[i] > arr[i-1]){
    		// cout<<arr[i]<<" ";
    		cnt++;
    		// cout<<cnt;
    	}
    	else{
    		maxi = max(cnt, maxi);
    		cnt = 1;
    	}
    }


    cout<<max(maxi,cnt);

	return 0;
}
