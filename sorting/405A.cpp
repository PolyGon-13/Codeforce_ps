#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	
	cin>>n;
	vector<int> box(n,0);
	
	for(int i=0;i<n;i++)
		cin>>box[i];
	
	sort(box.begin(),box.end());
	
	for(auto i:box)
		cout<<i<<" ";
	cout<<'\n';
	
	return 0;
}
