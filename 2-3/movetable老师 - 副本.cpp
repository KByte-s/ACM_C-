#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int room[201], temp, group, max, begin, end;
	cin >> temp;
	while(temp--){
		max = 0;
		memset(room, 0, sizeof(room));
		cin >> group;
		for (int i = 0; i < group; ++i) {
			cin >> begin >> end;
			if(begin % 2 == 0)
				begin = begin/2;
			else begin = (begin+1)/2;
			if(end % 2 == 0)
				end = end/2;
			else end = (end+1)/2;
			
			if(begin > end){
				begin ^= end;
				end ^= begin;
				begin ^= end;
			}
			for (int j = begin; j <= end; ++j)
				room[j] += 1;
		}
		for (int k = 1; k <= 200; k++)
			if(room[k] > max)max = room[k];
		cout << 10 * max << endl;	
	}
	return 0;
}
