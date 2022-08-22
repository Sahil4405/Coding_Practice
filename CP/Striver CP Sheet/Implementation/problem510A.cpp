#include<iostream>
#include<vector>
#define ll              long long
#define vi              vector<int>
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ps(x,y)         fixed<<setprecision(y)<<x
#define loop(i,a,b) 	for(int i=(a);i<=(b);i++)
#define looprev(i,a,b) 	for(int i=(a);i>=(b);i--)
using namespace std;

void func1(ll col){
	loop(i,1,col){
		cout<<"#";
	}
}

void func2(ll col){
	loop(i,1,col-1){
		cout<<".";
	}
	cout<<"#";
}

void func3(ll col){
	cout<<"#";
	loop(i,1,col-1){
		cout<<".";
	}
}

int main()
{
    FIO;
    ll row,col;
    cin>>row>>col;
    bool flag = true;

    loop(i,1,row){
    	if(i%2 != 0){
    		func1(col);
    	}else if(i%2 == 0 && flag){
    		func2(col);
    		flag = false;
    	}else{
    		func3(col);
    		flag = true;
    	}
    	cout<<"\n";
    }
    return 0;
}
