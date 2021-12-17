#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

/*******  All Required define Pre-Processors and typedef Constants *******/
#define Mem(a, b) memset(a, (b), sizeof(a))
#define ForTo(i, j, k) for (int i=j ; i<=k ; i++)
#define For(i, j) ForTo(i, 0, j-1)
#define Foreach(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define mp make_pair
#define pb push_back
#define inf (int)2147483647
#define PI 3.1415926
typedef pair<int, int> ipair;
typedef vector<int> ivector;
typedef vector<string> svector;
typedef vector<ipair> pvector;
typedef vector<ivector> iivector;
typedef long int iint;
typedef unsigned long int uiint;
typedef long long int llong;
typedef unsigned long long int  ullong;
#define MOD 1000000007

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        llong arr[n];
        llong maxH=0,minH=inf;
        For(i,n) cin>>arr[i];
        sort(arr,arr+n);
        if(arr[0]==arr[n-1]){
            For(i,n-1)
                cout<<arr[i]<<" ";
            cout<<arr[n-1]<<'\n';
            continue;
        }
        llong minD = inf;
        int ci = 0;
        For(i,n-1){
            if(arr[i+1]-arr[i]<minD){
                minD = arr[i+1]-arr[i];
                ci = i;
            }
        }
        cout<<arr[ci]<<" ";
        ForTo(i,ci+2,n-1){
            cout<<arr[i]<<" ";
        }
        ForTo(i,0,ci-1){
            cout<<arr[i]<<" ";
        }
        cout<<arr[ci+1]<<'\n';
    }
}