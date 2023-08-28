#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, val;
    cin>>n>>val;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l[n/2],h[n/2],j=0,k=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<val)
        {
            l[j]=a[i];
            j++;
        }
        else if(a[i]>val)
        {
            h[k]=a[i];
            k++;
        }
    }
    for(int i=0;i<n/2;i++)
    {
        cout<<l[i]<<" ";
    }
    cout<<'\n';
    for(int i=0;i<n/2;i++)
    {
        cout<<h[i]<<" ";
    }

    return 0;
}
