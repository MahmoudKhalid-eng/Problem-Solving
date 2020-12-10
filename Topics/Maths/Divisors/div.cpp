#include <bits/stdc++.h>
using namespace std;

int main(){
    /// Divisors
    /// All the numbers that a number accepts dividing by them
    /// ßá ÇáÃÑÞÇã Çááí ÑÞã íÞÈá ÇáÞÓãå ÚáíåÇ
    // Find all divisors of n number
    int n;
    cin>>n;
	for (int i = 1; i <= n/i; i++) {
		if (n % i == 0) {
			if (n / i == i) // if divisors are equal print only one of them
				cout<<i<<" ";
			else
				cout<<i<<" "<<n/i<<" ";
		}
	}



}
