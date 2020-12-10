
#include <bits/stdc++.h>
using namespace std;
int countDivisors(int n)
{
	int cnt = 0;
	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			if (n / i == i)
				cnt++;
			else
				cnt = cnt + 2;
		}
	}
	return cnt;
}
int maxCountDiv(int arr[],int n){
    int maxdiv=countDivisors(arr[0]);
    int maxelem=arr[0];
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(countDivisors(arr[i])>=maxdiv){
            maxdiv = countDivisors(arr[i]);
            maxelem = arr[i];
        }
    }
    return maxelem;
}

int main()
{
	cout<<"Total distinct divisors of 100 are : "<<countDivisors(14);

	return 0;
}
