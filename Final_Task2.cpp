#include<iostream>
using namespace std;
int main()
{
    int a, b,l_co_prime_count,l_num;
    int last_j;
    cin>>a>>b;
    //l_co_prime_count = 0;

    for (int i = 1; i <= a; i++)
    {   if (i > b)
         {break;}
        if (a %i == 0)
        {
            l_co_prime_count = 0;
            //cout<<"i = "<<i<<endl;
            for (int j = 1; j<=i ;j++)
            {
                if (i % j == 0 && b % j == 0)
                {
                    l_co_prime_count++ ;
                  // cout<<"j = "<<j<<endl;
                 //  cout<<"l_co_prime_count = "<<l_co_prime_count<<endl;
                }
                 last_j = j;
            }
            if (l_co_prime_count == 1)
            {
                l_num = last_j;
               // cout<<"l_num = "<<l_num<<endl;
            }
        }
    }
    cout<<l_num<<endl;
    return 0;

}
