#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string dub;
	string res="";
	int flag=1;
	
	cin>>dub;
	for(int i=0;i<dub.length();++i)
	{
		if(dub[i]=='W' && dub[i+1]=='U' && dub[i+2]=='B')
		{
			i+=2;
			if(!flag)
				res+=" ";
			continue;
		}
		else
		{
			flag=0;
			res+=dub[i];
		}
	}
	cout<<res<<'\n';
	
	return 0;
}
