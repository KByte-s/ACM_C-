#include <iostream>
int deal(int month); 
using namespace std;
int main(){
	int month;
	while(cin >> month){
		cout << deal(month) << endl;
	}
}
int deal(int month){
	int temp[month];
	if(month == 1)return 1;
	if(month == 2)return 1;
	temp[0] = 1; temp[1] = 1;
	int i;
	for(i = 2; i < month + 1; i++){
		temp[i] = temp[i-1] + temp[i-2];
	}
	return temp[i - 2];
}
