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
	
	cin>>n;
	vector<int> v(n);
	for(int &x:v)
		cin>>x;
	
	int cnt=1,max_len=0;
	for(int i=0;i<n-1;++i)
	{
		if(v[i]<=v[i+1])
			cnt++;
		else
		{
			max_len=max(max_len,cnt);
			cnt=1;
		}
	}
	max_len=max(max_len,cnt);
	
	cout<<max_len<<'\n';
	
	return 0;
}
