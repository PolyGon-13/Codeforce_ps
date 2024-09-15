#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int k,n,w;
	int i=2,res=0;
	
	cin>>k>>n>>w;
	int tmp=k;
	while(w--)
	{
		res+=k;
		k=tmp*i++;
	}
	
	if(n>res)
		cout<<"0\n";
	else
		cout<<res-n<<'\n';
	
	return 0;
}
