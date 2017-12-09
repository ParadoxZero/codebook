#include <bits/stdc++.h>
using namespace std;
#define loop(i,j,n) for(i=j;i<n;i++)
vector<int>::iterator it;
vector<int> v;
int n;
vector<int> v1;
void find( int k){
	if(k==n){
		it=v1.begin();
		if(v1.size()!=0){
			for(;it<v1.end();it++)
			cout<<*it<<" ";
			cout<<"\n";
		}	
		
	}
	else{
		find(k+1);
		v1.push_back(v[k]);
		find(k+1);
		v1.pop_back();
	}

}

int main(){
	int t,i,k;
	cin>>t;
	while(t--){
		cin>>n;
		loop(i,0,n){
			cin>>k;
			v.push_back(k);
		}

		find(0);
	}
}