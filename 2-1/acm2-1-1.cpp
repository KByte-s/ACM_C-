#include<iostream>
using namespace std; 
int main()
{
	int n;
	while(cin>>n){
		if(n<1000001){
			if ((n + 2) % 4 == 0)
				cout<<"yes"<<endl;
			else cout<<"no"<<endl;
		}
	}
	return 0;
}