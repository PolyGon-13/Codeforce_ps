#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long n,m,a,x,y;
	
	cin>>n>>m>>a;
	
	x=n/a;
	y=m/a;
	
	if(n%a!=0)
		x++;
	if(m%a!=0)
		y++;
	
	cout<<x*y<<'\n';
	
	return 0;
}
