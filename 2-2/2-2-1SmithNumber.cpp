#include <iostream>
#include <cmath>
using namespace std;
int prime(int num);
int NumSum(int num);
int PrimeSum(int num);
int main(){
	int num;
	while(cin >> num){
		if (num == 0) break;
		while (1) {
			num += 1;
			if (prime(num) != 0) {
				if (NumSum(num) == PrimeSum(num)) {
					cout << num << endl;
					break;
				}
			}
		}
	}
	return 0;
}

int prime(int num){
	if (num == 1) return 0;
	for(int i = 2; i * i <= num; i++){
		if(num % i == 0) return 1;
	}
	return 0;
}

int NumSum(int num){
	if (num==1)
		return 0;
	int sum = 0;
	while(num != 0){
		sum += num % 10;
		num = num / 10;
	}
	return sum;
}

int PrimeSum(int n) {
	int rec = 0;
	int i = 2;
	while (i * i <= n) {
		while (n % i == 0) {
			n /= i;
			rec += NumSum(i);
		}
		i++;
	}
	rec += NumSum(n);
	return rec;
}
