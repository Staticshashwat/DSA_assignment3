#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    int sum=0;
    cin>>n;
    int a[n];    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
        
    }
    cout<<sum;
    return 0;  
}
