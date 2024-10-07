#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long n,k;
	
	cin>>n>>k;
	
	long long odd_count=(n+1)/2;
	
	if(k<=odd_count) // k가 홀수인 경우 (홀수 개수 안으로 들어옴)
		cout<<2*k-1<<'\n';
	else // k가 짝수인 경우
		cout<<2*(k-odd_count)<<'\n';
	
	return 0;
}
