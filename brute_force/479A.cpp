#include <iostream>
#include <array>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int a,b,c;
	array<int,4> res={};
	
	cin>>a>>b>>c;
	
	res[0]=a*(b+c);
	res[1]=(a+b)*c;
	res[2]=a*b*c;
	res[3]=a+b+c;
	
	int max=res[0];
	for(int i=1;i<4;i++)
	{
		if(max<res[i])
			max=res[i];
	}
	cout<<max<<'\n';
	
	return 0;
}
