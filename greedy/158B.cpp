#include <iostream>
#include <array>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,s;
	array<int,5> cnt={};
	
	cin>>n;
	while(n--)
	{
		cin>>s;
		cnt[s]++;
	}
	
	// 4명은 한 택시에 바로 탑승
	// 3명은 1명인 팀하고만 가능하므로 그만큼 1명 팀 개수를 줄임
	// 2명은 2명인 팀과 함께 탑승 가능하므로 /2 후 증가
	int total=cnt[4]+cnt[3]+cnt[2]/2;
	cnt[1]-=cnt[3]; // 3명인 팀과 탑승한만큼 제거
	
	if(cnt[2]%2==1) // 남아있는 2명인 팀
	{
		total++;
		cnt[1]-=2;
	}
	
	if(cnt[1]>0) // 1명인 팀이 남아있는 경우
		total+=(cnt[1]+3)/4;
	
	cout<<total<<'\n';
	
	return 0;
}
