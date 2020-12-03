#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A,B;
    cin>>A>>B;
    while(__gcd(A,B)!=1)
    {
        int d=__gcd(A,B);
        A=A/d;
    }
   cout<<A;
  

return 0;
}
