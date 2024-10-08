#include <iostream>
#include <array>
#include <cctype>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	string str;
	array<bool,26> ans={}; // 알파벳의 개수는 26개
	
	cin>>n>>str;
	for(int i=0;i<n;i++)
	{
		str[i]=toupper(str[i]);
		ans[str[i]-'A']=true;
	}
	// a는 97, A는 65 (아스키 코드)
	
	for(int i=0;i<26;i++)
	{
		if(!ans[i])
		{
			cout<<"NO\n";
			return 0;
		}
	}
	cout<<"YES\n";
	
	return 0;
}
