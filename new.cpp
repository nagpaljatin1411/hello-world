#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct interval
{
    int start,end;
};
bool cmpfunc(interval a,interval b)
{
    return(a.start < b.start);
}
int bsearch(interval a[],int q,int low,int high)
{
    int mid;
    mid=low+(high-low)/2;
    while(low<high)
    {
        if(a[mid].start==q)
        return mid;
        else if(a[mid].start<q)
        high=mid;
        else if(a[mid].start>q)
        low=mid+1;
    }
    return mid;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        interval a[n];
        for(int i=0;i<n;i++)
        cin>>a[i].start>>a[i].end;
        sort(a,a+n,cmpfunc);
        int largest=0;
        for(int i=0;i<n;i++)
        {
            if(a[i].end>largest)
            largest=a[i].end;
        }
        while(m--)
        {
            int q;
            cin>>q;
            if(q>=largest)
            cout<<"-1"<<endl;
            else
            {
                int key=bsearch(a,q,n-1);
            }
        }
    }
    return 0;
}
