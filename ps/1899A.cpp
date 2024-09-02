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
		
		if(n%3==0)
			cout<<"Second\n";
		else
			cout<<"First\n";
	}
	
	return 0;
}
