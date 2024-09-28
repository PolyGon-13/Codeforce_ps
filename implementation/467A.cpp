#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,p,q;
	int cnt=0;
	
	cin>>n;
	while(n--)
	{
		cin>>p>>q;
		
		if(q-p>=2)
			cnt++;
	}
	cout<<cnt<<'\n';
	
	return 0;
}
