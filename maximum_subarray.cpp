#include <bits/stdc++.h>
using namespace std;
#define loop(i,j,n) for(i=j;i<n;i++)
vector<int>::iterator it;
vector<int> v;



int main(){
	int t,i;
	int k,n;
	cin>>t;
	while(t--){
	
	cin>>n;
	
	loop(i,0,n){
		cin>>k;
		v.push_back(k);
	}	

	int best=0,sum=0;

	loop(i,0,n){
		sum=max(v[i],sum+v[i]);
		best=max(best,sum);
		
	}

	cout<<best<<"\n";

	}
}