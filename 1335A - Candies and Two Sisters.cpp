#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <iomanip>
#include <math.h>
#include <set>
#include <algorithm>
#include <utility>
 
using namespace std;
#define nn <<endl
#define ll long long int
#define flo for(auto i:

#define i0 for(int i=0; i< 
#define i1 for(int i=1; i<
#define oi ;i++)

#define j0 for(int j=0; j<
#define j1 for(int j=1; j<
#define oj ;i++)


int main()
{
    int t;
    cin >> t;
    ll x[t];

    i0 t oi
    {
        ll n;
        cin >> n;
        if (n%2) x[i] = n/2;
        else x[i] = (n/2) - 1;
    }
    
    i0 t oi
        cout << x[i] nn;
    
    return 0;
}