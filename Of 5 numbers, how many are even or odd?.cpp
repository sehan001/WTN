#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin.ignore();
    string b;
    cin>>b;
    if(b=="even")
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                count++;
            }
        }
        cout<<count;
    }
    if(b=="odd")
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]%2 != 0)
            {
                count++;
            }
        }
        cout<<count;
    }
    return 0;
}
