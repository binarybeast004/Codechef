// ---------------------------------------------------------------------//
//                           Assalamualaikum                            //
//             American International University Bangladesh             //
//                            Binarybeast004                            //
// ---------------------------------------------------------------------//
#include <bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define LL          long long
#define FOR(i,n)    for(int i=0;i<n;i++)
#define rep(i,k,n)  for(int i=k; i<n; i++)
#define repp(i,k,n) for(int i=k; i<=n; i++)

int main(){

   int t;
   cin>>t;
   rep(i,0,t){
       LL int a[3]; 
       rep(i,0,3){
           cin>>a[i];
           
       }
       sort(a, a+3);
       cout<<a[1]<<endl;
   }
    return 0;
}
