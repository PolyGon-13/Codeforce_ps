#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,a,b;
	int sum=0,res=0;
	
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		sum-=a;
		sum+=b;
		if(res<sum)
			res=sum;
		// res=max(res,sum);
	}
	cout<<res<<'\n';
	
	return 0;
}
