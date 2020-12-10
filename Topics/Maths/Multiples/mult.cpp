#include <bits/stdc++.h>
using namespace std;

int main(){
    /// Multiples :
    /// All the numbers that are divisible by some Integer
    /// ßá ÇáÃÚÏÇÏ Çááí ÈÊÞÈá ÇáÝÓãå Úáì ÑÞã ãÚíä
    // Given a number a and limit n. Find the sum of multiple of a up to n.
    /// number of multiples(m) = n/a
    /// sum of all multiples = a * (sum_from_1_to_m) = a * (m*(m+1)/2)
    int a,n;
    cin>>a>>n;
    for(int i = 1 ; i <= n ; i++){
        if(i%a==0){
            cout<<i<<" ";
        }
    }
}
