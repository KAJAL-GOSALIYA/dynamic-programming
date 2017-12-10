#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
using namespace std;

int main()
{
	int n = 10,e = 2;
	
	int arr[e+1][n+1];

	for(int i = 0;i<=e;i++)
	{
		arr[i][0] = 0;
		arr[i][1] = 1;
	}

	for(int i = 0;i<=n;i++)
	arr[1][i] = i;

	for(int i = 2;i<=e;i++)
	{
		for(int j = 2;j<=n;j++)
		{
			arr[i][j] = INT_MAX;
			int res;

			for(int x = 1;x<=j;x++)
			{
				res = 1 + max(arr[i-1][x-1],arr[i][j-x]);
				arr[i][j] = (arr[i][j]<res) ? arr[i][j] : res;
			}
		}
	}
	cout<<arr[e][n]<<endl;
}
