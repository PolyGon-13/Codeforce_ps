#include <iostream>

using namespace std;

int arr[2250010]; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string a,b;
	
	cin>>a>>b;
	int len=a.size();
	
	for(int i=0;i<len;i++)
	{
		if(a[i]>='A' && a[i]<='Z')
			a[i]=a[i]-'A'+'a';
		if(b[i]>='A' && b[i]<='Z')
			b[i]=b[i]-'A'+'a';
	}
	
	for(int i=0;i<len;i++)
	{
		if(a[i]!=b[i])
		{
			if(a[i]>b[i])
			{
				cout<<"1"<<'\n';
				return 0;
			}
			else if(a[i]<b[i])
			{
				cout<<"-1"<<'\n';
				return 0;
			}
		}
	}
	cout<<"0"<<'\n';
	
	return 0;
}
