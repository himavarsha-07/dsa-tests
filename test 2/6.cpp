#include <bits/stdc++.h>

using namespace std;

void mergeSorted(int a[], int b[], int n, int m, int c[])
{
    int i = 0, j = 0, k = 0;
    while (i<n && j <m)
    {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }
    while (i < n)
        c[k++] = a[i++];
    while (j < m)
        c[k++] = b[j++];
    for(int i=0;i<n+m;i++)
    {
        cout<<c[i]<<" ";
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m],c[m+n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    mergeSorted(a,b,n,m,c);
    return 0;
}
