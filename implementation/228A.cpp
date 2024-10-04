#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	vector<int> s(4);
	
	cin>>s[0]>>s[1]>>s[2]>>s[3];
	
	sort(s.begin(),s.end());
	s.erase(unique(s.begin(),s.end()),s.end());
	// unique() 함수는 중복되지 않는 요소들을 앞쪽으로 이동시킴
	// 나머지 요소들은 뒤쪽에 그대로 남겨두어, 중복되지 않은 마지막 요소의 다음 위치를 반환함
	cout<<4-s.size()<<'\n';
	
	return 0;
}
