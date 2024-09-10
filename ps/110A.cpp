#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int cnt=0;
	long long n;
	
	cin>>n;
	while(n!=0)
	{
		if(n%10==4 || n%10==7)
			cnt++;
		n/=10;
	}
	
	if(cnt==4 || cnt==7)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	
	return 0;
}
