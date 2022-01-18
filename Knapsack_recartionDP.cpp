#include<bits/stdc++.h>
using namespace std;
typedef     long long    ll;
typedef     unsigned long long    ull;
typedef     vector<int> vi;
typedef     vector<long long> vl;
typedef     pair<int, int>pi;
typedef     pair<long long, long long>pl;
#define     Yes   printf("Yes\n")
#define     No    printf("No\n")
#define     YES   printf("YES\n")
#define     NO    printf("NO\n")
#define     Noo    printf("-1\n")
#define F   first
#define S   second
#define pb  push_back
#define     all(x)      x.begin() , x.end()
#define mod 1000000007
#define     mem(a)      memset(a , 0 ,sizeof a)
#define     memn(a)     memset(a , -1 ,sizeof a)

#define error(args...) {vector<string>_v=split(#args,',');err(_v.begin(),args);cout<<endl;}
vector<string> split(const string &s, char c) {vector<string>v; stringstream ss(s); string x; while (getline(ss, x, c))v.emplace_back(x); return move(v);} void err(vector<string>::iterator it) {}
template<typename T, typename... Args>void err(vector<string>::iterator it, T a, Args...args) {cout << it->substr((*it)[0] == ' ', it->length()) << " = " << a << " "; err(++it, args...);}

const int lim = 1048576;
const int Inf           = (int)2e9 + 5;
const ll  Lnf           = (ll)2e18 + 5;
const int N             = 5e5 + 5;
const int NN            = 1e6 + 5;

ll dp[100][N];

ll knapsack(ll w,vector<ll>&wa,vector<ll>&profit,ll n)
{
  if(n<0 or w==0)
  {
    return 0;
  }
  if(dp[n][w]!=-1)
    return dp[n][w];
  ll value=0;
  if(w<wa[n])
    value= knapsack(w,wa,profit,n-1);
  else
    value= max(profit[n]+knapsack(w-wa[n],wa,profit,n-1),
                              knapsack(w,wa,profit,n-1));


  return dp[n][w]=value;


}

int main()
{
  ll n,w;
  cin>>n>>w;
  vector<ll>wa(n);
  vector<ll>profit(n);
  memset(dp,-1,sizeof dp);
  for (ll i = 0; i < n; ++i)
  {
    cin>>wa[i]>>profit[i];
  }
  cout<<knapsack(w,wa,profit,n-1)<<endl;;
}


