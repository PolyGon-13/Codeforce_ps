#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,x,y,z;
	int total_x=0,total_y=0,total_z=0;
	
	cin>>n;
	while(n--)
	{
		cin>>x>>z>>y;
		
		total_x+=x;
		total_y+=y;
		total_z+=z;
	}
	if(total_x==0 && total_y==0 && total_z==0)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	
	return 0;
}
