#include <iostream>
using namespace std;
int deal(int n) {
	if(n = 0)return 0;
	else if(n = 1)return 1;
	else return ((n-1)*deal(n-2)+(n-2)*(n-1)*deal(n-2));
}
int main() {
	int n;
	cin >> n;
	cout << deal(n) << endl;
}