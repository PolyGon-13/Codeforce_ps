#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	int cnt_a=0,cnt_d=0;
	string game;
	
	cin>>n;
	cin>>game;
	for(int i=0;i<n;i++)
	{
		if(game[i]=='A')
			cnt_a++;
		else
			cnt_d++;
	}
	
	if(cnt_a>cnt_d)
		cout<<"Anton\n";
	else if(cnt_a<cnt_d)
		cout<<"Danik\n";
	else
		cout<<"Friendship\n";
	
	return 0;
}
