//finding nearest 2 power number
//then checking how many setbits before the  nearest 2 power number
// to check that use x*2^(x-1)
//then check remaining bits are avialabel
// then by using recursion finding the setbits for (n - 2^x);


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
