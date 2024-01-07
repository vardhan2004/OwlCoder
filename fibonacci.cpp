#include<bits/stdc++.h>
using namespace std;
void fun(int a, int b, int n){
    if(n <= 0) return;
    cout << a << " ";
    fun(b, a + b, --n);
    cout << a << " ";
}
int main(){
    int n;
    cin >> n;
    int a = 0, b = 1;
    fun(a, b, n);
}