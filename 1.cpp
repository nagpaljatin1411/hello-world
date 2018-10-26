#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define f1(i,a,b) for(int i=a;i<b;i++)
#define f2(i,a,b) for(int i=a;i>b;i--)
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  f1(i,0,n)
  cin>>a[i];
  sort(a,a+n);
  ll ans=0;
  f1(i,1,n)
  {
    ans+=(a[i]-a[i-1])-1;
  }
  cout<<ans;
  return 0;
}
