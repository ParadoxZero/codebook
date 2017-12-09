#include <bits/stdc++.h>
using namespace std;
#define loop(i,j,n) for(i=j;i<n;i++)
vector<int>::iterator it;

void create(vector<int> v[], int k, int p){
	v[k].push_back(p);
	v[p].push_back(k);
}



int main(){
	int t,i,n,k,p,j,m;
	
	cin>>t;
	while(t--){
		cin>>n;
		vector<int> v[n];
		cin>>m;
		loop(i,0,m){
			cin>>k>>p;
			create(v,k,p);
			
		}
		loop(i,0,n){
			cout<<"\n";
			for(it=v[i].begin();it<v[i].end();it++){
				cout<<*it<<" ";
			}

		}

		

	}
}