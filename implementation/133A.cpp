#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string p;
	
	cin>>p;
	for(int i=0;i<p.length();i++)
	{
		if(p[i]=='H' || p[i]=='Q' || p[i]=='9')
		{
			cout<<"YES\n";
			return 0;
		}
	}
	cout<<"NO\n";
	
	return 0;
}
