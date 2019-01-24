#include<iostream>
using namespace std;
int fun(int m,int n){
	long sum;
	if(m < n) sum = 0;
	else if(n == 0) sum = 1;
	else sum = fun(m,n-1) + fun(m-1,n);
	return sum;
}
int main(){
	int a, b, count;
	cin >> count;
	while(count){
		cin >> a >> b;
		cout << fun(a, b) <<endl;
		count--;
	}
}
