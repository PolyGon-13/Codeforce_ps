#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,first,last;
	int cnt=1;
	string m;
	
	cin>>n;
	
	cin>>m;
	first=m[0];
	last=m[1];
	
	for(int i=1;i<n;i++)
	{
		cin>>m;
		
		if(last==m[0])
			cnt++;
		
		first=m[0];
		last=m[1];
	}
	cout<<cnt<<'\n';
	
	return 0;
}
