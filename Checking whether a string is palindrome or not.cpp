#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	string s;
	cin>>s;
	
	string r;
	r=s;
	reverse(s.begin(),s.end());
	
	if(s==r)
	cout<<"Yes it is pallindrome";
	else
	cout<<"No it is Not Pallindrome";
	return 0;
}
