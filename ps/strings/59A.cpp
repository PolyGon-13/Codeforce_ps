#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int up_cnt=0,low_cnt=0;
	string str;
	
	cin>>str;
	for(int i=0;i<str.length();i++)
	{
		if(isupper(str[i]))
			up_cnt++;
		else
			low_cnt++;
	}
	
	if(up_cnt>low_cnt)
	{
		for(int i=0;i<str.length();i++)
			str[i]=toupper(str[i]);
	}
	else
	{
		for(int i=0;i<str.length();i++)
			str[i]=tolower(str[i]);
	}
	cout<<str<<'\n';
	
	return 0;
}
