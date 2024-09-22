#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int y;
	
	cin>>y;
	while(1)
	{
		y++;
		
		int a=y%10;
		int b=(y%100)/10;
		int c=(y%1000)/100;
		int d=y/1000;
		if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
		{
			cout<<y<<'\n';
			return 0;
		}
	}
	
	return 0;
}
