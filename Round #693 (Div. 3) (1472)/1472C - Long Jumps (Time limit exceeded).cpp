#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <iomanip>
#include <math.h>
#include <set>
#include <algorithm>
#include <utility>
#include <cstring>
using namespace std;
#define nn <<endl
#define ee <<" "
#define ll long long int
#define floi for(int i=0;i<n;i++)
#define floj for(int j=0;j<n;j++)
 
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>> n;
        ll ans=0, a[n];
        for (int i=0; i<n; i++) cin>> a[i];
        for (int i=0; i<n; i++)
        {
            ll x=i+1, b=0;
            while (x<=n)
            {
                b+=a[x-1];
                x = x + a[x-1];
            }
            ans = max(ans, b);
        }
        cout << ans nn;
    }
	return 0;
}