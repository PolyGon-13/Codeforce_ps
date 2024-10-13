#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	string n;
	
	cin>>t;
	while(t--)
	{
		cin>>n;
		
		vector<int> num;
		for(int i=0;i<n.length();i++)
		{
			if(n[i]!='0')
			{
				int round_num=(n[i]-'0')*(int)pow(10,n.length()-i-1);
				num.push_back(round_num);
			}
		}
		
		cout<<num.size()<<'\n';
		for(int i=0;i<num.size();i++)
			cout<<num[i]<<" ";
		cout<<'\n';
	}
	
	return 0;
}
