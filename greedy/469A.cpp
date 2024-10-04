#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,p,q,x;
	
	cin>>n;
	vector<int> g(n+1,0);
	
	cin>>p;
	for(int i=0;i<p;i++)
	{
		cin>>x;
		g[x]++;
	}
	
	cin>>q;
	for(int i=0;i<q;i++)
	{
		cin>>x;
		g[x]++;
	}
	
	for(int i=1;i<=n;i++)
	{
		if(g[i]==0)
		{
			cout<<"Oh, my keyboard!\n";
			return 0;
		}
	}
	cout<<"I become the guy.\n";
	
	return 0;
}
