#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin >> n){
		long s = 1, t = 1, sum = 0;
		if(n<2||n>10)continue;
		for(int i = 2; i <= n; i++) s *= i;
		for(int j = 2; j <= n; j++){
			t *= j;
			if(j % 2 == 1) sum -= s / t;
			else sum += s / t;
		}
		cout << sum << endl;
	}
	return 0;
}