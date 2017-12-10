#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
using namespace std;

int main()
{
	fast;
	int n;
	cin>>n;	
	int wt[n],val[n];
	int w;
	cin>>w;
	
	for(int i = 0;i<n;i++)
	cin>>wt[i];
	for(int i = 0;i<n;i++)
	cin>>val[i];

	int arr[n+1][w+1];
	
	for(int i = 0;i<=n;i++)
	{
		for(int j = 0;j<=w;j++)
		{
			if(i==0||j==0)
			arr[i][j] = 0;
	
			else if(w<wt[i])
			arr[i][j] = arr[i-1][j];
			else
			arr[i][j] = max(val[i-1] + arr[i-1][w-wt[j-1]],arr[i-1][j]);
		}	
	}	
	cout<<arr[n][w]<<endl;
}
