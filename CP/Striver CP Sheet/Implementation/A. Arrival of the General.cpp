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

    ll num;
    cin>>num;

    vi arr(num);

    loop(i,0,num){
    	cin>>arr[i];
    }cout<<"\n";

    ll maxi = 0;
    ll mini = 0;
    loop(i,0,num){
    	if(arr[i] <= arr[mini])
    		mini = i;
    	if(arr[i] > arr[maxi])
    		maxi = i;
    } 

    if(maxi < mini){
    	cout<<abs(maxi - 0) + abs(mini - (num - 1));
    }else{
    	cout<<abs(maxi - 0) + abs(mini - (num - 1)) - 1;
    }


	return 0;
}
