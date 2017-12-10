#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
using namespace std;

int main()
{
	fast;
	string str1 = "kajal";
	string str2 = "kajal";
	int m = str1.length(),n = str2.length();
	int arr[m+1][n+1];
	
	for(int i = 0;i<m+1;i++)
	{
		for(int j = 0;j<n+1;j++)
		{
			if(i==0)
			arr[i][j] = j;
			else if(j==0)
			arr[i][j] = i;
			else if(str1.at(i-1)==str2.at(j-1))
			arr[i][j] = arr[i-1][j-1];
			else
			{
				int minn = 0;
				minn = (arr[i-1][j]<arr[i][j-1])? arr[i-1][j] : arr[i][j-1];
				minn = minn<arr[i-1][j-1] ? minn : arr[i-1][j-1];
				arr[i][j] = 1+ minn;
			}
		}
	}
	cout<<arr[m][n]<<endl;

}
