#include <bits/stdc++.h>

using namespace std;

void removeDup(int a[], int n)
{
    std::set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    for (auto& i : s) {
        cout << i << ' ';
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    removeDup(a,n);
    return 0;
}
