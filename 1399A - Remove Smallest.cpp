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
#define ee <<"  "
#define ll long long int
#define flo for(auto i:
 
#define i0 for(int i=0; i< 
#define i1 for(int i=1; i<
#define oi ;i++)
 
#define j0 for(int j=0; j<
#define j1 for(int j=1; j<
#define oj ;i++)

int maybe (ll n)
{
    ll x[n];
    if (n==1)
    {
        cin>>x[0];
        return 1;
    }
    for (int i = 0; i < n; i++) cin >> x[i];
    sort(x, x+n);
    for (int i = 1; i < n; i++)
        if (x[i]-x[i-1]>1) return 0; 
    return 1; 
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (maybe(n))
            cout << "YES" nn;
        else
            cout << "NO" nn;
    }
	return 0;
}