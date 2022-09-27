#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,p;
        cin>>n>>p;
        int arr[n],sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i]*2;
        }
        if(p-sum >=0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }

}
