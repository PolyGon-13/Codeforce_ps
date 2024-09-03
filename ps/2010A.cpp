#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t,n,x;
	int flag=1;
	int sum=0;
	
	cin>>t;
	while(t--)
	{
		cin>>n;
		while(n--)
		{
			cin>>x;
			if(flag)
			{
				sum+=x;
				flag=0;
			}
			else
			{
				sum-=x;
				flag=1;
			}
		}
		cout<<sum<<'\n';
		sum=0;
		flag=1;
	}
	
	return 0;
}
