#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tt;
	cin>>tt;
	while(tt--){
		int n,kk;
		cin>>n>>kk;
		int a[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		int cnt=0;
		int i=0,k=n-1;
		for (; i<=k; ++i,k--)
		{
			if(i>k)break;
			int j=0,l=n-1;
			for (; j < n || l>=0; j++,l--)
			{
				if(i==k && j==l)break;
				if(a[i][j]!=a[k][l])cnt++;
			}
			if(i==k)break;
		}

		if(kk<cnt)cout<<"no\n";
		else if(kk==cnt)cout<<"yes\n";
		else if(cnt<kk){
			if(n%2)cout<<"yes\n";
			else if(n%2==0 && (cnt-kk)%2==0)cout<<"yes\n";
			else cout<<"no\n";
		}

	}
}