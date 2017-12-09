#include <bits/stdc++.h>
using namespace std;
#define loop(i,j,n) for(i=j;i<n;i++)
vector<int>::iterator it;
vector<int> v;

int  func(int sum){
	if(sum<0)
		return 0; 
	else if(sum==0){
		return 1;
	}
	else{
		return func(sum-v[0])+ func(sum-v[1])+ func(sum-v[2]) ;
	}
}

int main(){
	int t,i,k,n,sum;
	
	cin>>t;
	while(t--){
	
	cin>>n;
	loop(i,0,n){
		cin>>k;
		v.push_back(k);
	}	
		
	cin>>sum;
	int p=func(sum);
	cout<<p<<"\n";
	}
}