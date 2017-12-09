#include <bits/stdc++.h>
using namespace std;
#define loop(i,j,n) for(i=j;i<n;i++)
vector<int>::iterator it;
vector<int> v;
string x;
string y;

int min(int a, int b, int c){
	return min(min(a,b),c);
}

int  func(string x, string y, int m, int n){
	if(m==0)
		return n;
	if(n==0)
		return m;
	if(x[m-1]==y[n-1])
		return func(x,y,m-1,n-1);
	return 1+min(func(x,y,m,n-1),func(x,y,m-1,n),func(x,y,m-1,n-1));
}


int main(){
	int t,i,n;
	
	cin>>t;
	while(t--){
		cin>>x>>y;
		int c=func(x,y,x.size(),y.size());
		cout<<c<<"\n";

	
		
		

	}
}