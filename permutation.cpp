#include <bits/stdc++.h>
using namespace std;
#define loop(i,j,n) for(i=j;i<n;i++)
vector<int>::iterator it;
vector<int> v;
vector<int> per;
int n,i;
	vector<int> chosen;
void search1(){
	if(per.size()==n){
		for(it=per.begin();it<per.end();it++)
			cout<<*it<<" ";
		cout<<"\n";
	}
	else{
		for(i=0;i<n;i++){
			if(find(per.begin(),per.end(),v[i])!=per.end()){
					//cout<<"yaa";
					continue;
			}
			
				//chosen[i]=1;
			per.push_back(v[i]);
			//for(it=per.begin();it<per.end();it++)
			//cout<<*it<<" ";
		//<<"\n";
			search1();
			//chosen[i]=0;
			per.pop_back();
			//search1();
			
		}
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
			chosen.push_back(0);;
		}
		fflush(stdin);
	search1();
		

	}
}