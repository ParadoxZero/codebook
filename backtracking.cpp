#include <bits/stdc++.h>
using namespace std;
#define loop(i,j,n) for(i=j;i<n;i++)
vector<int>::iterator it;
int col[10];
int dia1[40];
int dia2[40];
int count1;
int n;

void  func(int y){
	int x;
	if(y==n){
		count1++;
		return ;
	}
	
	loop(x,0,n){
		if(col[x] || dia1[y+x] || dia2[x-y+n-1] )	
			continue;
		col[x]=dia1[y+x]=dia2[x-y+n-1]=1;
		func(y+1);
		col[x]=dia1[y+x]=dia2[x-y+n-1]=0;
	}
	return ;

}

int main(){
	int t,i,k;
	
	cin>>t;
	while(t--){	
		cin>>n;
		count1=0;
		loop(i,0,40){
			dia1[i]=0;
			dia2[i]=0;
		}
		func(0);
		cout<<count1<<"\n";

	}
}







