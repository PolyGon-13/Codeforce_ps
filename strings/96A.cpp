#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	char tmp;
	int cnt=0;
	string players;
	
	cin>>players;
	for(int i=0;i<players.length();i++)
	{
		if(players[i]=='1')
		{
			if(tmp=='1')
				cnt++;
			else
			{
				cnt=1;
				tmp='1';
			}
		}
		else
		{
			if(tmp=='0')
				cnt++;
			else
			{
				cnt=1;
				tmp='0';
			}
		}
		
		if(cnt==7)
		{
			cout<<"YES\n";
			return 0;
		}
	}
	cout<<"NO\n";
	
	return 0;
}
