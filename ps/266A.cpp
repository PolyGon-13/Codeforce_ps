#include <iostream>

using namespace std;

int n,cnt;
string str;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin>>n;
	cin>>str;
	
	for(int i=1;i<str.length();i++)
	{
		if(str[i]==str[i-1])
			cnt++;
	}
	cout<<cnt<<endl;
	
	return 0;
}
