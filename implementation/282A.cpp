#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int x=0;
	int n;
	string cmd;
	
	cin>>n;
	while(n--)
	{
		cin>>cmd;
		if(cmd[0]=='+' || cmd[2]=='+')
			x++;
		else if(cmd[0]=='-' || cmd[2]=='-')
			x--;
	}
	cout<<x<<'\n';
	
	return 0;
}
