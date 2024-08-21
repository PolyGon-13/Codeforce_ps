#include <iostream>
#include <map>
 
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int i;
	int t,n,x;
	
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		map<int,int> freq;
		
		int max=0;
		for(i=0;i<n;i++)
		{
			cin>>x;
			freq[x]++;
			if(freq[x]>max)
				max=freq[x];
		}
		int result=n-max;
		cout<<result<<'\n';
	}
	
	return 0;
}
