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
    interval a[5];
    for(int i=0;i<5;i++)
        cin>>a[i].start>>a[i].end;
    for(int i=0;i<5;i++)
    {
        int q;
        cin>>q;
        cout<<bsearch(a,q,0,4);
    }
    return 0;
}
