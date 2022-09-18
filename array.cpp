#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j=0,f=0,d;
	cout<<"enter the size of the array : ";
	cin>>n;
	int a[n],b[n];
	cout<<"enter arrary 1 : ";
	for(i=0;i<n;++i)
	{
		cin>>a[i];
	}
	cout<<"enter arrary 2 : ";
	for(i=0;i<n;++i)
	{
		cin>>b[i];
	}
	while(1)
	{
		d=b[j]-a[j];
		a[j]=a[j]+d;
		a[j+1]=a[j+1]+2*d;
		a[j+2]=a[j+2]+3*d;
		j++;
		if(a[j]>b[j])
			break;
		if(j==n-2)
			break;
	}
	for(i=0;i<n;++i)
	{
		if((a[i]!=b[i])||(a[i]>b[i]))
		{
			f=1;
			cout<<"no"<<endl;
			break;
		}
	}
	if(f==0)
		cout<<"yes"<<endl;
	return 0;
}