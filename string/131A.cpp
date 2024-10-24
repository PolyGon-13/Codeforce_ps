#include <iostream>
#include <cctype>
#include <string>

using namespace std;

bool all_upper(const string& s)
{
	for(char c:s)
	{
		if(!isupper(c))
			return false;
	}
	
	return true;
}

bool first_lower_rest_upper(const string& s)
{
	if(!islower(s[0]))
		return false;
	
	for(int i=1;i<s.size();++i)
	{
		if(!isupper(s[i]))
			return false;
	}
	
	return true;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string word;
	
	cin>>word;
	if(all_upper(word) || first_lower_rest_upper(word))
	{
		for(char& c:word)
			c=isupper(c)?tolower(c):toupper(c);
	}
	cout<<word<<'\n';
	
	return 0;
}
