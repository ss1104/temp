#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m1,n1,o,n;
	cin>>m1>>n1;
	n=m1+n1-1;
	string s,s1,s2;
 	for(o=0;o<m1;++o)
	{
		s1=s1+"a";
	}
	for(o=m1;o<n1+m1-1;++o)
	{
		s2=s2+"b";
	}
	s=s1+s2;
	cout<<s<<endl;
	return 0;
}