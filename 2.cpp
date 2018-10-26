#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#define ll long long
#define f1(i,a,b) for(int i=a;i<b;i++)
#define f2(i,a,b) for(int i=a;i>b;i--)
using namespace std;
int main()
{
  ll a,b,x,y;
  cin>>a>>b>>x>>y;
  ll gcd=__gcd(x,y);
  x=x/gcd;
  y=y/gcd;
  ll p=a/x,q=b/y;
  cout<<(p>q?q:p);
  return 0;
}
