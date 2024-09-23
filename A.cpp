#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
const int N = 101010;

int n, k;
int Timer = 0;
ll a[N];

void Solve()
{
    cin>>n >>k;
    for(int i = 1;i<=n;i ++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n);

    bool can_win = 0;
    cout << "Case #" << ++Timer << ": ";
    if(n<=2) can_win = a[1] <= k;
    else if(a[1] * (2*(n-1)-1) <= k) can_win = 1;;
    if(can_win) cout << "YES\n";
    else cout << "NO\n";
}

void init();
void Reset();

signed main()
{
    // fast
    int TC = 1;
    cin>>TC;
    init();
    while(TC--)
    {
        Solve();
        Reset();
    }
}

void init()
{

}
void Reset()
{
    
}