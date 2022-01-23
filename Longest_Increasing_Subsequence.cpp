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

int solve()
{
  ll n;
  cin>>n;
  vector<int>v(n);
  for (int i = 0; i < n; ++i)
  {
    cin>>v[i];
  }
  vector<int>seq;
  seq.pb(v[0]);

  for (int i = 1; i < n; ++i)
  {
    if(seq.back()<v[i])
    {
      seq.pb(v[i]);
    }
    else
    {
      int idx=lower_bound(seq.begin(),seq.end(),v[i])-seq.begin();
      seq[idx]=v[i];
    }
  }

  cout<<seq.size();


  return 0;
}

int main(){
  ll i,test=1;
  cin>>test;
  for (i = 0; i < test; ++i)
  {
    solve();    
  }
  return 0;
}


