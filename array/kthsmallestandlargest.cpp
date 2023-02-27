#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	vector<int>ans;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}
	ans.push_back(arr[k-1]);
	ans.push_back(arr[n-k]);
	return ans;
}
int main()
{
    int n,k,ele;
    vector<int> arr;
    cout<<"enter size"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ele;
        arr.push_back(ele);
    }
    cout<<"enter value of k"<<endl;
    cin>>k;
    vector<int>ans = kthSmallLarge(arr, n, k);
    for(auto i: ans)
    {
        cout<<i<<" ";
    }
}