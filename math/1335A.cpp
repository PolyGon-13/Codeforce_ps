#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t,n;
	
	cin>>t;
	while(t--)
	{
		cin>>n;
		
		if(n<3) cout<<"0\n";
		else if(n%2==0) cout<<(n/2-1)<<'\n';
		else cout<<n/2<<'\n';
	}
	
	return 0;
}
