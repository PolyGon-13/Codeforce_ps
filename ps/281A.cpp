#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string str;
	
	cin>>str;
	if(str[0]>'Z')
		str[0]-=32;
	
	cout<<str<<endl;
	
	return 0;
}
