#include <iostream>
#include <array>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	int cnt=0;
	array<int,5> cash={100,20,10,5,1};
	
	cin>>n;
	while(n>0)
	{
		for(int i=0;i<5;i++)
		{
			while(n>=cash[i])
			{
				n-=cash[i];
				cnt++;
			}
		}
	}
	cout<<cnt<<'\n';
	
	return 0;
}
