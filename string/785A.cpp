#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string s0="Tetrahedron";
	string s1="Cube";
	string s2="Octahedron";
	string s3="Dodecahedron";
	string s4="Icosahedron";
	
	int t;
	int ans=0;
	
	cin>>t;
	while(t--)
	{
		stirng m="";
		
		cin>>m;
		if(!m.compare(s0))
			ans+=4;
		if(!m.compare(s1))
			ans+=6;
		if(!m.compare(s2))
			ans+=8;
		if(!m.compare(s3))
			ans+=12;
		if(!m.compare(s4))
			ans+=20;
	}
	cout<<ans<<'\n';
	
	return 0;
}
