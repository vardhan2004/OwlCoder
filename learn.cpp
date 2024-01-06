//prime factorization.
//first you have to check whether the number is divisible by 2 or not.
//if it is divisible then check how many times it is divisible then include that count to the answer
//after that start with 3  then check whether the number is divisible by 3 or not 
//if it is divisible then check how many times it is divisible by 3 and increment the step by 2
//because all the 2 multiples are eliminated
//go upto square root of n + 1
// if n after the above steps if it is greater then 1 included to ans




#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 8;
    int cnt = 0;
    if(n % 2 == 0){
        cnt++;
        n /= 2;
    }
    cout << n;
    for(int i = 3; i <= sqrt(n) + 1; i += 2){
        while(n % i == 0){
            cnt++;
            n /= i;
        }
    }
    if(n > 1){
        cnt++;
    }
    cout << cnt;
   
}