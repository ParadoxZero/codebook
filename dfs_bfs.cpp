#include <bits/stdc++.h>
using namespace std;
#define loop(i,j,n) for(i=j;i<n;i++)
vector<int>::iterator it;
bool visited[10];
queue<int> q;


void create(vector<int> v[], int k, int p){
	v[k].push_back(p);
	v[p].push_back(k);
}

void dfs(int node,vector<int> v[]){
	visited[node]=true;
	cout<<node<<" ";

	for(it=v[node].begin();it<v[node].end();it++){
		if(visited[*it]==false)
			dfs(*it, v);
	}
}

void bfs(vector<int> v[]){
	visited[0]=true;
	q.push(0);
	while(!q.empty()){
		int s=q.front();
		cout<<s<<" ";
		q.pop();
		for(it=v[s].begin();it<v[s].end();it++){
			if(visited[*it])
				continue;
			//cout<<*it<<" ";
			visited[*it]=true;
			q.push(*it);
		}
	}

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
			visited[i]=false;
			
		}
		loop(i,0,n){
			cout<<"\n";
			sort(v[i].begin(),v[i].end());
			for(it=v[i].begin();it<v[i].end();it++){
				cout<<*it<<" ";
			}

		}
		cout<<"\n";

		dfs(0,v);

		loop(i,0,m){
				visited[i]=false;
			
		}
		

		cout<<"\n";
		bfs(v);

	}
}