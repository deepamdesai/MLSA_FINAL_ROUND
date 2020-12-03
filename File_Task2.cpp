#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    while(__gcd(n,m)!=1)
    {
        int d=__gcd(n,m);
        n=n/d;
    }
   cout<<n;
  

return 0;
}
