#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int x,y;
	vector<vector<int>> m(5,vector<int>(5)); // 2차원 vector 배열 선언(5x5)
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>m[i][j];
			if(m[i][j]==1)
			{
				x=i;
				y=j;
			}
		}
	}
	
	int ans=abs(2-x)+abs(2-y);
	cout<<ans<<'\n';
	
	return 0;
}
