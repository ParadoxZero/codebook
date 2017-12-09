#include <bits/stdc++.h>
using namespace std;
#define loop(i,j,n) for(i=j;i<n;i++)
vector<int>::iterator it;
vector<int> v;
int n;

int value[10][10];
int sum[10][10];
void func(){
	int i,j;
	loop(i,0,n){
		loop(j,0,n){
			sum[i][j]=max(sum[i-1][j],sum[i][j-1])+value[i][j];
		}
	}
}

int main(){
	int t,i,j;
	
	cin>>t;
	while(t--){
	cin>>n;
	int len[n];
	loop(i,0,n){
		loop(j,0,n){
			cin>>value[i][j];
			sum[i][j]=0;
		}
	}
		
		func();
		cout<<sum[n-1][n-1];
		

	}
}