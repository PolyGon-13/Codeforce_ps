#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	int sum=0,cnt=0;
	
	cin>>n;
	vector<int> c(n,0);
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
		sum+=c[i];
	}
	
	sort(c.begin(),c.end(),greater<int>());
	
	int take=0;
	for(int i=0;i<n;i++)
	{
		take+=c[i];
		cnt++;
		
		if(take>sum/2)
		{
			cout<<cnt<<'\n';
			return 0;
		}
	}
	cout<<cnt<<'\n';
	
	return 0;
}
