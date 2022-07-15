#include <iostream>
using namespace std;
#define nn <<endl
#define ll long long int
int main()
{
    ll t; cin >> t;
    while (t--)
    {
        ll n; cin>> n;
        int a =0, ans;
        for (int i = 1; i < n*3; i++)
        {
            if (i%3!=0 && i%10!=3) a++;
            if (a==n) {ans=i; break;}
        }
        cout << ans nn;
    }
	return 0;
}