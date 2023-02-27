#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
	long int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		
		for(int j=0;j<n;j++)
		{
			cin>>arr[j];			
		}
		int min=arr[0],max=arr[0];
		for(int k=1;k<n;k++)
		{
			if(min>arr[k])
			 min=arr[k];
			if(max<arr[k])
			 max=arr[k];
		}
		 
		 cout<<(min+max)<<endl;

	}
}
int main()
{
    int arr[334],n;
    cout<<"enter size"<<endl;
    cin>>n;
    for(int i=0;i)
}