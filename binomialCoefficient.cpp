#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
using namespace std;

int main()
{
	fast;
	int n,k;
	cin>>n>>k;
	//Takes much space
	/*int arr[n+1][k+1];
	
	for(int i = 0;i<n+1;i++)
	{
		for(int j = 0;j<=min(i,k);j++)
		{
			if(j==0||j==i)
			arr[i][j] = 1;
			else
			arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
		}
	}

	cout<<arr[n][k]<<endl;*/

	int arr[k+1];
	arr[0] = 1;

	for(int i = 0;i<n+1;i++)
	{
		for(int j=min(i,k);j>=1;j--)
		{
			arr[j] = arr[j] + arr[j-1];
		}
	}
	cout<<arr[k]<<endl;
}
