#include <bits/stdc++.h>
using namespace std;
#define loop(i,j,n) for(i=j;i<n;i++)
vector<int>::iterator it;
vector<int> v;

int n;
int best=INT_MIN;
void func(int len[]){
	int i,j;
	loop(i,0,n){
		len[i]=1;
		loop(j,0,i){
			if(v[j]<v[i]){
				len[i]=max(len[i],len[j]+1);
			}
		}
	}
	for(i=0;i<n;i++)
		cout<<len[i]<<" ";
	/*sort(len,len+n);

	cout<<len[n-1]<<"\n";*/
}


int main(){
	int t,i,k;
	
	cin>>t;
	while(t--){
	
	cin>>n;
	int len[n];
	loop(i,0,n){
			cin>>k;
			v.push_back(k);
	}
		
		func(len);

	}
}