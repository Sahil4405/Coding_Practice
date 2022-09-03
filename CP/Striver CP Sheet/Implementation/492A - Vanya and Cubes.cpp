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

    ll x;
    cin>>x;

    ll sum = 0;
    ll cnt = 1, total = 0;

    while(true){
    	sum += cnt;
    	total += sum;

    	if(total >= x){
    		break;
    	}
    	cnt++;
    }

    if(x < total)
    	cout<<cnt-1;
    else
    	cout<<cnt;

	return 0;
}
