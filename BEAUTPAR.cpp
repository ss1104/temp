#include<bits/stdc++.h>
using namespace std;
int sum(vector<int> &v,int start,int end)
{
	int ans=0;
	for(int i=start;i<=end;++i)
		ans=ans+v[i];
	return ans;
}
bool partition(vector<int> &v,int low,int high,int &k,int count,vector<pair<int,int>> &V)
{
	int res=0,c=0,l=0,h;
	int mid;
	for(int i=0;i<v.size();++i)
	{
		res=res+v[i];
	}
	if(res<k)
		return false;
	else
	{
		   if(low>high)
		   return false;
         mid=(low+high)/2;
         // int a=high;
         // high=mid;
         cout<<low<<" "<<high<<endl;
         int l=sum(v,low,mid);
         if(l>0)
         {
         	V.push_back(make_pair(low,mid));
         	count=count+1;
         	if(count==k)
         		return true;
         	// else return partition(v,low,mid,k,count,V);
         }
         else {
                 mid--;
                 return partition(v,low,mid,k,count,V);
              }
         // int b=low;
         // low=mid+1;
         // high=a;
         int r=sum(v,mid,high);
         if(r>0)
         {
         	V.push_back(make_pair(mid+1,high));
         	count=count+1;
         	if(count==k)
         	return true;   
         	// else return partition(v,mid+1,high,k,count,V);
         }
         else 
         {
         	mid++;
         	return partition(v,mid+1,high,k,count,V);
         }
         return partition(v,low,mid,k,count,V)+partition(v,mid+1,high,k,count,V);
	}
}
int main()
{
	int n,r,low=0,high,count=0,k;
	cin>>n;
	high=n-1;
	vector<int> v;
	vector<pair<int,int>> V;
	for(int i=0;i<n;++i)
		{
			cin>>r;
			v.push_back(r);
		}
	cin>>k;
	bool res=partition(v,low,high,k,count,V);
	if(res==false)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		cout<<"YES"<<endl;
		for(int i=0;i<V.size();++i)
		{
			cout<<"("<<V[i].first<<","<<V[i].second<<")"<<endl;
		}
	}
	return 0;
}