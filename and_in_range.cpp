#include<bits/stdc++.h>
using namespace std;
// time complexity O(logn)
// approach:-
// 1) finding the nearest 2power number to the left number
// 2) check the right number is less than the next nearest 2power of the right number
// 3) for example left = 12 and right = 15
// 4) Here the nearest 2pow of (12) = 8(1000)
// 5) and right number is less than 16
// 6) so answer not equals to 0
// 7) then add 8 to the answer wait there is something left
// 8) 1100
//    1101
//    1110
//    1111
// 9)here you need to find the answer for left - nearest 2pow of (12) && right - nearest 2pow of (12)
// 10) 12 - 8 = 4, 15 - 8 = 7 repeat the process for 4 and 7 also 
int nst2Pow(long long n){
    long long mask = 1;
    while(mask <= n){
        mask <<= 1;
    }
    return mask >> 1;
}
int rangeBitwiseAnd(int left, int right) {
    if(left <= 0 || right <= 0) return 0;
    if(left == 1) return left == right;
    long long n = nst2Pow(left);
    if(right >= n*2) return 0;
    return n + rangeBitwiseAnd(left - n, right - n);
}
int main(){
	long long left, right;
	cin >> left >> right;
	cout << rangeBitwiseAnd(left , right);
	return 0;
}