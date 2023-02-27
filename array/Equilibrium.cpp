 #include<iostream>
 using namespace std;

 
 
 
 int equilibriumPoint(long long a[], int n) {
    
        if(n==1)
          return 1;
        if(n==2)
          return -1;
      
        int s1=0;int s2=0;
          
        for(int i=1;i<n;i++)
            {
                s2=s2+a[i];
            }
           
     for(int i=0;i<n-1;i++)
     {
        if(s1==s2)
            return i+1;

        s1+=a[i];
        s2-=a[i+1];
     }
        return -1;
}
//fggkjkj

int main()
{
    long long int a[7]={1,7,3,5,2,2,7};
   long long int n=7;

   int t=equilibriumPoint(a,n);
    cout<<t<<endl;
}