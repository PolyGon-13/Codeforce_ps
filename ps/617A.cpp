#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int x,res;
	
	cin>>x;
	
	res=x/5;
	if(x%5!=0)
		res++;
	cout<<res<<endl;
	
	return 0;
}
