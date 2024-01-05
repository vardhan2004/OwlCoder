#include<bits/stdc++.h>
using namespace std;
int nearest2Pow(int n){
    int mask = 1;
    int p = 0;
    while(mask <= n){
        p++;
        mask <<= 1;
    }
    return p - 1;
}
int setBitCnt(int n){
    if(n == 0) return 0;
    int x = nearest2Pow(n);
    int ans = x*(1 << (x - 1)) + (n - (1 << x)) + 1 + setBitCnt(n - (1 << x));
    return ans;
}
int main(){
    int n;
    cin >> n;
    cout << setBitCnt(n);
    return 0;
}