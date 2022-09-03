#include<bits/stdc++.h>
#define ll                 long long int
#define vi                 vector<int>
#define vs                 vector<string>
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

    bool flag = false;

    vs arr(5);

    loop(i,0,5){
    	cin>>arr[i];

    	string temp = arr[i];

    	if(temp[0] == str[0] || temp[1] == str[1])
    		flag = true;
    }

    if(flag)
    	cout<<"YES";
    else
    	cout<<"NO";

	return 0;
}
