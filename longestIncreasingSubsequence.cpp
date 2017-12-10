#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
using namespace std;

int main()
{
	int len ;
	cin>>len;
	int arr[len];
	int lis[len];
	for(int i = 0;i<len;i++)
	{
		cin>>arr[i];
	}

	for(int i = 0;i<len;i++)
	lis[i] = 1;	
	
	for(int i = 0;i<len;i++)
	{
		for(int j = 0;j<i;j++)
		{
			if(arr[j]<arr[i]&&(lis[j]+1)>lis[i])
			lis[i] = lis[j]+1;
		}
	}
	int maxn = INT_MIN;
	for(int i = 0;i<len;i++)
	maxn = (maxn<lis[i])? lis[i] : maxn;
	
	cout<<maxn<<endl;
}
