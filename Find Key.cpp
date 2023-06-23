// You are provided with 3 numbers : input1, input2 and input3.
// Each of these are 4 digits numbers within >=1000 and <=9999
// i.e.,
// 1000<=input1<=9999
// 1000<=input2<=9999
// 1000<=input3<=9999
// You are expected to find the key using below formula:
// Key = Sum of Largest digits of each number + Sum of Second Largest digits of each number
// For Example, input1=3521, input2=2452 input3=1352
//       Key = (5+5+5) + (3+4+3) = 25
// Assuming three numbers are passed to given function and complete the function to find and return the Key
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key=0;
    for(int i=0;i<n;i++)
    {
        int LD=INT_MIN,SLD=INT_MIN;
        while(a[i]>0)
        {
            int d=a[i]%10;
            if(d>LD)
            {
                SLD=LD;
                LD=d;
            }
            else if(d<LD && d>SLD)
            {
                SLD=d;
            }
            a[i]=a[i]/10;
        }
        key=LD+SLD+key;
    }
    cout<<key;
    return 0;
}
//using functions
#include<bits/stdc++.h>
using namespace std;
int key(int a[],int n)
{
    int key=0;
    for(int i=0;i<n;i++)
    {
        int LD=INT_MIN,SLD=INT_MIN;
        while(a[i]>0)
        {
            int d=a[i]%10;
            if(d>LD)
            {
                SLD=LD;
                LD=d;
            }
            else if(d<LD && d>SLD)
            {
                SLD=d;
            }
            a[i]=a[i]/10;https://assets.grammarly.com/emoji/v1/1f913.svg
        }
        key=LD+SLD+key;
    }
    return key;
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
    int res=key(a,3);
    cout<<res;
    return 0;
}
