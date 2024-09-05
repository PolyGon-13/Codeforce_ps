#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t,a,b;
	
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		
		cout<<b-a<<'\n';
	}
	
	return 0;
}
