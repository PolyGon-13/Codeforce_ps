#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int m,n,extent,result;
	
	cin>>m>>n;
	
	extent=m*n;
	result=extent/2;
	cout<<result<<'\n';
	
	return 0;
}
