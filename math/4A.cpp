#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int w;
	
	cin>>w;
	
	if(w%2==0 && w!=2) 
		cout<<"YES"<<'\n';
	else 
		cout<<"NO"<<'\n';
	
	return 0;
}
