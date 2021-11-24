#include<bits/stdc++.h>
using namespace std;
typedef     long long    ll;
typedef     unsigned long long    ull;
typedef     vector<int> vi;
typedef     vector<long long> vl;
typedef     pair<int, int>pi;
typedef     pair<long long, long long>pl;
#define F   first
#define S   second
#define pb  push_back
#define     all(x)      x.begin() , x.end()
#define mod 1000000007
#define       FOR(i,a,b) for(i=a;i<=b;i++)
#define     mem(a)      memset(a , 0 ,sizeof a)
#define     memn(a)     memset(a , -1 ,sizeof a)

const int Inf           = (int)2e9 + 5;
const ll  Lnf           = (ll)2e18 + 5;
const int N             = 5e5 + 5;
const int NN            = 1e6 + 5;

vector<int>vii;


int solve() 
{
    ll i,j,n;
    cin>>n;
    ll wt;
    cin>>wt;
    ll v[wt+1];
    for(i=0;i<n;i++)cin>>v[i];
    sort(v,v+n);
    ll a[n+5][wt+5];
    memset(a,NN,sizeof(a));
    a[0][0]=0;
    for(i=1;i<=n;i++){
        for(j=0;j<=wt;j++)
        {
            if(j<v[i-1])
            {
                a[i][j]=a[i-1][j];
            }
            else{
                a[i][j]=min(a[i-1][j],ll(1+a[i][j-v[i-1]]));
                
            }
        }
    }
    cout<<a[n][wt]<<endl;
    vector<ll>vec;
    while (wt!=0)
    {
        if(a[n][wt]==a[n-1][wt])n--;
        else {
            vec.push_back(v[n-1]);
            wt=wt-v[n-1];
        }

    }
    for ( i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    
    
    
    return 0;
}

int main(){
    int test = 1;
    //cin>>test;
    while (test--)solve();
    return 0;
}


