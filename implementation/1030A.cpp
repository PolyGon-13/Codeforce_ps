#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,x;
	
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(x)
		{
			cout<<"HARD\n";
			return 0;
		}
	}
	cout<<"EASY\n";
	
	return 0;
}
