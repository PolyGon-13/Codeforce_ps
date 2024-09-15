#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,a,b,c;
	int cnt=0,result=0;
	
	cin>>n;
	while(n--)
	{
		cin>>a>>b>>c;
		cnt=0;
		
		if(a) cnt++;
		if(b) cnt++;
		if(c) cnt++;
		
		if(cnt>=2)
			result++;
	}
	cout<<result<<'\n';
	
	return 0;
}

/*
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,a,b,c;
	int sum=0;
	
	cin>>n;
	while(n--)
	{
		cin>>a>>b>>c;
		
		if((a&&b) || (b&&c) || (c&&a))
			sum++;
	}
	cout<<sum<<'\n';
	
	return 0;
}
*/
