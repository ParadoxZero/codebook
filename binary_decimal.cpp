#include <bits/stdc++.h>
using namespace std;
#define loop(i,j,n) for(i=j;i<n;i++)
int main(){
	int t,i,sum,i;
	
	cin>>t;
	while(t--){
	string s;
	cin>>s;
	reverse(s.begin(),s.end());
	sum=0;
	loop(i,0,s.size()){
		if(a[i]=='1')
			sum=sum+pow(2,i);
	}
		
	cout<<sum<<"\n";	

	}
}