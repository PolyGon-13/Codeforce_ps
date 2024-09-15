#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	string str;
	
	cin>>n;
	
	while(n--)
	{
		cin>>str;
		
		if(str.length()>10)
		{
			int len=str.length();
			str.replace(1,len-2,to_string(len-2));
			cout<<str<<'\n';
		}
		else
			cout<<str<<'\n';
	}
	
	return 0;
}
