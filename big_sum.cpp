#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long sum=0;
    long n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<sum<<endl;
}
