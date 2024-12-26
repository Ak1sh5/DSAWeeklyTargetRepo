#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int n=1000000;
vector<int> primess;

void sieve() {
    primess.resize(n+1, 1);
    primess[0] = 0;
    primess[1] = 0;
    for (int i = 2; i * i <= n; i++) {
        if (primess[i]) {
            for (int j = i * i; j <= n; j += i) {
                primess[j] = 0;
            }
        }
    }
}

vector<int> primegen(int limit){
    vector<int> ds;
    for(int i=2;i<=limit;i++){
        if(primess[i]){
            ds.push_back(i);
        }
    }
    return ds;
}

int main(){
    sieve();
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        //generate all primes till sqrt(r)
        vector<int> primetilln= primegen(sqrt(r));
        
        //dummy vector to store primes in range l to r
        vector<int> primesInRange(r-l+1,1);
          
        //for all prime nubers till sqrt(r) mark all multiples of prime numbers as 0
        for(auto pr:primetilln){
            int firstMultiple=(l/pr)*pr;

            if(firstMultiple<l){
                firstMultiple+=pr;
            }

            for(int j=max(firstMultiple,pr*pr);j<=r;j+=pr){
                
                    primesInRange[j-l] = 0; 
            }
        }

        //get all primes 
        for(int i=l;i<=r;i++){
            if(primesInRange[i-l]){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
 }