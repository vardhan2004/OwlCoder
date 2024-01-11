#include <bits/stdc++.h>
using namespace std;
vector<int> primes(int n)
{
    vector<int> seive(n + 1, 1);
    seive[0] = 0;
    seive[1] = 0;
    for(int i = 2; i*i< n; i++){
        if(seive[i] == 1){
            for(int j = i*i; j < n; j += i){
                seive[i] = 0;
            }
        }
        
    }
    for(auto it:seive){
        cout << it << " ";
    }
    
    return seive;
    
    
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t){
	    int n;
	    cin >> n;
	    vector<int>prime = primes(n);
       
	    int cnt = 0;
	    for(int i = 3; i < n; i += 2){
	        if(prime[i] && prime[i + 2] && i + 2 <= n){
               
	            cnt++;
	            
	        }
	    }
	    cout << cnt << endl;
	    t--;
	}

}
