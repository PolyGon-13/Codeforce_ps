#include <iostream>
#include <array>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string str;
	array<int,26> target={};
	
	getline(cin,str);
	for(int i=0;i<str.length();i++)
	{
		if(str[i]!='{' && str[i]!='}')
			target[str[i]-'a']++;
	}
	
	int cnt=0;
	for(int i=0;i<target.size();i++)
	{
		if(target[i])
			cnt++;
	}
	cout<<cnt<<'\n';
	
	return 0;
}
