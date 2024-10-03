#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,x;
	
	cin>>n;
	vector<int> v(n+1);
	
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		v[x]=i;
	}
	cout<<v[1];
	
	for(int i=2;i<=n;i++)
		cout<<" "<<v[i];
	cout<<'\n';
	
	return 0;
}
