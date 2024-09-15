#include <iostream>
#include <string>

using namespace std;

int m[27];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string name;
	
	cin>>name;
	for(int i=0;i<name.length();i++)
		m[(char)name[i]-97]++;
	
	int cnt=0;
	for(int i=0;i<27;i++)
	{
		if(m[i]!=0)
			cnt++;
	}
	
	if(cnt%2==0)
		cout<<"CHAT WITH HER!"<<'\n';
	else
		cout<<"IGNORE HIM!"<<'\n';
	
	return 0;
}
