#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,k,s;
	int cnt=0;
	vector<int> score;
	
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		score.push_back(s);
	}
	
	for(int i=0;i<n;i++)
	{
		if(score[i]>=score[k-1] && score[i]>0)
			cnt++;
	}
	cout<<cnt<<'\n';
	
	return 0;
}
