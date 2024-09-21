#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,h,x;
	int width=0;
	
	cin>>n>>h;
	while(n--)
	{
		cin>>x;
		if(x>h)
			width+=2;
		else
			width+=1;
	}
	cout<<width<<'\n';
	
	return 0;
}
