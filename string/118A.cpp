#include <iostream>
#include <string>

using namespace std;

string vowels="aoyeui";

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string str;
	string res="";
	
	cin>>str;
	
	for(char& c:str)
	{
		c=tolower(c);
		if(vowels.find(c)==string::npos)
		{
			res+='.';
			res+=c;
		}
	}
	cout<<res<<'\n';
	
	return 0;
}

/*
// ostringstream, unordered_set 사용한 풀이

#include <iostream>
#include <string>
#include <sstream>
#include <unordered_set>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string str;
	ostringstream res; // 문자열 생성
	unordered_set<char> vowels={'a','o','y','e','u','i'}; // 원소 정렬X, insert,erase,find 모두 O(1)으로 수행
	
	cin>>str;
	
	for(char& c:str)
	{
		c=tolower(c);
		if(vowels.find(c)==vowels.end())
			res<<'.'<<c;
	}
	cout<<res.str()<<'\n';
	
	return 0;
}
*/
