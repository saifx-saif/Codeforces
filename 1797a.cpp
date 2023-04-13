#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tt;
	cin>>tt;
	while(tt--){
		int m,n;
		cin>>m>>n;
		int x1,x2,y1,y2;
		cin>>x1>>y1>>x2>>y2;
		if((x1==1 && y1==1) || (x1==m && y1==n) || (x1==1 && y1==n) || (x1==m && y1==1)){
			cout<<2<<'\n';
		}
		else if((x2==1 && y2==1) || (x2==m && y2==n) || (x2==1 && y2==n) || (x2==m && y2==1)){
			cout<<2<<'\n';
		}
		else if((x1==1 || x2==1 || y1==1 || y2==1 || x1==m || x2==m || y1==n || y2==n)){
			cout<<3<<'\n';
		}
		else{
			cout<<4<<'\n';
		}
	}
	return 0;
}