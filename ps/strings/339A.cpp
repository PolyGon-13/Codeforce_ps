#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string cal;
	vector<char> v;
	
	cin>>cal;
	for(int i=0;i<cal.length();i+=2)
		v.push_back(cal[i]);
	
	sort(v.begin(),v.end());
	
	int j=0;
	for(int i=0;i<cal.length();i+=2)
	{
		cal[i]=v[j];
		j++;
	}
	cout<<cal<<'\n';
	
	return 0;
}
