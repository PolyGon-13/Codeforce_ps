#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int j=0;
	string s;
	string target="hello";
	
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==target[j])
			j++;
	}
	
	if(j==target.length())
		cout<<"YES\n";
	else
		cout<<"NO\n";
	
	return 0;
}
