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

    set<char> st;

    loop(i,0,str.length()){
        st.insert(str[i]);
    }

    if(st.size()%2 == 0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";

    // cout<<st.size();

    return 0;
}
