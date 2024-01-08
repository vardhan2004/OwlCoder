//kadanes algorithm is Nothing that instead carrying negative carry nothing
//to find the maximum sub array sum it will be help full
//Time complexity O(n)
// take two variables maxsum and cursum
//if you get negative num carry 0 ie, cursum = 0
//else cursum += num
// space complexity O(1)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    int arr[5] = {1,2,3,-2,5};
    int mx = INT_MIN;
    int cs = 0;
    for(int i = 0; i < n; i++){
        cs += arr[i];
        mx = max(mx, cs);
        cs = cs < 0? 0:cs;
    }
    cout << cs;
    return 0;
}

